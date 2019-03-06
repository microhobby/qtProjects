FROM matheuscastello/qt-build:alpha as build

# add src project
ADD . /project
WORKDIR /project

# build
RUN PATH=/usr/local/Qt-5.12.1/bin:$PATH && \
	export PATH && qmake && make -j12

# multi stage put on myx
FROM matheuscastello/myx as release

# get project build
COPY --from=build /project/hello .

# get QT5 sysroot
COPY --from=build /usr/lib/arm-linux-gnueabihf/ /usr/lib/arm-linux-gnueabihf/
COPY --from=build /usr/local/Qt-5.12.1/lib/ /usr/local/Qt-5.12.1/lib/

# put app to run at startx
RUN echo "hello" > ~/.xinitrc
ENV DISPLAY :0

# and pray for your goods
CMD ["startx"]

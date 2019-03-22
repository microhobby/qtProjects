FROM matheuscastello/qt-build:alpha as build

# cross
COPY qemu-arm-static /usr/bin

# add src project
ADD . /project
WORKDIR /project

# build
RUN PATH=/usr/local/Qt-5.12.1/bin:$PATH && \
	export PATH && qmake && make -j12

# multi stage put on myx
FROM matheuscastello/myx-qt as release

# get project build
COPY --from=build /project/hello .

# put app to run at startx
RUN echo "/hello" > ~/.xinitrc
ENV DISPLAY :0

# and pray for your goods
CMD ["startx"]

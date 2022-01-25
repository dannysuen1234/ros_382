#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/vtl/industrial_ws/src/mir_robot/mir_driver"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/vtl/industrial_ws/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/vtl/industrial_ws/install/lib/python2.7/dist-packages:/home/vtl/industrial_ws/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/vtl/industrial_ws/build" \
    "/usr/bin/python2" \
    "/home/vtl/industrial_ws/src/mir_robot/mir_driver/setup.py" \
     \
    build --build-base "/home/vtl/industrial_ws/build/mir_robot/mir_driver" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/vtl/industrial_ws/install" --install-scripts="/home/vtl/industrial_ws/install/bin"

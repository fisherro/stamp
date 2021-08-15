# Stamp

Stamp is a simple command-line utility that outputs each line of its input prefixed with a date/time stamp.

This can be useful if you have some program that takes a log time to run that prints status updates and you want to know when each update was printed.

(No doubt there is some existing utility that would do this, but it was quicker for me to write this one than to find it.)

## Usage

Simply pipe some output into stamp.

    foo | stamp

If foo produces colorized output when connected to a TTY, you may want to give it an option to tell it to always colorize its output.

    foo --color=always | stamp

It foo doesn't have an option for that, you can use _unbuffer_ from _expect_ to make it think it is connected to a TTY.

    unbuffer foo | stamp

## Building

If you have GNU make and a C++11 (or newer) compiler, you should be able to build stamp by simply saying...

    make stamp

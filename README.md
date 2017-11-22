# Noise Animation Generator

This is a simple C progam that generates animated GIF file based on C's stdlib `rand()` function.

![](noise.gif)

The output of the program is multiple frames in [PPM](http://netpbm.sourceforge.net/doc/ppm.html) format.

We will then use `convert` command from ImageMagick to convert them to animated GIF file.

To run, type:

```
make convert
```

The output will be `noise.gif`.

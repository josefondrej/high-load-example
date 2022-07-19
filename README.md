# High Load + Low CPU Usage Example

Build the docker image with some intensive multiprocessing task ...

```
make build
```

... and run it on a single CPU ...

```
make run
```

Now the computer should still have acceptable CPU usage, but the load will be extremely high (you may need to wait a
minute or two for this). In my case it was something like this when I run `htop`.

```
    0[||||||||                  23.7%]     4[||||||||                  23.5%]
    1[|||||||                   21.1%]     5[|||||||                   22.2%]
    2[|||||||||                 23.3%]     6[|||||||||                 25.0%]
    3[||||||                    17.3%]     7[|||||||                   19.6%]
  Mem[||||||||||||||||||||6.46G/15.1G]   Tasks: 654, 881 thr; 8 running
  Swp[                       0K/2.00G]   Load average: 115.36 52.62 22.91 
                                         Uptime: 00:09:48
```
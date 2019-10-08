# megabloat
Such bloat, very mega, wow

[![asciicast](https://asciinema.org/a/5kpUbfq0AYqpnnzHQDuZNGw0k.svg)](https://asciinema.org/a/5kpUbfq0AYqpnnzHQDuZNGw0k)

Wanting to test memory limit flags?

Want a container that blows up memory?

Look no further than `megabloat`!

```
make build
```

Run out of 1g of memory in 10 seconds
```
docker run --rm -it --memory="1g" --memory-swap="1g" megabloat:latest
```

Run out of 500MB of memory in 5 seconds
```
docker run --rm -it --memory="500m" --memory-swap="500m" megabloat:latest
```

Not satisified?! You can run out of 100MB of memory in just 1 second!
```
docker run --rm -it --memory="100m" --memory-swap="100m" megabloat:latest
```

_Dramatization.  Do not attempt to run megabloat w/out a memory limit.  Void where prohibited.  Do not use on a production environment.  Advertised timing doesn't reflect container startup and shutdown timing._

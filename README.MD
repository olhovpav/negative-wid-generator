# Build

```bash
cmake -S . -B build -DCMAKE_PREFIX_PATH:PATH=<path/to/Qt>
cmake --build build
```

# Usage

Run negative-wid-generator

```bash
build/Debug/negative-wid-generator.exe
```

Wait for a negative window id. After that, the window will be shown. Use a negative wid (the first column) or an unsigned wid (the second) to run mpv:

```bash
mpv.exe <path/to/video> --wid=<wid>
```

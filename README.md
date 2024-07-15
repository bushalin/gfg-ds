# CPP template

This template is structured for setting up a `c++` project.

## Build and installation:

For building the application, we can use `build.sh` script in the application root directory.

```bash
$ ./build.sh

Hello World
```

Internally we are using `CMake` for the build. After a successful build, the executables should be generated in `/build/bin` directory.

### Executables:

After the build, we can get the executable named `/build/bin/SAMPLE_APP`.

We can run the executable as:
```bash
$ ./build/bin/SAMPLE_APP
```
By default, tests are also enabled for the project template. Building the application will automatically build the test executable named `SAMPLE_APP_test`.

To run the tests, we need to run the generated test executable:

```bash
$ ./build/bin/SAMPLE_APP_test
```

## Structure of the application
Structure of the application is as follows:

<pre>
 .
├── build_application.sh
├── CMakeLists.txt
├── docker
│  └── dockerfile
├── docker-compose.yaml
├── libs
│  ├── aarch64
│  │  ├── include
│  │  │  └── external
│  │  └── lib
│  │     └── external
│  └── x86_64
│     ├── include
│     │  └── external
│     └── lib
│        └── external
├── LICENSE
├── README.md
├── src
│  ├── application
│  │  ├── another.cpp
│  │  └── another.hpp
│  ├── CMakeLists.txt
│  └── main.cpp
└── tests
   ├── CMakeLists.txt
   └── tests.cpp

</pre>

For including the libraries, just add the header files in the include directory. For `SO` files, use the `libs/{arch}/lib/` directory.

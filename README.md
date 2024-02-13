
# libmaker

`libmaker` is a Python script designed to generate the basic structure for an Arduino library. It provides a starting point for building your library, including default generated code.

## Usage

Simply run the script and provide your desired library name. Additionally, you can use optional flags to customize the generated output.

`python libmaker.py Name`

>|--Name
>|  |- Name.h
>|  |- Name.cpp

`python libmaker.py Name --arduino`

>|--Name
>|  |--example
>|  |  |--example
>|  |     |- example.ino
>|  |- library.json
>|  |- library.properties
>|  |- keywords.txt
>|  |- Name.h
>|  |- Name.cpp

`python libmaker.py Name --src`

>|--Name
>|  |--src
>|  |  |- Name.h
>|  |  |- Name.cpp

`python libmaker.py Name --arduino --src`

>|--Name
>|  |--example
>|  |  |--example
>|  |     |- example.ino
>|  |- library.json
>|  |- library.properties
>|  |- keywords.txt
>|  |--src
>|  |  |- Name.h
>|  |  |- Name.cpp




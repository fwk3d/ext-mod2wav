#if CODE

AUTORUN {
    recipe(
        // paths and extensions. expected errorlevel
        "**.mod;**.xm;**.s3m;**.it", 0,
        // conversion steps
        "ext/ext-audio-mod2wav/mod2wav.EXE INPUT OUTPUT\n"
    );
}

#endif

if(UNIX OR APPLE)
    set(self opentrack-qxt-mini)
    otr_module(qxt-mini NO-COMPAT BIN)
    if(APPLE)
        target_link_options(${self} PUBLIC -framework Carbon -framework CoreFoundation)
    else()
        otr_pkgconfig(${self} x11 xcb xproto)
    endif()
    target_compile_definitions(${self} PRIVATE -DQXT_BUILD)
endif()

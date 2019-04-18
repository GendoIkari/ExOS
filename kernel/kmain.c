void kernel_main()
{
    volatile char* frame_buffer = (char*)0x000B8000;

    frame_buffer[0] = 'A';
    frame_buffer[1] = 0x28;

    while (1) {
    }
}

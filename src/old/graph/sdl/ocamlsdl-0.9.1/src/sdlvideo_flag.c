/* video_flag : conversion table */
lookup_info ml_table_video_flag[] = {
  { 0, 16 },
  { MLTAG_NOFRAME, SDL_NOFRAME },
  { MLTAG_SRCALPHA, SDL_SRCALPHA },
  { MLTAG_DOUBLEBUF, SDL_DOUBLEBUF },
  { MLTAG_OPENGL, SDL_OPENGL },
  { MLTAG_RLEACCEL, SDL_RLEACCEL },
  { MLTAG_PREALLOC, SDL_PREALLOC },
  { MLTAG_FULLSCREEN, SDL_FULLSCREEN },
  { MLTAG_SRCCOLORKEY, SDL_SRCCOLORKEY },
  { MLTAG_ASYNCBLIT, SDL_ASYNCBLIT },
  { MLTAG_HWACCEL, SDL_HWACCEL },
  { MLTAG_HWSURFACE, SDL_HWSURFACE },
  { MLTAG_ANYFORMAT, SDL_ANYFORMAT },
  { MLTAG_RESIZABLE, SDL_RESIZABLE },
  { MLTAG_OPENGLBLIT, SDL_OPENGLBLIT },
  { MLTAG_HWPALETTE, SDL_HWPALETTE },
  { MLTAG_SWSURFACE, SDL_SWSURFACE },
};

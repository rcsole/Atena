/**
 * Atena Game Engine
 * texture.h
 *
 * Copyright 2014-present [Ricard Sole <@rcsole, ricardsolecasas@gmail.com>]
 */

#ifndef LIB_TEXTURES_TEXTURE_H_
#define LIB_TEXTURES_TEXTURE_H_

#include <SDL2/SDL.h>
#include <jansson.h>
#include <string>
#include <unordered_map>
#include <vector>

class Texture {
 public:
  explicit Texture(SDL_Texture *t) : texture(t) {}
  Texture(SDL_Texture *t, json_t *json);
  ~Texture();

  std::vector<int> getFrame(std::string key);
  SDL_Texture *getTexture();

 private:
  SDL_Texture *texture;
  std::unordered_map<std::string, std::vector<int> > frames;
};

#endif  // LIB_TEXTURES_TEXTURE_H_

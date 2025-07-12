import pygame

class Player:
    def __init__(self, x, y):
        self.image = pygame.image.load("assets/sprites/player_idle.png")
        self.rect = self.image.get_rect(topleft=(x, y))
        self.speed = 2

    def update(self, keys):
        if keys[pygame.K_LEFT]:
            self.rect.x -= self.speed
        elif keys[pygame.K_RIGHT]:
            self.rect.x += self.speed

    def draw(self, surface):
        surface.blit(self.image, self.rect)

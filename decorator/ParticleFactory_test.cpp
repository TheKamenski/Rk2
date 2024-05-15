#include "gtest/gtest.h"
#include "ParticleFactory.cpp"

TEST(ParticleFactoryTest, GetParticle_ExistingParticle) {
  ParticleFactory factory;
  auto particle1 = factory.getParticle("red");
  auto particle2 = factory.getParticle("red");
  EXPECT_EQ(particle1, particle2);
}

TEST(ParticleFactoryTest, GetParticle_NewParticle) {
  ParticleFactory factory;
  auto particle1 = factory.getParticle("blue");
  EXPECT_NE(particle1, nullptr);
}

TEST(ParticleFactoryTest, DifferentParticles) {
  ParticleFactory factory;
  auto particle1 = factory.getParticle("red");
  auto particle2 = factory.getParticle("blue");
  EXPECT_NE(particle1, particle2);
}


#include "BumpMap.h"

namespace NoLimits {
    namespace NoLimits2 {
        std::string BumpMap::getTexture() const {
            return texture;
        }

        void BumpMap::setTexture(const std::string &value) {
            texture = value;
        }

        TerrainMap BumpMap::getMapType() const {
            return mapType;
        }

        void BumpMap::setMapType(const TerrainMap &value) {
            mapType = value;
        }

        float BumpMap::getHeightMapScale() const {
            return heightMapScale;
        }

        void BumpMap::setHeightMapScale(float value) {
            heightMapScale = value;
        }

        std::string BumpMap::getSpecularMapTexture() const {
            return specularMapTexture;
        }

        void BumpMap::setSpecularMapTexture(const std::string &value) {
            specularMapTexture = value;
        }

        uint32_t BumpMap::getRepeatIndex() const {
            return repeatIndex;
        }

        void BumpMap::setRepeatIndex(const uint32_t &value) {
            repeatIndex = value;
        }
    }
}

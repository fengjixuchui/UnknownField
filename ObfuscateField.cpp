#include "ObfuscateField.h"

std::map<std::string, std::vector<const clang::FieldDecl *>>
    GlobalFieldNodeVectorMap;
std::map<std::string, std::vector<std::string>>
    GlobalClassFieldDeclStringVectorMap;
std::map<std::string, bool> GlobalSDKUnknownFieldProtectionEnabledMap;

cl::opt<bool> GlobalObfucated{"g", cl::desc("GlobalObfucated"),
                              cl::init(false)};
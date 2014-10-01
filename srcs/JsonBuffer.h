#pragma once

#include "Internals/JsonNode.h"


class JsonObject;
class JsonValue;
struct JsonNode;

class JsonBuffer
{
    friend class JsonContainer;

public:
//    virtual ~JsonBuffer() = 0;

    JsonObject createObject();
    JsonValue createValue();

protected:
    virtual JsonNode* allocateNode() = 0;

private:
    JsonNode* createNode(JsonNodeType type);
};

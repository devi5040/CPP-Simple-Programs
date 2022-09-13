#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Message
{
public:
    Message() {}
    Message(const int &p_id, const string &p_sText) : m_sText(p_sText), m_id(p_id) {}
    const string &get_text()
    {
        return m_sText;
    }
    const int &get_id() const
    {
        return m_id;
    }

private:
    string m_sText;
    int m_id;
};
bool operator<(const Message &lhs, const Message &rhs)
{
    return lhs.get_id() < rhs.get_id();
}
class MessageFactory
{
public:
    MessageFactory() {}
    Message create_message(const string &text)
    {
        return {m_id++, text};
    }

private:
    int m_id = 0;
};

class Recipient
{
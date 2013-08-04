
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_html_parser_Parser$1__
#define __javax_swing_text_html_parser_Parser$1__

#pragma interface

#include <gnu/javax/swing/text/html/parser/support/Parser.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
        namespace html
        {
          namespace parser
          {
              class DTD;
              class Element;
              class Parser;
              class Parser$1;
              class TagElement;
          }
        }
      }
    }
  }
}

class javax::swing::text::html::parser::Parser$1 : public ::gnu::javax::swing::text::html::parser::support::Parser
{

public: // actually package-private
  Parser$1(::javax::swing::text::html::parser::Parser *, ::javax::swing::text::html::parser::DTD *, ::javax::swing::text::html::parser::Parser *);
public: // actually protected
  virtual void handleComment(JArray< jchar > *);
  virtual void handleEOFInComment();
  virtual void handleEmptyTag(::javax::swing::text::html::parser::TagElement *);
  virtual void handleStartTag(::javax::swing::text::html::parser::TagElement *);
  virtual void handleEndTag(::javax::swing::text::html::parser::TagElement *);
  virtual void handleError(jint, ::java::lang::String *);
  virtual void handleText(JArray< jchar > *);
  virtual void handleTitle(JArray< jchar > *);
  virtual void markFirstTime(::javax::swing::text::html::parser::Element *);
  virtual void startTag(::javax::swing::text::html::parser::TagElement *);
  virtual void endTag(jboolean);
  virtual ::javax::swing::text::html::parser::TagElement * makeTag(::javax::swing::text::html::parser::Element *);
  virtual ::javax::swing::text::html::parser::TagElement * makeTag(::javax::swing::text::html::parser::Element *, jboolean);
public: // actually package-private
  ::javax::swing::text::html::parser::Parser * __attribute__((aligned(__alignof__( ::gnu::javax::swing::text::html::parser::support::Parser)))) this$0;
private:
  ::javax::swing::text::html::parser::Parser * val$j;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_text_html_parser_Parser$1__
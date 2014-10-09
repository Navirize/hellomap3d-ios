#ifndef Text_H_
#define Text_H_

#include "vectorelements/Label.h"

#include <memory>
#include <string>

namespace Nuti {

class TextStyle;

/**
 * A text element that can be displayed on the map.
 */
class Text : public Label {
public:
    /**
     * Constructs a Text object with the specified style and attaches it to a billboard element.
     * @param baseBillboard The billboard this text label will be attached to.
     * @param style The style that defines what this text label looks like.
     * @param text The text to be displayed.
     */
	Text(const std::shared_ptr<Billboard>& baseBillboard, const std::shared_ptr<TextStyle>& style, const std::string& text);
    /**
     * Constructs a Text object from a geometry object and a style.
     * @param geometry The geometry object that defines the location of this text label.
     * @param style The style that defines what this text label looks like.
     * @param text The text to be displayed.
     */
    Text(const std::shared_ptr<PointGeometry>& geometry, const std::shared_ptr<TextStyle>& style, const std::string& text);
    /**
     * Constructs a Text object from a map position and a style.
     * @param poses The map position that defines the location of this text label.
     * @param style The style that defines what this text label looks like.
     * @param text The text to be displayed.
     */
    Text(const MapPos& pos, const std::shared_ptr<TextStyle>& style, const std::string& text);
	virtual ~Text();
    
    virtual std::shared_ptr<Bitmap> drawBitmap(float dpToPX) const;
    
    /**
     * Returns the display text.
     * @return The display text.
     */
    std::string getText() const;
    /**
     * Sets the display text.
     * @param text The text to be displayed.
     */
    void setText(const std::string& text);

	/**
     * Returns the style of this text label.
     * @return The style that defines what this text label looks like.
     */
	std::shared_ptr<BillboardStyle> getStyle() const;
    /**
     * Sets the style for this text label.
     * @return The new style that defines what this text label looks like.
     */
	void setStyle(const std::shared_ptr<TextStyle>& style);

private:
	std::shared_ptr<TextStyle> _style;

	std::string _text;
};

}

#endif

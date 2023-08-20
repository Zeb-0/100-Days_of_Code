# DAY 28 - 100-Days_of_Code

- decided to do some html-css work to refresh my memory on some front-end Development
## HTML
- Divisions & Spans
    * `<div></div>` 
    * `<span></span>`
- Text-Based elements:
    * `<h11></ha>`
    * `<p></p>`
    * `<b>` - offsets text stylistically
    * `<strong>` - gives strong importance to text
    * `<em>` - place `stressed emphasis` on text
    * `<i>` - convey txt in `alternative voice/tone` like in quotes

### Header
- used to designate the top of a page, article, section or other segment of a page.
- uses:
    * `<header>...</header>`

### Navigation
- identifis a section of major `navigational links` on a page
- should be reserved only fpr primary navigation sections only like:
    * global navigation
    * table of contents
    * prev/next links
    * other very importaant groups of nav. links
- Navigation uses:
    * `<nav>...</nav>`

### Article
- uses `<article>...</article>` tag
- used to identify a section(s) of independent, self-contained content tht can be independently distributed or reused
- the content if replicated elsewhere sgould still make sense/meaningful

### Section
- denoted by: `<section>...</section>`
- used to identfy a thematic grouping of content
- may include a heading
- identifies all its content as related
- commonly used to break-up & provide hierachy to a page

### Aside
- denoted by : `<aside>...</aside>` tag
- holds content for:
    * sidebars
    * inserts
    * brief explanations
- used within an <article> element
- usually placed to `left` or `right` side of a page

### Footer
- Denoted by: `<footer>...</footer>` tag
- identifies the closing/end of a page, article, section.
- placed at bottom of its parent.

### Small
- denoted by: `<small>...</small>`tag
- Semantically represents side comments and small prints

--------------------
##Check out:
- [Encoding Characters](https://copypastecharacter.com/)
--------------------

## Hyperlinks
- Provide the ability to link from one web page to another
- employ the use of the `anchor` tag: `<a>`
    * the `<a>` tag needs `href` attribute to create the link - identifies the destination of the link.
- Hyperlinks take two types of links:
    * Relative - link within the open page
    * Absolute - link to outside pages(web)

### Linking to an Email Address
- check out:
    * [create email link](https://learn.shayhowe.com/html-css/getting-to-know-html/)

### Open links in new window
- Add `target` attribute and give it a value `_blank`

### link parts of same page
- We use an `ID` attribute on the element we wish to link to
- in the anchor `href`, set its value as the `id` we set up to link the element:
    * `<a href="#top">Back to top</a>` to link to top of linked element.
-------------------------------------------------------

Day 30 - 100-Days_of_Code
Picking up from where i left.

## Positioning

### Positioning with floats

- Uses the `float` prperty
- can be cleared using the `clear` property.

### Positioning with `Inline-Block`
- in this case we use `dispaly` property in conjunction with the `inline-block` value
    * Usage:
        - ```
        section {
            display: inline-block;
            ....
        }
        ```
#### Remove space between inline-block elements:
1. Put element's `opening tag` on same line as `closing tag` of previous element
    ```
    <header>...</header>
    <section>
     ...
    </section><section>
     ...
    </section><section>
     ...
    </section>
    ```
2. Using `HTML comments`
    ```
    <section>
        ...
    </section><!--
    --><section>
        ...
    </section><!--
    --><section>
        ...
    </section>
    ```
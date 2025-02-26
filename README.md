# Geometric-Art-Generator
Geometric transformations on objects to generate Vera Molnár-style patterns through a canvas structure

# S'eance 5 : Transformations simples et écriture de canvas

## Description
This project focuses on applying basic geometric transformations (translation, scaling, and rotation) to simple and composite objects. The goal is to create and manipulate a canvas to generate Vera Molnár-style patterns. The project involves creating structures and functions to transform objects and render them into SVG and HTML formats.

## Objectives
- Apply geometric transformations (translation, scaling, rotation) to simple and composite objects.
- Create a canvas structure to model a Vera Molnár-style table.
- Implement functions for translating objects and rendering the table in SVG and HTML formats.

## Features
- **Canvas Structure (`canvas.hpp`)**: Models the dimensions of the canvas, base complex object, and repetitions per row and column.
- **Transformation Functions**:
  - `translate_object`: Translates a simple object.
  - `translate_composedObject`: Translates a composite object.
  - `*_object` and `*_composedObject`: Functions for performing different geometric transformations like translation, scaling, and rotation.
- **SVG Rendering**: Functions to render a composed canvas to an SVG format.
- **HTML Output**: A main program to render a Vera Molnár-style table in HTML format with transformed objects.

## Files
- **canvas.hpp**: Structure definition for the canvas and transformations.
- **test_draw_none_canvas.cpp**: Program to generate a Vera Molnár-style table with no transformations.
- **test_draw_transform_canvas.cpp**: Program to generate a Vera Molnár-style table with transformations applied to the objects.

## Mathematical Help
### 1. **Scaling (Dilatation/Réduction)**
Scaling an object is done using a homothety. The new point \( M(xM, yM) \) is calculated from the center of the object \( G(xG, yG) \) with scaling factor \( k \) as follows:
- \( xM = xG + k \times (xC - xG) \)
- \( yM = yG + k \times (yC - yG) \)

### 2. **Rotation of a Point**
To rotate a point \( B(xB, yB) \) around a center \( O(xO, yO) \) by an angle \( \beta \), the coordinates of the rotated point \( C(xC, yC) \) are calculated using:
- \( xC = xO + \cos(\beta) \times (xB - xO) + \sin(\beta) \times (yB - yO) \)
- \( yC = yO - \sin(\beta) \times (xB - xO) + \cos(\beta) \times (yB - yO) \)

## How to Use
1. Clone the repository: `git clone https://github.com/yourusername/repo-name.git`
2. Compile the project: `g++ -o test_draw_none_canvas test_draw_none_canvas.cpp`
3. Run the main program: `./test_draw_none_canvas`
4. Generate transformed canvases with the transformation program: `./test_draw_transform_canvas`

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.


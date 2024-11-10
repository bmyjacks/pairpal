//
// Created by bmyjacks on 11/10/2024.
//

#ifndef UI_HPP
#define UI_HPP

/**
 * @class UI
 * @brief A class to manage the User Interface.
 */
class UI {
public:
    /**
     * @brief Constructor for the UI class.
     */
    UI();

    /**
     * @brief Destructor for the UI class.
     */
    ~UI();

    /**
     * @brief Show the UI.
     */
    void show();

    /**
     * @brief Hide the UI.
     */
    void hide();

    /**
     * @brief Update the UI.
     */
    void update();

    /**
     * @brief Render the UI.
     */
    void render();
};

#endif //UI_HPP
#include "Engine.h"

	// The Engine constructor
	Engine::Engine()
    {
        //m_Window.create();
        //VideoMode desktopMode = VideoMode::getDesktopMode();
        //VideoMode::getDesktopMode();

        // Get desktop resolution and create a smaller window
    VideoMode desktopMode = VideoMode::getDesktopMode();


    float windowWidth = desktopMode.width/2;
    float windowHeight = desktopMode.height/2;

    // Construct the RenderWindow
    RenderWindow window(VideoMode(windowWidth, windowHeight), "Particle");
    }
    
    // Run will call all the private functions
	void Engine::run()
    {
        Clock clock;
        cout << "Starting Particle unit tests..." << endl;
        Particle p(m_Window, 4, { (int)m_Window.getSize().x / 2, (int)m_Window.getSize().y / 2 });
        p.unitTests();
        cout << "Unit tests complete.  Starting engine..." << endl;
    }

    void Engine::input()
    {

    }

	void Engine::update(float dtAsSeconds)
    {

    }

	void Engine::draw()
    {

    }


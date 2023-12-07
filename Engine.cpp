#include "Engine.h"

	// The Engine constructor
	Engine::Engine()
    {
        VideoMode desktopMode = VideoMode::getDesktopMode();
        unsigned int screenWidth = desktopMode.width;
        unsigned int screenHeight = desktopMode.height;
        
        m_Window.create(VideoMode(screenWidth, screenHeight), "Particles");
        
    }
    
    // Run will call all the private functions
	void Engine::run()
    {
        Clock clock;
        cout << "Starting Particle unit tests..." << endl;
        Particle p(m_Window, 4, { (int)m_Window.getSize().x / 2, (int)m_Window.getSize().y / 2 });
        p.unitTests();
        cout << "Unit tests complete.  Starting engine..." << endl;

        while(m_Window.isOpen())
        {
            clock.restart;
            float dt = elapsedTime.asSeconds();
            input();
            update();
            draw();
        }
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


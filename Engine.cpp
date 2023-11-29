#include "Engine.h"

	// The Engine constructor
	Engine()
    {
        m_Window.create();
        //VideoMode desktopMode = VideoMode::getDesktopMode();
        VideoMode::getDesktopMode();
    }
    
    // Run will call all the private functions
	void run()
    {
        Clock clock;
        cout << "Starting Particle unit tests..." << endl;
        Particle p(m_Window, 4, { (int)m_Window.getSize().x / 2, (int)m_Window.getSize().y / 2 });
        p.unitTests();
        cout << "Unit tests complete.  Starting engine..." << endl;
    }

    void input()
    {
        
    }

	void update(float dtAsSeconds)
    {

    }

	void draw()
    {

    }


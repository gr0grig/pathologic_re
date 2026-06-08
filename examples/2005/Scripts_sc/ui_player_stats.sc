event OnMessage 200;
event OnChar 100;

maintask t0
{
	void init(void)
	{
		object L0;
		float L1;
		float L2;
		float L3;
		float L4;
		float L5;
		float L6;
		@CaptureKeyboard();
		@SetCursor("default");
		@FindActor(L0, "player");
		if (!L0) {
			@DestroyWindow();
			return;
		}
		L0->GetProperty("health", L1);
		@SendMessage(100 * L1, "health");
		L0->GetProperty("immunity", L1);
		@SendMessage(100 * L1, "immunity");
		L0->GetProperty("reputation", L1);
		@SendMessage(100 * L1, "reputation");
		L0->GetProperty("hunger", L1);
		@SendMessage(100 * L1, "hunger");
		L0->GetProperty("tiredness", L1);
		@SendMessage(100 * L1, "tiredness");
		L0->GetProperty("disease", L1);
		@SendMessage(100 * L1, "infection");
		L0->GetProperty("armor", L2);
		L0->GetProperty("armor_fire", L3);
		L0->GetProperty("armor_phys", L4);
		L0->GetProperty("armor_bullet", L5);
		L0->GetProperty("armor_disease", L6);
		@SendMessage(L2 + L3, "armor_fire");
		@SendMessage(L2 + L4, "armor_phys");
		@SendMessage(L2 + L5, "armor_bullet");
		@SendMessage(L6, "armor_disease");
		@SendMessage(700, "reputation_text");
		@SendMessage(701, "health_text");
		@SendMessage(702, "immunity_text");
		@SendMessage(703, "hunger_text");
		@SendMessage(704, "tiredness_text");
		@SendMessage(705, "infection_text");
		@SendMessage(706, "armor_phys_text");
		@SendMessage(707, "armor_bullet_text");
		@SendMessage(708, "armor_fire_text");
		@SendMessage(709, "armor_disease_text");
		@SendMessage(710, "body_text");
		@SendMessage(711, "clothes_text");
		@SendMessage(712, "time_text");
		@ProcessEvents();
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a1 == "people_button") {
			@DestroyWindow(1);
		}
	}

	void OnChar(int a0)
	{
		@DestroyWindow();
	}
}


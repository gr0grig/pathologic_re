include ui_std.sci
include ../game_ext.sci

maintask UI_PlayerStats
{
	void init(void) {
		@CaptureKeyboard();
		@SetCursor("default");
		
		object player;
		@FindActor(player, "player");
		if (!player) {
			@DestroyWindow();
			return;
		}
		
		float fVal;
		player->GetProperty("health", fVal);
		@SendMessage(100 * fVal, "health");
		
		player->GetProperty("immunity", fVal);
		@SendMessage(100 * fVal, "immunity");
		
		player->GetProperty("reputation", fVal);
		@SendMessage(100 * fVal, "reputation");
		
		player->GetProperty("hunger", fVal);
		@SendMessage(100 * fVal, "hunger");
		
		player->GetProperty("tiredness", fVal);
		@SendMessage(100 * fVal, "tiredness");
		
		player->GetProperty("disease", fVal);
		@SendMessage(100 * fVal, "infection");
		
		float fArmorBase;
		player->GetProperty("armor", fArmorBase);
		float fArmorFire;
		player->GetProperty("armor_fire", fArmorFire);
		float fArmorPhys;
		player->GetProperty("armor_phys", fArmorPhys);
		float fArmorBullet;
		player->GetProperty("armor_bullet", fArmorBullet);
		float fArmorDisease;
		player->GetProperty("armor_disease", fArmorDisease);
		
		// clothes property
		@SendMessage(fArmorBase + fArmorFire, "armor_fire");
		@SendMessage(fArmorBase + fArmorPhys, "armor_phys");
		@SendMessage(fArmorBase + fArmorBullet, "armor_bullet");
		@SendMessage(fArmorDisease, "armor_disease");
		
		// text messages
		@SendMessage(c_iTID_PD_Reputation, "reputation_text");
		@SendMessage(c_iTID_PD_Health, "health_text");
		@SendMessage(c_iTID_PD_Immunity, "immunity_text");
		@SendMessage(c_iTID_PD_Hunger, "hunger_text");
		@SendMessage(c_iTID_PD_Tiredness, "tiredness_text");
		@SendMessage(c_iTID_PD_Infection, "infection_text");
		@SendMessage(c_iTID_PD_ArmorPhys, "armor_phys_text");
		@SendMessage(c_iTID_PD_ArmorBullet, "armor_bullet_text");
		@SendMessage(c_iTID_PD_ArmorFire, "armor_fire_text");
		@SendMessage(c_iTID_PD_ArmorDisease, "armor_disease_text");
		@SendMessage(c_iTID_PD_Body, "body_text");
		@SendMessage(c_iTID_PD_Clothes, "clothes_text");
		@SendMessage(c_iTID_PD_Time, "time_text");
		
		@ProcessEvents();
	}
	
	void OnMessage(int iMessage, string strSender, object data) {
		if (strSender == "people_button") {
			@DestroyWindow(1);
		}
	}
	
	void OnChar(int wChar)
	{
		@DestroyWindow();
	}	
}

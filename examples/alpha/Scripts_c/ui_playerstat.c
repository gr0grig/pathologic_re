maintask task_0
{
	void init(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, float var_6_float, float var_7_float, float var_8_float)
	{
		var_6_float = 0;
		var_0_bool = false;
		var_1_bool = false;
		var_2_bool = false;
		var_3_bool = false;
		var_5_bool = false;
		var_8_float = -1;
		var_4_bool = false;
		@SetOwnerDraw(true);
		@SetNeedUpdate(true);
		@ProcessEvents();
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, float var_6_float, float var_7_float, float var_8_float, float var_9_float)
	{
		var_6_float += var_9_float;
	}

	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, float var_6_float, float var_7_float, float var_8_float)
	{
		float var_16_float; float var_17_float; float var_18_float; float var_19_float; float var_20_float;
		@Blit("cross", 399, 299);
		if(var_3_bool != 0) {
			var_16_float = (var_6_float - var_7_float) / 2.0;
			if(var_16_float > 2) {
				var_3_bool = false;
				float var_31_float;
				func_278(var_31_float);
				var_8_float = var_31_float;
				return 14;
			}
			var_45_float = cos(var_16_float * 6.283);
			@Blit("rep_down", 20, 500, (0.5 - (0.5 * var_45_float)));
			return 14;
		}
		if(var_2_bool != 0) {
			var_17_float = (var_6_float - var_7_float) / 2.0;
			if(var_17_float > 2) {
				var_2_bool = false;
				float var_53_float;
				func_278(var_53_float);
				var_8_float = var_53_float;
				return 14;
			}
			var_60_float = cos(var_17_float * 6.283);
			@Blit("rep_up", 20, 500, (0.5 - (0.5 * var_60_float)));
			return 14;
		}
		if(var_5_bool != 0) {
			bool var_64_bool;
			func_271(var_64_bool);
			if(!var_64_bool) { //@nz
				var_5_bool = false;
				return 14;
			}
			var_18_float = (var_6_float - var_7_float) / 1.0;
			if(var_18_float > 1) {
				var_0_bool = false;
				@SetVariable("player_exchange", 0);
				return 14;
			}
			var_82_float = cos(var_18_float * 6.283);
			@Blit("exchange", 20, 500, (0.5 - (0.5 * var_82_float)));
			return 14;
		}
		if(var_0_bool != 0) {
			bool var_86_bool;
			func_257(var_86_bool);
			if(!var_86_bool) { //@nz
				var_0_bool = false;
				return 14;
			}
			var_19_float = (var_6_float - var_7_float) / 2.0;
			if(var_19_float > 2) {
				var_0_bool = false;
				@SetVariable("player_mail", 0);
				return 14;
			}
			var_104_float = cos(var_19_float * 6.283);
			@Blit("mail", 20, 500, (0.5 - (0.5 * var_104_float)));
			return 14;
		}
		if(var_1_bool != 0) {
			bool var_108_bool;
			func_264(var_108_bool);
			if(!var_108_bool) { //@nz
				var_1_bool = false;
				return 14;
			}
			var_20_float = (var_6_float - var_7_float) / 2.0;
			if(var_20_float > 2) {
				var_1_bool = false;
				@SetVariable("player_diary", 0);
				return 14;
			}
			var_126_float = cos(var_20_float * 6.283);
			@Blit("diary", 20, 470, (0.5 - (0.5 * var_126_float)));
			return 14;
		}
		float var_129_float;
		func_278(var_129_float);
		float var_21_float;
		var_129_float = var_21_float;
		if(!var_4_bool) { //@nz
			if(var_21_float >= 0) {
				var_8_float = var_21_float;
				var_4_bool = true;
			}
			return 14;
		}
		if(var_8_float != var_21_float) {
			if(var_21_float < 0)
				return 14;
			var_7_float = var_6_float;
			float var_136_float;
			func_278(var_136_float);
			if(var_8_float < var_136_float) {
				@PlaySound("rep_up");
				var_2_bool = true;
			} else {
				float var_139_float;
				func_278(var_139_float);
				if((var_8_float - var_139_float) >= 0.3)
					@PlaySound("rep_down_big");
				else
					@PlaySound("rep_down_small");
				bool var_144_bool;
				func_271(var_144_bool);
				if(var_144_bool != 0) {
					@PlaySound("exchange");
					var_7_float = var_6_float;
					var_5_bool = true;
					return 14;
				}
				bool var_146_bool;
				func_257(var_146_bool);
				if(var_146_bool != 0) {
					@PlaySound("mail");
					var_7_float = var_6_float;
					var_0_bool = true;
					return 14;
				}
				bool var_148_bool;
				func_264(var_148_bool);
				if(var_148_bool != 0) {
					@PlaySound("diary");
					var_7_float = var_6_float;
					var_1_bool = true;
				}
				return 14;
			}
			var_3_bool = true;
		}
	
	}

}


void func_264(bool var_108_bool)
{
	int var_110_int;
	@GetVariable("player_diary", var_110_int);
	var_108_bool = var_110_int != 0;
}


void func_257(bool var_86_bool)
{
	int var_88_int;
	@GetVariable("player_mail", var_88_int);
	var_86_bool = var_88_int != 0;
}


void func_278(float var_31_float)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_31_float = -1;
	float var_35_float;
	var_34_object->GetProperty("reputation", var_35_float);
	var_35_float = var_31_float;
}
EMIT "Stack[-2] = 0";


void func_271(bool var_64_bool)
{
	int var_66_int;
	@GetVariable("player_exchange", var_66_int);
	var_64_bool = var_66_int != 0;
}



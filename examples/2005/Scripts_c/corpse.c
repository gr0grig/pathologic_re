// @GLOBALS: 0:object:,1:object:,2:object:,3:bool:,4:bool:

maintask task_0
{
	void init(void)
	{
		@Trace("loading");
		var_15_bool = GlobalVars[3];
		GlobalVars[3] = false;
		var_16_bool = GlobalVars[4];
		GlobalVars[4] = false;
		@SetDeathState();
		@SetProperty("disease", 0.2);
		@PlaceOnGround();
		cvector var_10_cvector;
		@GetPosition(var_10_cvector);
		cvector var_11_cvector = [0.0, 1.0, 0.0];
		cvector var_12_cvector = [0.0, 0.0, 0.0];
		@EnableGeometry("corpse", true);
		object var_9_object;
		@FindGeometry("corpse", var_9_object);
		float var_13_float;
		@rand(var_13_float, 6.2831855);
		var_9_object->SetRotationY(var_13_float);
		@FindGeometry("corpse1", var_9_object);
		var_9_object->SetRotationY(var_13_float);
		object var_7_object;
		@CreateFire(var_7_object, "fire", 50);
		var_7_object->AddSource([0.0, 0.0, 0.0], var_11_cvector);
		var_7_object->AddSource([0.0, 0.0, 50.0], var_11_cvector);
		var_7_object->AddSource([0.0, 0.0, -50.0], var_11_cvector);
		var_7_object->AddSource([50.0, 0.0, 0.0], var_11_cvector);
		var_7_object->AddSource([-50.0, 0.0, 0.0], var_11_cvector);
		var_7_object->Enable();
		var_7_object->Fade();
		object var_8_object;
		@CreateSmoke(var_8_object, "smoke", 20);
		var_8_object->AddSource([0.0, 0.0, 0.0], var_11_cvector);
		var_8_object->SetOpacity(0.7);
		var_8_object->Enable();
		var_8_object->Fade();
		var_35_object = GlobalVars[0];
		var_7_object = var_35_object;
		GlobalVars[0] = var_35_object;
		var_36_object = GlobalVars[1];
		var_8_object = var_36_object;
		GlobalVars[1] = var_36_object;
		@SetTimer(80, 1);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(14)";
	EMIT "Stack[-5] = 0";
	EMIT "Stack[-6] = 0";
	EMIT "Stack[-7] = 0";

	void OnPropertyChange(object var_0_object, string var_1_string)
	{
		float var_4_float; object var_5_object;
		if(var_1_string == "fire") {
			@GetProperty("fire", var_4_float);
			if(var_4_float > 0.0) {
				var_11_bool = GlobalVars[3];
				if(!var_11_bool) { //@nz
					var_13_bool = GlobalVars[3];
					GlobalVars[3] = true;
					var_14_object = GlobalVars[0];
					var_14_object->Fade(false);
					var_16_object = GlobalVars[1];
					var_16_object->Fade(false);
					var_18_bool = GlobalVars[4];
					if(!var_18_bool) { //@nz
						var_20_bool = GlobalVars[4];
						GlobalVars[4] = true;
						@SetTimer(81, 3);
					}
					@PlayGlobalSound("fire_begin", [0.0, 10.0, 0.0]);
					var_25_object = GlobalVars[2];
					if(var_25_object != null) {
						var_27_object = GlobalVars[2];
						var_27_object->FadeIn(1.5);
					} else {
						@PlayLoopedGlobalSound(var_5_object, "fire_loop", [0.0, 10.0, 0.0]);
						var_31_object = GlobalVars[2];
						var_5_object = var_31_object;
						GlobalVars[2] = var_31_object;
						var_5_object = null;
			}
					var_32_bool = GlobalVars[3];
					if(var_32_bool == 0) goto Label_75;
					var_33_bool = GlobalVars[3];
					GlobalVars[3] = false;
					var_34_object = GlobalVars[0];
					var_34_object->Fade(true);
					var_36_object = GlobalVars[1];
					var_36_object->Fade(true);
					var_38_object = GlobalVars[2];
					if(!(var_38_object != null)) goto Label_75;
					var_40_object = GlobalVars[2];
					var_40_object->FadeOut(1.5);
				}
			}
			goto Label_75;
		}
	Label_75:
	
	}

	// @pe
	void OnTimer(int iID)
	{
		int var_1_int;
		iID = var_1_int;
		func_175(var_1_int);
	}

}


void func_175(int var_1_int)
{
	float var_3_float;
	if(var_1_int == 80) {
		@GetProperty("fire", var_3_float);
		if(var_3_float <= 0.01) {
			var_3_float = 0;
		} else if((var_3_float - 0.01) < 0) {
			var_3_float = 0;
	}
		if(!(var_1_int == 81)) goto Label_211;
		@KillTimer(81);
		@EnableGeometry("corpse", false);
		@EnableGeometry("corpse1", true);
	}
	@SetProperty("fire", var_3_float);
	goto Label_211;
	
Label_211:
	
}



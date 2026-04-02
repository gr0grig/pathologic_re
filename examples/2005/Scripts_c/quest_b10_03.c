// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object)
	{
		func_180("vagon_mishka@door1", false);
		func_150(10);
	}

	void OnTrigger(object var_0_object, object var_1_object, string var_2_string)
	{
		object var_12_object; bool var_13_bool; cvector var_14_cvector; cvector var_15_cvector; int var_16_int; string var_17_string; object var_18_object; object var_19_object; object var_20_object;
		@Trace(var_2_string);
		if(var_2_string == "place_doll") {
			@GetMainOutdoorScene(var_12_object);
			var_16_int = 0;

			for(;;) {
				var_12_object->GetLocator(("pt_b10q03_plant" + (var_16_int + 1)), var_13_bool, var_14_cvector, var_15_cvector);
				if(!var_13_bool) { //@nz
				} else {
						@RandOneOf(var_17_string, 1, 1, 1, 2, 2, "grass_black_tvir", "grass_blood_tvir", "grass_brown_tvir", "grass_savyur", "grass_white_plet");
						var_12_object->AddStationaryActorByType(var_18_object, var_14_cvector, var_15_cvector, "scripted", (("item_" + var_17_string) + "_stat.xml"));
						@Trace((("New b10q03 plant: \"" + var_17_string) + "\" at location #") + (var_16_int + 1));
						var_18_object = null;
						var_16_int += 1;
				}
				@Trace("Total b10q03 plants: " + var_16_int);
				var_12_object->GetLocator("pt_b10q03_toy", var_13_bool, var_14_cvector, var_15_cvector);
				if(var_13_bool != 0)
					var_12_object->AddStationaryActorByType(var_0_object, var_14_cvector, var_15_cvector, "scripted", "b10q03_toy_burah.xml");
				else
					@Trace("pt_b10q03_toy locator not found");

				var_12_object = null;
		} else {
			if(var_2_string == "place_blood") {
				@GetMainOutdoorScene(var_19_object);
				@AddActor(var_20_object, "b10q03_blood", var_19_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0]);
				@AddActor(var_1_object, "b10q03_blood_sel", var_19_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "b10q03_blood.xml");
				var_20_object = null;
				var_19_object = null;
			} else if(var_2_string == "fail") {
				func_123();
			} else if(var_2_string == "completed") {
				func_131();
			}
		}

		}
	
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, int var_2_int, float var_3_float)
	{
		func_112();
	}

}


void func_131(void)
{
	@SetVariable("b10q03", 1000);
	func_139(var_20_object);
}


void func_139(object var_0_object)
{
	if(var_0_object != 0)
		var_0_object->Remove(); //@t
	object var_19_object;
	func_174(var_19_object);
	@RemoveActor(var_19_object);
}


void func_174(object var_19_object)
{
	object var_21_object;
	@self(var_21_object);
	var_21_object = var_19_object;
}
EMIT "Stack[-1] = 0";


void func_112(void)
{
	int var_5_int;
	@GetVariable("b10q03", var_5_int);
	if(var_5_int != 1000)
		func_123();
}


void func_180(string var_2_string, bool var_3_bool)
{
	object var_5_object;
	@FindActor(var_5_object, var_2_string);
	if(!var_5_object) //@nz
		@Trace(("Door " + var_2_string) + " not found");
	else
		var_5_object->SetProperty("locked", var_3_bool);
	
}
EMIT "Stack[-1] = 0";


void func_150(int var_12_int)
{
	float var_14_float;
	@GetGameTime(var_14_float);
	if(var_14_float >= (var_12_int * 24)) {
		func_139(var_14_float);
	} else {
		@SetTimeEvent(0, (var_12_int * 24));
		@Hold();
	}
	
}


void func_123(void)
{
	@SetVariable("b10q03", -1);
	func_139(var_5_int);
}



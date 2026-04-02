// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object)
	{
		@SetVariable("b3q02", 1);
		object var_3_object;
		func_254(var_3_object);
		var_0_object = var_3_object;
		func_224(3);
	}

	void OnTrigger(object var_0_object, string var_1_string)
	{
		object var_15_object; bool var_16_bool; int var_17_int; int var_18_int; object var_19_object; object var_20_object; int var_21_int; int var_22_int; object var_23_object; object var_24_object; bool var_25_bool; object var_26_object; int var_27_int;
		@Trace(var_1_string);
		if(var_1_string == "place_grabitel1") {
			func_278("warehouse_notkin@door1", true);
			@GetMainOutdoorScene(var_15_object);
			object var_40_object; object var_41_object;
			var_15_object = var_41_object;
			func_260(var_40_object, var_41_object, "pt_b3q02_grabitel1_1", "pers_grabitel", "b3q02_grabitel1.xml");
			var_0_object->add(var_40_object); //@t
			object var_58_object; object var_59_object;
			var_15_object = var_59_object;
			func_260(var_58_object, var_59_object, "pt_b3q02_grabitel1_2", "pers_grabitel", "b3q02_grabitel1.xml");
			var_0_object->add(var_58_object); //@t
			var_15_object = null;
		} else if(var_1_string == "remove_grabitel") {
				func_295(var_0_object);
		}
	Label_159:
		for(;;) {
			return 26;

		}
	
		if(var_1_string == "grabitel_attack") {
			var_16_bool = false;
			var_0_object->size(var_17_int); //@t
			var_18_int = 0;

			for(;;) {
				if(var_18_int < var_17_int) {
					var_0_object->get(var_19_object, var_18_int); //@t
					if(var_19_object != 0) {
						var_19_object->GetActor(var_20_object);
						if(var_20_object != 0) {
							@Trigger(var_20_object, "attack");
							var_16_bool = true;
						} else {
						var_19_object->Remove();
				}
					if(!var_16_bool) //@nz
						func_203(var_27_int);
					goto Label_159;
		}
				if(var_1_string == "grabitel_dead") {
					var_0_object->size(var_21_int); //@t
					var_22_int = 0;

					for(;;) {
						if(var_22_int < var_21_int) {
							var_0_object->get(var_23_object, var_22_int); //@t
							if(var_23_object != 0) {
								var_23_object->GetActor(var_24_object);
								if(var_24_object != 0) {
									var_24_object->IsDead(var_25_bool);
									if(!var_25_bool) //@nz
										return 26;
								} else {
								var_23_object->Remove();
						}
							func_203(var_27_int);
							goto Label_159;
				}
						if(var_1_string == "place_grabitel2") {
							@GetMainOutdoorScene(var_26_object);
							var_27_int = 1;

							while(var_27_int <= 4) {
								object var_125_object; object var_126_object;
								var_26_object = var_126_object;
								func_260(var_125_object, var_126_object, ("pt_b3q02_grabitel2_" + var_27_int), "pers_grabitel", "b3q02_grabitel2.xml");
								var_0_object->add(var_125_object); //@t
								var_27_int += 1;
							}

							var_26_object = null;
						} else if(var_1_string == "fail") {
							func_171();
						} else if(var_1_string == "completed") {
							func_179();
						}
						}
						var_24_object = null;
					}
					var_23_object = null;
					var_22_int += 1;
				}
				}
				var_20_object = null;
			}
			var_19_object = null;
			var_18_int += 1;
		}
	
	}

	// @pe
	void OnGameTime(object var_0_object, int var_1_int, float var_2_float)
	{
		func_160();
	}

}


void func_224(int var_6_int)
{
	float var_8_float;
	@GetGameTime(var_8_float);
	if(var_8_float >= (var_6_int * 24)) {
		func_187(var_8_float);
	} else {
		@SetTimeEvent(0, (var_6_int * 24));
		@Hold();
	}
	
}


void func_160(void)
{
	int var_4_int;
	@GetVariable("b3q02", var_4_int);
	if(var_4_int != 1000)
		func_171();
}


void func_260(object var_40_object, object var_41_object, string var_42_string, string var_43_string, string var_44_string)
{
	bool var_49_bool; cvector var_50_cvector; cvector var_51_cvector;
	var_41_object->GetLocator(var_42_string, var_49_bool, var_50_cvector, var_51_cvector);
	if(!var_49_bool) //@nz
		@Trace(("Locator " + var_42_string) + " doesn't exist");
	else
		var_41_object->AddStationaryActor(Obj(), var_50_cvector, var_51_cvector, var_43_string, var_44_string);
	object var_52_object = var_40_object;
	
}
EMIT "Stack[-1] = 0";


void func_295(object var_12_object)
{
	int var_16_int; int var_17_int; object var_18_object;
	if(var_12_object != 0) {
		var_12_object->size(var_16_int);
		var_17_int = 0;

		while(var_17_int < var_16_int) {
			var_12_object->get(var_18_object, var_17_int);
			if(var_18_object != 0)
				var_18_object->Remove();
			var_18_object = null;
			var_17_int += 1;
		}

		var_12_object->clear();
	}
}


void func_329(object var_101_object)
{
	object var_103_object;
	@GetDiaryRoot(var_103_object);
	if(!var_103_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_101_object = false;
	}
	var_103_object = var_101_object;
}
EMIT "Stack[-1] = 0";


void func_203(object var_0_object)
{
	int var_85_int;
	var_0_object->size(var_85_int); //@t
	if(!var_85_int) { //@nz
	}
	var_0_object->clear(); //@t
	func_316();
	func_278("warehouse_notkin@door1", false);
	@SetVariable("b3q02Dead", true);
}


void func_171(void)
{
	@SetVariable("b3q02", -1);
	func_187(var_4_int);
}


void func_179(void)
{
	@SetVariable("b3q02", 1000);
	func_187(var_27_int);
}


void func_278(string var_23_string, bool var_24_bool)
{
	object var_26_object;
	@FindActor(var_26_object, var_23_string);
	if(!var_26_object) //@nz
		@Trace(("Door " + var_23_string) + " not found");
	else
		var_26_object->SetProperty("locked", var_24_bool);
	
}
EMIT "Stack[-1] = 0";


void func_342(bool var_92_bool, object var_93_object, int var_94_int)
{
	object var_101_object;
	func_329(var_101_object);
	object var_98_object;
	var_101_object = var_98_object;
	object var_99_object;
	var_98_object->Find(var_94_int, var_99_object);
	if(!var_99_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_94_int);
		var_92_bool = false;
	}
	var_99_object->AddChild(var_93_object);
	@SendWorldWndMessage(7);
	int var_100_int;
	var_93_object->GetCategory(var_100_int);
	@SetDiarySection(var_100_int);
	var_92_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_248(object var_33_object)
{
	object var_35_object;
	@self(var_35_object);
	var_35_object = var_33_object;
}
EMIT "Stack[-1] = 0";


void func_187(object var_0_object)
{
	func_295(var_0_object);
	func_278("warehouse_notkin@door1", false);
	object var_33_object;
	func_248(var_33_object);
	@RemoveActor(var_33_object);
}


void func_316(void)
{
	object var_88_object;
	@CreateDiaryEntry(var_88_object, 231, 2, 519659);
	bool var_92_bool; object var_93_object;
	var_88_object = var_93_object;
	func_342(var_92_bool, var_93_object, 227);
}
EMIT "Stack[-1] = 0";


void func_254(object var_3_object)
{
	object var_5_object;
	@CreateObjectVector(var_5_object);
	var_5_object = var_3_object;
}
EMIT "Stack[-1] = 0";



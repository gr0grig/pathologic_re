// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, int var_1_int)
	{
		@SetVariable("b3q02", 1);
		object var_4_object;
		func_224(var_4_object);
		var_0_object = var_4_object;
		func_194(3);
	}

	void OnTrigger(object var_0_object, int var_1_int, string var_2_string)
	{
		object var_11_object; int var_12_int; int var_13_int; object var_14_object; object var_15_object; int var_16_int; object var_17_object; int var_18_int;
		@Trace(var_2_string);
		if(var_2_string == "place_grabitel1") {
			func_248("warehouse_notkin@door1", true);
			@GetMainOutdoorScene(var_11_object);
			object var_31_object; object var_32_object;
			var_11_object = var_32_object;
			func_230(var_31_object, var_32_object, "pt_b3q02_grabitel1_1", "pers_grabitel", "b3q02_grabitel1.xml");
			var_0_object->add(var_31_object); //@t
			object var_49_object; object var_50_object;
			var_11_object = var_50_object;
			func_230(var_49_object, var_50_object, "pt_b3q02_grabitel1_2", "pers_grabitel", "b3q02_grabitel1.xml");
			var_0_object->add(var_49_object); //@t
			var_11_object = null;
		} else if(var_2_string == "remove_grabitel") {
				func_265(var_0_object);
		}

	
		if(var_2_string == "grabitel_attack") {
			var_0_object->size(var_12_int); //@t
			var_13_int = 0;

			while(var_13_int < var_12_int) {
				var_0_object->get(var_14_object, var_13_int); //@t
				if(var_14_object != 0) {
					var_14_object->GetActor(var_15_object);
					if(var_15_object != 0)
						@Trigger(var_15_object, "attack");
					var_15_object = null;
				}
				var_14_object = null;
				var_13_int += 1;
			}

		} else if(var_2_string == "grabitel_dead") {
			var_0_object->size(var_16_int); //@t
			if((var_1_int + 1) == var_16_int)
				func_173(var_18_int);
		} else if(var_2_string == "place_grabitel2") {
			@GetMainOutdoorScene(var_17_object);
			var_18_int = 1;

			while(var_18_int <= 4) {
				object var_112_object; object var_113_object;
				var_17_object = var_113_object;
				func_230(var_112_object, var_113_object, ("pt_b3q02_grabitel2_" + var_18_int), "pers_grabitel", "b3q02_grabitel2.xml");
				var_0_object->add(var_112_object); //@t
				var_18_int += 1;
			}

			var_17_object = null;
		} else if(var_2_string == "fail") {
			func_141();
		} else if(var_2_string == "completed") {
			func_149();
		}
	}

	// @pe
	void OnGameTime(object var_0_object, int var_1_int, int var_2_int, float var_3_float)
	{
		func_130();
	}

}


void func_224(object var_4_object)
{
	object var_6_object;
	@CreateObjectVector(var_6_object);
	var_6_object = var_4_object;
}
EMIT "Stack[-1] = 0";


void func_194(int var_7_int)
{
	float var_9_float;
	@GetGameTime(var_9_float);
	if(var_9_float >= (var_7_int * 24)) {
		func_157(var_9_float);
	} else {
		@SetTimeEvent(0, (var_7_int * 24));
		@Hold();
	}
	
}


void func_130(void)
{
	int var_5_int;
	@GetVariable("b3q02", var_5_int);
	if(var_5_int != 1000)
		func_141();
}


void func_312(bool var_86_bool, object var_87_object, int var_88_int)
{
	object var_95_object;
	func_299(var_95_object);
	object var_92_object;
	var_95_object = var_92_object;
	object var_93_object;
	var_92_object->Find(var_88_int, var_93_object);
	if(!var_93_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_88_int);
		var_86_bool = false;
	}
	var_93_object->AddChild(var_87_object);
	@SendWorldWndMessage(7);
	int var_94_int;
	var_87_object->GetCategory(var_94_int);
	@SetDiarySection(var_94_int);
	var_86_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_230(object var_31_object, object var_32_object, string var_33_string, string var_34_string, string var_35_string)
{
	bool var_40_bool; cvector var_41_cvector; cvector var_42_cvector;
	var_32_object->GetLocator(var_33_string, var_40_bool, var_41_cvector, var_42_cvector);
	if(!var_40_bool) //@nz
		@Trace(("Locator " + var_33_string) + " doesn't exist");
	else
		var_32_object->AddStationaryActor(Obj(), var_41_cvector, var_42_cvector, var_34_string, var_35_string);
	object var_43_object = var_31_object;
	
}
EMIT "Stack[-1] = 0";


void func_265(object var_13_object)
{
	int var_17_int; int var_18_int; object var_19_object;
	if(var_13_object != 0) {
		var_13_object->size(var_17_int);
		var_18_int = 0;

		while(var_18_int < var_17_int) {
			var_13_object->get(var_19_object, var_18_int);
			if(var_19_object != 0)
				var_19_object->Remove();
			var_19_object = null;
			var_18_int += 1;
		}

		var_13_object->clear();
	}
}


void func_299(object var_95_object)
{
	object var_97_object;
	@GetDiaryRoot(var_97_object);
	if(!var_97_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_95_object = false;
	}
	var_97_object = var_95_object;
}
EMIT "Stack[-1] = 0";


void func_173(object var_0_object)
{
	int var_79_int;
	var_0_object->size(var_79_int); //@t
	if(!var_79_int) { //@nz
	}
	var_0_object->clear(); //@t
	func_286();
	func_248("warehouse_notkin@door1", false);
	@SetVariable("b3q02Dead", true);
}


void func_141(void)
{
	@SetVariable("b3q02", -1);
	func_157(var_5_int);
}


void func_149(void)
{
	@SetVariable("b3q02", 1000);
	func_157(var_18_int);
}


void func_248(string var_24_string, bool var_25_bool)
{
	object var_27_object;
	@FindActor(var_27_object, var_24_string);
	if(!var_27_object) //@nz
		@Trace(("Door " + var_24_string) + " not found");
	else
		var_27_object->SetProperty("locked", var_25_bool);
	
}
EMIT "Stack[-1] = 0";


void func_218(object var_34_object)
{
	object var_36_object;
	@self(var_36_object);
	var_36_object = var_34_object;
}
EMIT "Stack[-1] = 0";


void func_157(object var_0_object)
{
	func_265(var_0_object);
	func_248("warehouse_notkin@door1", false);
	object var_34_object;
	func_218(var_34_object);
	@RemoveActor(var_34_object);
}


void func_286(void)
{
	object var_82_object;
	@CreateDiaryEntry(var_82_object, 231, 2, 519659);
	bool var_86_bool; object var_87_object;
	var_82_object = var_87_object;
	func_312(var_86_bool, var_87_object, 227);
}
EMIT "Stack[-1] = 0";



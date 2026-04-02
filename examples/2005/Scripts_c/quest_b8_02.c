// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object)
	{
		object var_3_object;
		@GetSceneByName(var_3_object, "house_vlad");
		object var_5_object; object var_6_object;
		var_3_object = var_6_object;
		func_177(var_5_object, var_6_object, "b8q02_trigger", "b8q02_trigger.xml");
		var_0_object = var_5_object;
		object var_13_object; object var_14_object;
		var_3_object = var_14_object;
		func_185(var_13_object, var_14_object, "pt_b8q02_book", "scripted_container", "b8q02_item_book.xml");
		var_1_object = var_13_object;
		func_203("house_vlad@door2", false);
		func_147(8);
	}
	EMIT "Stack[-1] = 0";

	void OnTrigger(object var_0_object, object var_1_object, string var_2_string)
	{
		object var_9_object; int var_10_int; bool var_11_bool; cvector var_12_cvector; cvector var_13_cvector; object var_14_object;
		@Trace(var_2_string);
		if(var_2_string == "b8q02_trigger") {
			@PlaySound("door_close");
			func_203("ihouse_vlad@door2", true);
			@GetSceneByName(var_9_object, "house_vlad");
			var_10_int = 1;

			for(;;) {
				var_9_object->GetLocator(("pt_b8q02_grabitel" + var_10_int), var_11_bool, var_12_cvector, var_13_cvector);
				if(!var_11_bool) { //@nz
				} else {
					@AddActor(var_14_object, "pers_grabitel", var_9_object, var_12_cvector, var_13_cvector, "b8q02_grabitel.xml");
					var_14_object = null;
					var_10_int += 1;
				}
				var_9_object = null;
		} else {
			if(var_2_string == "book_taken") {
				func_220();
				@PlaySound("door_open");
				func_203("ihouse_vlad@door2", false);
			} else if(var_2_string == "fail") {
				func_105();
			} else if(var_2_string == "completed") {
				func_113();
			}
		}

		}
	
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, int var_2_int, float var_3_float)
	{
		func_94();
	}

}


void func_121(object var_0_object, object var_1_object)
{
	if(var_0_object != 0)
		@RemoveActor(var_0_object);
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	func_203("ihouse_vlad@door2", false);
	func_203("house_vlad@door2", true);
	object var_54_object;
	func_171(var_54_object);
	@RemoveActor(var_54_object);
}


void func_233(object var_51_object)
{
	object var_53_object;
	@GetDiaryRoot(var_53_object);
	if(!var_53_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_51_object = false;
	}
	var_53_object = var_51_object;
}
EMIT "Stack[-1] = 0";


void func_105(void)
{
	@SetVariable("b8q02", -1);
	func_121(var_4_int, var_5_int);
}


void func_171(object var_54_object)
{
	object var_56_object;
	@self(var_56_object);
	var_56_object = var_54_object;
}
EMIT "Stack[-1] = 0";


void func_203(string var_31_string, bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, var_31_string);
	if(!var_34_object) //@nz
		@Trace(("Door " + var_31_string) + " not found");
	else
		var_34_object->SetProperty("locked", var_32_bool);
	
}
EMIT "Stack[-1] = 0";


void func_177(object var_5_object, object var_6_object, string var_7_string, string var_8_string)
{
	object var_10_object;
	@AddActor(var_10_object, var_7_string, var_6_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], var_8_string);
	var_10_object = var_5_object;
}
EMIT "Stack[-1] = 0";


void func_113(void)
{
	@SetVariable("b8q02", 1000);
	func_121(var_13_cvector, var_14_object);
}


void func_147(int var_41_int)
{
	float var_42_float; float var_43_float;
	@GetGameTime(var_43_float);
	if(var_43_float >= (var_41_int * 24)) {
		func_121(var_42_float, var_43_float);
	} else {
		@SetTimeEvent(0, (var_41_int * 24));
		@Hold();
	}
	
}


void func_246(bool var_42_bool, object var_43_object, int var_44_int)
{
	object var_51_object;
	func_233(var_51_object);
	object var_48_object;
	var_51_object = var_48_object;
	object var_49_object;
	var_48_object->Find(var_44_int, var_49_object);
	if(!var_49_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_44_int);
		var_42_bool = false;
	}
	var_49_object->AddChild(var_43_object);
	@SendWorldWndMessage(7);
	int var_50_int;
	var_43_object->GetCategory(var_50_int);
	@SetDiarySection(var_50_int);
	var_42_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_185(object var_13_object, object var_14_object, string var_15_string, string var_16_string, string var_17_string)
{
	bool var_22_bool; cvector var_23_cvector; cvector var_24_cvector;
	var_14_object->GetLocator(var_15_string, var_22_bool, var_23_cvector, var_24_cvector);
	if(!var_22_bool) //@nz
		@Trace(("Locator " + var_15_string) + " doesn't exist");
	else
		@AddActorByType(Obj(), var_16_string, var_14_object, var_23_cvector, var_24_cvector, var_17_string);
	object var_25_object = var_13_object;
	
}
EMIT "Stack[-1] = 0";


void func_220(void)
{
	object var_38_object;
	@CreateDiaryEntry(var_38_object, 295, 2, 521493);
	bool var_42_bool; object var_43_object;
	var_38_object = var_43_object;
	func_246(var_42_bool, var_43_object, 293);
}
EMIT "Stack[-1] = 0";


void func_94(void)
{
	int var_5_int;
	@GetVariable("b8q02", var_5_int);
	if(var_5_int != 1000)
		func_105();
}



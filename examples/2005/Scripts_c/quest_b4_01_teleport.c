maintask task_0
{
	void init(void)
	{
		object var_17_object; cvector var_18_cvector; cvector var_19_cvector; bool var_20_bool; float var_21_float; int var_22_int; int var_23_int; object var_24_object; int var_25_int; bool var_26_bool; int var_27_int; float var_28_float; float var_29_float; float var_30_float; object var_31_object;
		@Sleep(2.5);
		func_267((float)0, (float)1, 2.0);
		object var_16_object;
		@FindActor(var_16_object, "player");
		if(var_16_object != 0) {
			@GetSceneByName(var_17_object, "factory");
			var_17_object->GetLocator("pt_b4q01_teleport", var_20_bool, var_18_cvector, var_19_cvector);
			@Teleport(var_16_object, var_17_object, var_18_cvector, var_19_cvector);
			@GetGameTime(var_21_float);
			@AdvanceGameTime(110 - var_21_float);
			var_16_object->GetItemCount(var_22_int, 0);
			var_22_int = var_23_int;

			for(;;) {
				if(var_23_int != 0) {
					var_16_object->GetItem(var_24_object, (var_23_int - 1), 0);
					var_24_object->GetItemID(var_25_int);
					@HasInvItemProperty(var_26_bool, var_25_int, "Weapon");
					var_59_bool = !var_26_bool; //@nz
					if(var_59_bool == 0) goto Label_53;
					@HasInvItemProperty(var_26_bool, var_25_int, "Ammo");
					if(!var_26_bool) { //@nz
					} else {
					var_16_object->GetItemAmount(var_27_int, (var_23_int - 1));
					var_16_object->RemoveItem((var_23_int - 1), var_27_int);
					var_24_object = null;
				}
				var_16_object->SelectWeapon();
				var_16_object->SetProperty("health", 0.3);
				var_16_object->GetProperty("tiredness", var_28_float);
				if(var_28_float > 0.8) {
					var_16_object->SetProperty("tiredness", 0.8);
					func_247(0.8 - var_28_float);
				}
				var_16_object->GetProperty("hunger", var_29_float);
				if(var_29_float > 0.8)
					var_16_object->SetProperty("hunger", 0.8);
				var_16_object->GetProperty("reputation", var_30_float);
				if(var_30_float > 0.2) {
					bool var_87_bool; object var_88_object;
					var_16_object = var_88_object;
					func_212(var_87_bool, var_88_object, (0.2 - var_30_float));
				}
				func_195("ifactory@door1", true);
				@FindActor(var_31_object, "ifactory_grid_door");
				var_31_object->SetProperty("locked", true);
				var_31_object->Close();
				var_31_object = null;
				var_17_object = null;
		}
			@sync();
			func_195("warehouse_gangster@door1", false);
			func_267((float)1, (float)0, 1.0);
			object var_144_object;
			func_178(var_144_object);
			@RemoveActor(var_144_object);
			}
			var_23_int += -1;
		}
	
	}
	EMIT "Stack[-16] = 0";

}


void func_257(float var_95_float)
{
	object var_97_object;
	@CreateFloatVector(var_97_object);
	var_97_object->add(var_95_float);
	@SendWorldWndMessage(16, var_97_object);
}
EMIT "Stack[-1] = 0";


void func_195(string var_126_string, bool var_127_bool)
{
	object var_129_object;
	@FindActor(var_129_object, var_126_string);
	if(!var_129_object) //@nz
		@Trace(("Door " + var_126_string) + " not found");
	else
		var_129_object->SetProperty("locked", var_127_bool);
	
}
EMIT "Stack[-1] = 0";


void func_267(float var_33_float, float var_34_float, float var_35_float)
{
	bool var_39_bool; float var_41_float;
	var_39_bool = var_34_float > var_33_float;
	
	for(;;) {
		if(var_39_bool != 0)
			var_44_bool = var_33_float < var_34_float;
		else
			var_46_bool = var_34_float < var_33_float;
		if(var_44_bool == 0) goto Label_284;
		@ModDarkenLevel(var_33_float);
		@sync(var_41_float);
		var_33_float += (var_41_float * ((var_34_float - var_33_float) / var_35_float));
	}
	
Label_284:
	@ModDarkenLevel(var_34_float);
	
}


void func_144(bool var_107_bool, object var_108_object, string var_109_string)
{
	var_114_bool = IsFuncExist(var_108_object, "HasProperty", 2);
	if(!var_114_bool) { //@nz
		var_107_bool = false;
		return 2;
	}
	bool var_111_bool;
	var_108_object->HasProperty(var_109_string, var_111_bool);
	var_111_bool = var_107_bool;
}


void func_178(object var_144_object)
{
	object var_146_object;
	@self(var_146_object);
	var_146_object = var_144_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_212(bool var_87_bool, object var_88_object, float var_89_float)
{
	if(!var_88_object) { //@nz
		var_87_bool = false;
		return 0;
	}
	if(var_89_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_89_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_95_float;
		var_89_float = var_95_float;
		func_257(var_95_float);
		bool var_99_bool; object var_100_object; float var_102_float;
		var_88_object = var_100_object;
		var_89_float = var_102_float;
		func_156(var_99_bool, var_100_object, "reputation", var_102_float, (float)0, (float)1);
		var_87_bool = true;
		return 0;

	}
	
	var_87_bool = false;
}


void func_247(float var_74_float)
{
	object var_77_object;
	@CreateFloatVector(var_77_object);
	var_77_object->add(var_74_float);
	@SendWorldWndMessage(11, var_77_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_184(float var_117_float, float var_118_float, float var_119_float, float var_120_float)
{
	if(var_118_float < var_119_float) {
		var_119_float = var_117_float;
		return 0;
	}
	if(var_118_float > var_120_float) {
		var_120_float = var_117_float;
		return 0;
	}
	var_118_float = var_117_float;
}


void func_156(bool var_99_bool, object var_100_object, string var_101_string, float var_102_float, float var_103_float, float var_104_float)
{
	object var_108_object;
	var_100_object = var_108_object;
	string var_109_string;
	var_101_string = var_109_string;
	bool var_107_bool;
	func_144(var_107_bool, var_108_object, var_109_string);
	if(!var_107_bool) //@nz
		var_99_bool = false;
	float var_106_float;
	var_100_object->GetProperty(var_101_string, var_106_float);
	float var_117_float; float var_119_float; float var_120_float;
	var_103_float = var_119_float;
	var_104_float = var_120_float;
	func_184(var_117_float, (var_106_float + var_102_float), var_119_float, var_120_float);
	var_100_object->SetProperty(var_101_string, var_117_float);
	var_99_bool = true;
}



maintask task_0
{
	void init(void)
	{
		func_28();
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(object actor)
	{
		bool var_4_bool;
		@Trace("Trying to use");
		bool var_3_bool;
		actor->IsOnGround(var_3_bool);
		if(var_3_bool != 0) {
			disable OnUse;
			@IsOverrideActive(var_4_bool);
			if(!var_4_bool) //@nz
				@WorkWithCorpse(actor);
			enable OnUse;
		}
	}

	void OnLoad(void)
	{
		func_40();
	}

}


void func_97(int var_4_int)
{
	float var_6_float;
	@GetGameTime(var_6_float);
	var_4_int = 1 + (var_6_float / 24);
}


void func_134(int var_8_int, string var_9_string)
{
	int var_11_int;
	@GetInvItemByName(var_11_int, var_9_string);
	var_11_int = var_8_int;
}


void func_40(void)
{
	bool var_2_bool;
	func_106(var_2_bool, 5);
	if(!var_2_bool) //@nz
		@SetVisibility(false);
	int var_12_int;
	func_86(var_12_int);
	int var_1_int;
	var_12_int = var_1_int;
	bool var_20_bool;
	func_118(var_20_bool, (var_1_int - 1));
	if(var_20_bool != 0) {
		@SetVisibility(true);
		@Trace(("I am in region " + var_1_int) + " and visible");
	} else {
		@SetVisibility(true);
		@Trace(("I am in region " + var_1_int) + " and not visible");
	}
	
}


// @pe
void func_106(bool var_2_bool, int var_3_int)
{
	int var_4_int;
	func_97(var_4_int);
	var_2_bool = var_4_int == var_3_int;
}


void func_139(bool var_0_bool, string var_1_string, int var_2_int, int var_3_int)
{
	string var_9_string;
	var_1_string = var_9_string;
	int var_8_int;
	func_134(var_8_int, var_9_string);
	int var_6_int;
	var_8_int = var_6_int;
	if(var_6_int == -1) {
		var_0_bool = false;
		return 4;
	}
	if(var_2_int == 0) {
		var_0_bool = true;
		return 4;
	}
	bool var_7_bool;
	@AddItem(var_7_bool, var_6_int, var_3_int, var_2_int);
	var_7_bool = var_0_bool;
}


// @pe
void func_112(string var_25_string, int var_26_int)
{
	var_25_string = ("Region" + var_26_int) + "State";
}


void func_81(cvector var_17_cvector)
{
	cvector var_19_cvector;
	@GetPosition(var_19_cvector);
	var_19_cvector = var_17_cvector;
}


void func_86(int var_12_int)
{
	object var_15_object;
	@GetScene(var_15_object);
	cvector var_17_cvector;
	func_81(var_17_cvector);
	int var_16_int;
	var_15_object->GetRegionByPt(var_16_int, var_17_cvector);
	var_16_int = var_12_int;
}
EMIT "Stack[-2] = 0";


void func_118(bool var_20_bool, int var_21_int)
{
	int var_26_int;
	var_21_int = var_26_int;
	string var_25_string;
	func_112(var_25_string, var_26_int);
	int var_24_int;
	@GetVariable(var_25_string, var_24_int);
	if((var_24_int & 3) == 1)
		var_20_bool = true;
	var_20_bool = false;
}


void func_28(void)
{
	bool var_0_bool;
	func_139(var_0_bool, "blooddiseasedalive", 1, 0);
	if(!var_0_bool) //@nz
		@Trace("Can't add corpse item");
}



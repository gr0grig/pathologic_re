maintask task_0
{
	void init(bool var_0_bool, int var_1_int, int var_2_int, int var_3_int, int var_4_int, object var_5_object)
	{
		var_1_int = 0;
		@GetWindowSize(var_3_int, var_4_int);
		@EnableClipping(true);
		@SetOwnerDraw(true);
		func_15(var_5_object);
		@ProcessEvents();
	}

	void OnUse(bool var_0_bool, int var_1_int, int var_2_int, int var_3_int, int var_4_int, object var_5_object)
	{
		int var_9_int = 0;
		string var_10_string;
		@GetStringByID(var_10_string, 200);
		@GetTextHeightInWidth(var_9_int, "default", var_3_int, var_10_string);
		int var_14_int;
		int var_11_int;
		func_119(var_10_string, var_11_int, var_14_int, (var_1_int + var_9_int));
		var_14_int = var_11_int;
		int var_417_int; int var_418_int;
		var_11_int = var_418_int;
		func_209(var_10_string, var_11_int, var_417_int, var_418_int);
		var_417_int = var_11_int;
		if((var_1_int + var_9_int) < var_11_int)
			@PrintInWidth(var_9_int, "default", 0, var_1_int, var_3_int, var_10_string, 1.0, 1.0, 1.0);
		if(((var_11_int - var_1_int) - var_4_int) < 0)
			var_2_int = 0;
	}

	void OnPlayerHolsterWeapon(bool var_0_bool, int var_1_int, int var_2_int, int var_3_int, int var_4_int, object var_5_object, int var_6_int, int var_7_int, float var_8_float)
	{
		int var_10_int = (var_8_float * 140) / 2;
		var_1_int += var_10_int;
		int var_9_int;
		func_295(var_9_int, var_10_int);
	}

	// @pe
	void event_200(bool var_0_bool, int var_1_int, int var_2_int, int var_3_int, int var_4_int, object var_5_object, int var_6_int, string var_7_string, object var_8_object)
	{
		if(var_7_string == "scrollbar") {
			var_11_int = -var_2_int;
			var_1_int = (var_11_int * var_6_int) / 100;
		}
	}

}


void func_1281(bool var_212_bool, int var_213_int)
{
	int var_215_int;
	@GetVariable(("vol_" + var_213_int), var_215_int);
	var_212_bool = (var_215_int & 8) != 0;
}


void func_295(int var_1_int, int var_2_int)
{
	if(var_2_int < 0)
		var_2_int = 0;
	var_16_int = -var_1_int;
	if(var_16_int > var_2_int) {
		var_1_int = -var_2_int;
	} else if(var_1_int > 0) {
			var_1_int = 0;
	}
	if(var_2_int == 0) {
		@SendMessage(16384, "scrollbar");
	} else {
		var_22_int = -var_1_int;
		@SendMessage(((var_22_int * 100) / var_2_int), "scrollbar");

	}
	
}


// @pe
void func_1160(object var_20_object, bool var_21_bool, int var_22_int)
{
	var_20_object->add(18);
	var_20_object->add(24);
	var_20_object->add(20);
	var_20_object->add(14);
	if(var_21_bool == false) {
		var_20_object->add(10);
		var_20_object->add(17);
		var_20_object->add(8);
	} else if(var_22_int != 1) {
		var_20_object->add(10);
	}
	
}


// @pe
void func_1193(object var_226_object, bool var_227_bool, int var_228_int)
{
	var_226_object->add(6);
	var_226_object->add(26);
	var_226_object->add(2);
	var_226_object->add(22);
	if(var_227_bool == false) {
		var_226_object->add(15);
		var_226_object->add(5);
		var_226_object->add(16);
		var_226_object->add(19);
	} else if(var_228_int != 0) {
		var_226_object->add(15);
	}
	
}


void func_1291(int var_14_int)
{
	int var_16_int;
	@GetVariable("branch", var_16_int);
	var_16_int = var_14_int;
}


// @pe
void func_747(string var_45_string, int var_46_int)
{
	if(var_46_int == 1) {
		var_45_string = "ui/NPC_Alexandr.png";
		return 0;
	}
	if(var_46_int == 2) {
		var_45_string = "ui/NPC_Andrei.png";
		return 0;
	}
	if(var_46_int == 3) {
		var_45_string = "ui/NPC_Anna.png";
		return 0;
	}
	if(var_46_int == 4) {
		var_45_string = "ui/NPC_BigVlad.png";
		return 0;
	}
	if(var_46_int == 5) {
		var_45_string = "ui/NPC_Eva.png";
		return 0;
	}
	if(var_46_int == 6) {
		var_45_string = "ui/NPC_Georg.png";
		return 0;
	}
	if(var_46_int == 7) {
		var_45_string = "ui/NPC_Grif.png";
		return 0;
	}
	if(var_46_int == 8) {
		var_45_string = "ui/NPC_Han.png";
		return 0;
	}
	if(var_46_int == 9) {
		var_45_string = "ui/NPC_Julia.png";
		return 0;
	}
	if(var_46_int == 10) {
		var_45_string = "ui/NPC_Kapella.png";
		return 0;
	}
	if(var_46_int == 11) {
		var_45_string = "ui/NPC_Katerina.png";
		return 0;
	}
	if(var_46_int == 12) {
		var_45_string = "ui/NPC_Klara.png";
		return 0;
	}
	if(var_46_int == 13) {
		var_45_string = "ui/NPC_Lara.png";
		return 0;
	}
	if(var_46_int == 14) {
		var_45_string = "ui/NPC_Laska.png";
		return 0;
	}
	if(var_46_int == 15) {
		var_45_string = "ui/NPC_Maria.png";
		return 0;
	}
	if(var_46_int == 16) {
		var_45_string = "ui/NPC_Mark.png";
		return 0;
	}
	if(var_46_int == 17) {
		var_45_string = "ui/NPC_Mat.png";
		return 0;
	}
	if(var_46_int == 18) {
		var_45_string = "ui/NPC_Mishka.png";
		return 0;
	}
	if(var_46_int == 19) {
		var_45_string = "ui/NPC_MladVlad.png";
		return 0;
	}
	if(var_46_int == 20) {
		var_45_string = "ui/NPC_Notkin.png";
		return 0;
	}
	if(var_46_int == 21) {
		var_45_string = "ui/NPC_Ospina.png";
		return 0;
	}
	if(var_46_int == 22) {
		var_45_string = "ui/NPC_Petr.png";
		return 0;
	}
	if(var_46_int == 23) {
		var_45_string = "ui/NPC_Rubin.png";
		return 0;
	}
	if(var_46_int == 24) {
		var_45_string = "ui/NPC_Spi4ka.png";
		return 0;
	}
	if(var_46_int == 25) {
		var_45_string = "ui/NPC_Starshina.png";
		return 0;
	}
	if(var_46_int == 26) {
		var_45_string = "ui/NPC_Viktor.png";
		return 0;
	}
	if(var_46_int == 27) {
		var_45_string = "ui/NPC_Citizen2.png";
		return 0;
	}
	if(var_46_int == 28) {
		var_45_string = "ui/NPC_Citizen3.png";
		return 0;
	}
	if(var_46_int == 29) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	if(var_46_int == 30) {
		var_45_string = "ui/NPC_Citizen3.png";
		return 0;
	}
	if(var_46_int == 31) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	if(var_46_int == 32) {
		var_45_string = "ui/NPC_Citizen3.png";
		return 0;
	}
	if(var_46_int == 33) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	if(var_46_int == 34) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	if(var_46_int == 35) {
		var_45_string = "ui/NPC_Citizen3.png";
		return 0;
	}
	if(var_46_int == 36) {
		var_45_string = "ui/NPC_Citizen2.png";
		return 0;
	}
	if(var_46_int == 37) {
		var_45_string = "ui/NPC_Citizen3.png";
		return 0;
	}
	if(var_46_int == 38) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	if(var_46_int == 39) {
		var_45_string = "ui/NPC_Citizen3.png";
		return 0;
	}
	if(var_46_int == 40) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	if(var_46_int == 42) {
		var_45_string = "ui/NPC_wmask.png";
		return 0;
	}
	if(var_46_int == 43) {
		var_45_string = "ui/NPC_Black.png";
		return 0;
	}
	if(var_46_int == 44) {
		var_45_string = "ui/NPC_bmask.png";
		return 0;
	}
	if(var_46_int == 46) {
		var_45_string = "ui/NPC_Citizen2.png";
		return 0;
	}
	if(var_46_int == 47) {
		var_45_string = "ui/NPC_Bakalavr.png";
		return 0;
	}
	if(var_46_int == 48) {
		var_45_string = "ui/NPC_Citizen2.png";
		return 0;
	}
	if(var_46_int == 49) {
		var_45_string = "ui/NPC_Citizen3.png";
		return 0;
	}
	if(var_46_int == 50) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	if(var_46_int == 51) {
		var_45_string = "ui/NPC_Citizen3.png";
		return 0;
	}
	if(var_46_int == 52) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	if(var_46_int == 53) {
		var_45_string = "ui/NPC_Citizen3.png";
		return 0;
	}
	if(var_46_int == 54) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	if(var_46_int == 55) {
		var_45_string = "ui/NPC_Citizen2.png";
		return 0;
	}
	if(var_46_int == 56) {
		var_45_string = "ui/NPC_Citizen2.png";
		return 0;
	}
	if(var_46_int == 57) {
		var_45_string = "ui/NPC_Citizen2.png";
		return 0;
	}
	if(var_46_int == 58) {
		var_45_string = "ui/NPC_Citizen3.png";
		return 0;
	}
	if(var_46_int == 59) {
		var_45_string = "ui/NPC_Citizen2.png";
		return 0;
	}
	if(var_46_int == 60) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	if(var_46_int == 61) {
		var_45_string = "ui/NPC_Citizen2.png";
		return 0;
	}
	if(var_46_int == 62) {
		var_45_string = "ui/NPC_Citizen3.png";
		return 0;
	}
	if(var_46_int == 63) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	if(var_46_int == 64) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	if(var_46_int == 65) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	if(var_46_int == 66) {
		var_45_string = "ui/NPC_Burah.png";
		return 0;
	}
	if(var_46_int == 67) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	if(var_46_int == 68) {
		var_45_string = "ui/NPC_Citizen3.png";
		return 0;
	}
	if(var_46_int == 69) {
		var_45_string = "ui/NPC_Black.png";
		return 0;
	}
	if(var_46_int == 70) {
		var_45_string = "ui/NPC_Aglaja.png";
		return 0;
	}
	if(var_46_int == 71) {
		var_45_string = "ui/NPC_Citizen3.png";
		return 0;
	}
	if(var_46_int == 72) {
		var_45_string = "ui/NPC_Block.png";
		return 0;
	}
	if(var_46_int == 73) {
		var_45_string = "ui/NPC_Citizen2.png";
		return 0;
	}
	if(var_46_int == 74) {
		var_45_string = "ui/NPC_Citizen2.png";
		return 0;
	}
	if(var_46_int == 75) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	if(var_46_int == 76) {
		var_45_string = "ui/NPC_Citizen2.png";
		return 0;
	}
	if(var_46_int == 77) {
		var_45_string = "ui/NPC_Citizen3.png";
		return 0;
	}
	if(var_46_int == 78) {
		var_45_string = "ui/NPC_Citizen2.png";
		return 0;
	}
	if(var_46_int == 79) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	if(var_46_int == 80) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	if(var_46_int == 81) {
		var_45_string = "ui/NPC_Citizen2.png";
		return 0;
	}
	if(var_46_int == 82) {
		var_45_string = "ui/NPC_Citizen3.png";
		return 0;
	}
	if(var_46_int == 83) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	if(var_46_int == 84) {
		var_45_string = "ui/NPC_Citizen1.png";
		return 0;
	}
	var_45_string = "";
}


// @pe
void func_1229(object var_242_object, bool var_243_bool)
{
	var_242_object->add(7);
	var_242_object->add(23);
	var_242_object->add(21);
	var_242_object->add(9);
	var_242_object->add(3);
	var_242_object->add(1);
	var_242_object->add(11);
	var_242_object->add(13);
	if(var_243_bool == false)
		var_242_object->add(25);
}


// @pe
void func_334(int var_214_int, int var_215_int)
{
	if(var_215_int == 1) {
		var_214_int = 502854;
		return 0;
	}
	if(var_215_int == 2) {
		var_214_int = 502855;
		return 0;
	}
	if(var_215_int == 3) {
		var_214_int = 502856;
		return 0;
	}
	if(var_215_int == 4) {
		var_214_int = 502857;
		return 0;
	}
	if(var_215_int == 5) {
		var_214_int = 502858;
		return 0;
	}
	if(var_215_int == 6) {
		var_214_int = 502859;
		return 0;
	}
	if(var_215_int == 7) {
		var_214_int = 502860;
		return 0;
	}
	if(var_215_int == 8) {
		var_214_int = 502861;
		return 0;
	}
	if(var_215_int == 9) {
		var_214_int = 502862;
		return 0;
	}
	if(var_215_int == 10) {
		var_214_int = 502863;
		return 0;
	}
	if(var_215_int == 11) {
		var_214_int = 502864;
		return 0;
	}
	if(var_215_int == 12) {
		var_214_int = 502865;
		return 0;
	}
	if(var_215_int == 13) {
		var_214_int = 502866;
		return 0;
	}
	if(var_215_int == 14) {
		var_214_int = 502867;
		return 0;
	}
	if(var_215_int == 15) {
		var_214_int = 502868;
		return 0;
	}
	if(var_215_int == 16) {
		var_214_int = 502869;
		return 0;
	}
	if(var_215_int == 17) {
		var_214_int = 502870;
		return 0;
	}
	if(var_215_int == 18) {
		var_214_int = 502871;
		return 0;
	}
	if(var_215_int == 19) {
		var_214_int = 502872;
		return 0;
	}
	if(var_215_int == 20) {
		var_214_int = 502873;
		return 0;
	}
	if(var_215_int == 21) {
		var_214_int = 502874;
		return 0;
	}
	if(var_215_int == 22) {
		var_214_int = 502875;
		return 0;
	}
	if(var_215_int == 23) {
		var_214_int = 502876;
		return 0;
	}
	if(var_215_int == 24) {
		var_214_int = 502877;
		return 0;
	}
	if(var_215_int == 25) {
		var_214_int = 502878;
		return 0;
	}
	if(var_215_int == 26) {
		var_214_int = 502879;
		return 0;
	}
	if(var_215_int == 27) {
		var_214_int = 503340;
		return 0;
	}
	if(var_215_int == 28) {
		var_214_int = 503341;
		return 0;
	}
	if(var_215_int == 29) {
		var_214_int = 503342;
		return 0;
	}
	if(var_215_int == 30) {
		var_214_int = 503343;
		return 0;
	}
	if(var_215_int == 31) {
		var_214_int = 503344;
		return 0;
	}
	if(var_215_int == 32) {
		var_214_int = 503345;
		return 0;
	}
	if(var_215_int == 33) {
		var_214_int = 503346;
		return 0;
	}
	if(var_215_int == 34) {
		var_214_int = 503347;
		return 0;
	}
	if(var_215_int == 35) {
		var_214_int = 503348;
		return 0;
	}
	if(var_215_int == 36) {
		var_214_int = 503349;
		return 0;
	}
	if(var_215_int == 37) {
		var_214_int = 503350;
		return 0;
	}
	if(var_215_int == 38) {
		var_214_int = 503351;
		return 0;
	}
	if(var_215_int == 39) {
		var_214_int = 503352;
		return 0;
	}
	if(var_215_int == 40) {
		var_214_int = 503353;
		return 0;
	}
	if(var_215_int == 42) {
		var_214_int = 503354;
		return 0;
	}
	if(var_215_int == 43) {
		var_214_int = 503355;
		return 0;
	}
	if(var_215_int == 44) {
		var_214_int = 504029;
		return 0;
	}
	if(var_215_int == 46) {
		var_214_int = 504031;
		return 0;
	}
	if(var_215_int == 47) {
		var_214_int = 504032;
		return 0;
	}
	if(var_215_int == 48) {
		var_214_int = 506270;
		return 0;
	}
	if(var_215_int == 49) {
		var_214_int = 506271;
		return 0;
	}
	if(var_215_int == 50) {
		var_214_int = 506272;
		return 0;
	}
	if(var_215_int == 51) {
		var_214_int = 506273;
		return 0;
	}
	if(var_215_int == 52) {
		var_214_int = 506274;
		return 0;
	}
	if(var_215_int == 53) {
		var_214_int = 506275;
		return 0;
	}
	if(var_215_int == 54) {
		var_214_int = 506276;
		return 0;
	}
	if(var_215_int == 55) {
		var_214_int = 506277;
		return 0;
	}
	if(var_215_int == 56) {
		var_214_int = 506278;
		return 0;
	}
	if(var_215_int == 57) {
		var_214_int = 506279;
		return 0;
	}
	if(var_215_int == 58) {
		var_214_int = 506280;
		return 0;
	}
	if(var_215_int == 59) {
		var_214_int = 506281;
		return 0;
	}
	if(var_215_int == 60) {
		var_214_int = 506282;
		return 0;
	}
	if(var_215_int == 61) {
		var_214_int = 506283;
		return 0;
	}
	if(var_215_int == 62) {
		var_214_int = 506284;
		return 0;
	}
	if(var_215_int == 63) {
		var_214_int = 506285;
		return 0;
	}
	if(var_215_int == 64) {
		var_214_int = 506286;
		return 0;
	}
	if(var_215_int == 65) {
		var_214_int = 506287;
		return 0;
	}
	if(var_215_int == 66) {
		var_214_int = 511961;
		return 0;
	}
	if(var_215_int == 67) {
		var_214_int = 512582;
		return 0;
	}
	if(var_215_int == 68) {
		var_214_int = 512583;
		return 0;
	}
	if(var_215_int == 69) {
		var_214_int = 512611;
		return 0;
	}
	if(var_215_int == 70) {
		var_214_int = 513334;
		return 0;
	}
	if(var_215_int == 71) {
		var_214_int = 514839;
		return 0;
	}
	if(var_215_int == 72) {
		var_214_int = 514840;
		return 0;
	}
	if(var_215_int == 73) {
		var_214_int = 514841;
		return 0;
	}
	if(var_215_int == 74) {
		var_214_int = 518096;
		return 0;
	}
	if(var_215_int == 75) {
		var_214_int = 518410;
		return 0;
	}
	if(var_215_int == 76) {
		var_214_int = 518606;
		return 0;
	}
	if(var_215_int == 77) {
		var_214_int = 518715;
		return 0;
	}
	if(var_215_int == 78) {
		var_214_int = 521047;
		return 0;
	}
	if(var_215_int == 79) {
		var_214_int = 527720;
		return 0;
	}
	if(var_215_int == 80) {
		var_214_int = 529825;
		return 0;
	}
	if(var_215_int == 81) {
		var_214_int = 529835;
		return 0;
	}
	if(var_215_int == 82) {
		var_214_int = 530493;
		return 0;
	}
	if(var_215_int == 83) {
		var_214_int = 531556;
		return 0;
	}
	if(var_215_int == 84) {
		var_214_int = 533304;
		return 0;
	}
	var_214_int = -1;
}


void func_15(object var_5_object)
{
	int var_11_int; int var_12_int; int var_13_int;
	@CreateIntVector(var_5_object);
	int var_14_int;
	func_1291(var_14_int);
	if(var_14_int == 1) {
		func_1160(var_5_object, false, 1);
	} else {
				int var_223_int;
				func_1291(var_223_int);
				if(!(var_223_int == 0)) goto Label_44;
				func_1193(var_5_object, false, 0);
	}
	for(;;) {
		var_5_object->size(var_11_int); //@t
		var_12_int = 0;

		for(;;) {
			if(var_12_int < var_11_int) {
				var_5_object->get(var_13_int, var_12_int); //@t
				bool var_36_bool; int var_37_int;
				var_13_int = var_37_int;
				func_1271(var_36_bool, var_37_int);
				if(var_36_bool != 0) {
					string var_45_string; int var_46_int;
					var_13_int = var_46_int;
					func_747(var_45_string, var_46_int);
					@LoadImage(var_45_string);
				} else {
				bool var_212_bool; int var_213_int;
				var_13_int = var_213_int;
				func_1281(var_212_bool, var_213_int);
				if(var_212_bool == 0) goto Label_80;
				string var_221_string; int var_222_int;
				var_13_int = var_222_int;
				func_747(var_221_string, var_222_int);
				@LoadImage(var_221_string);
			}

			}
		Label_80:
			var_12_int += 1;
		}

	}
	
Label_44:
	object var_242_object = var_5_object;
	func_1229(false, 2);
}


void func_1261(bool var_450_bool, int var_451_int)
{
	int var_453_int;
	@GetVariable(("vol_" + var_451_int), var_453_int);
	var_450_bool = (var_453_int & 4) != 0;
}


void func_209(int var_3_int, object var_5_object, int var_417_int, int var_418_int)
{
	int var_428_int; int var_433_int; int var_434_int; string var_435_string; int var_436_int;
	var_418_int = var_428_int;
	int var_430_int;
	var_5_object->size(var_430_int); //@t
	bool var_431_bool = true;
	int var_432_int = 0;
	
	while(var_432_int < var_430_int) {
		var_5_object->get(var_433_int, var_432_int); //@t
		bool var_438_bool; int var_439_int;
		var_433_int = var_439_int;
		func_1281(var_438_bool, var_439_int);
		if(var_438_bool != 0) {
			var_431_bool = false;
			string var_447_string; int var_448_int;
			var_433_int = var_448_int;
			func_747(var_447_string, var_448_int);
			@Blit(var_447_string, 0, var_428_int);
			bool var_450_bool; int var_451_int;
			var_433_int = var_451_int;
			func_1261(var_450_bool, var_451_int);
			if(var_450_bool != 0)
				@Blit("birdmask", 0, var_428_int);
			int var_461_int; int var_462_int;
			var_433_int = var_462_int;
			func_334(var_461_int, var_462_int);
			var_461_int = var_434_int;
			@GetStringByID(var_435_string, var_434_int);
			@GetTextHeightInWidth(var_436_int, "name", ((2 * var_3_int) / 5), var_435_string);
			@PrintInWidth(var_436_int, "name", ((3 * var_3_int) / 5), (((var_428_int + 140) - var_436_int) - 15), ((2 * var_3_int) / 5), var_435_string, 0.6, 0.6, 0.6);
			var_428_int += 140;
		}
		var_432_int += 1;
	}
	
	if(var_431_bool != 0)
		var_418_int = var_417_int;
	var_428_int = var_417_int;
}


void func_119(int var_3_int, object var_5_object, int var_14_int, int var_15_int)
{
	int var_26_int; int var_27_int; int var_31_int; int var_32_int; string var_33_string; int var_34_int; string var_35_string;
	var_26_int = var_15_int + 15;
	bool var_28_bool = true;
	int var_29_int;
	var_5_object->size(var_29_int); //@t
	int var_30_int = 0;
	
	for(;;) {
		if(var_30_int < var_29_int) {
			var_5_object->get(var_31_int, var_30_int); //@t
			bool var_38_bool; int var_39_int;
			var_31_int = var_39_int;
			func_1271(var_38_bool, var_39_int);
			if(var_38_bool != 0) {
				var_28_bool = false;
				string var_47_string; int var_48_int;
				var_31_int = var_48_int;
				func_747(var_47_string, var_48_int);
				@Blit(var_47_string, 0, var_26_int);
				int var_214_int; int var_215_int;
				var_31_int = var_215_int;
				func_334(var_214_int, var_215_int);
				var_214_int = var_32_int;
				@GetStringByID(var_33_string, var_32_int);
				@GetTextHeightInWidth(var_34_int, "name", ((2 * var_3_int) / 5), var_33_string);
				@PrintInWidth(var_34_int, "name", ((3 * var_3_int) / 5), ((var_26_int + 140) - var_34_int), ((2 * var_3_int) / 5), var_33_string, 0.6, 0.6, 0.6);
				if(var_34_int > 140)
					var_26_int += var_34_int;
				else
					var_26_int += 140;
			if(var_28_bool != 0) {
				var_15_int = var_14_int;
				return 20;
			}
			@GetStringByID(var_35_string, 201);
			@PrintInWidth(var_27_int, "default", 0, var_26_int, var_3_int, var_35_string, 1.0, 1.0, 1.0);
			var_26_int += (var_27_int + 7);
			@StretchBlit("separator", 0, var_26_int, var_3_int, 1);
			var_14_int = var_26_int + 7;
			return 20;
			}
		}
		var_30_int += 1;
	}
	
}


void func_1271(bool var_36_bool, int var_37_int)
{
	int var_39_int;
	@GetVariable(("vol_" + var_37_int), var_39_int);
	var_36_bool = (var_39_int & 2) != 0;
}



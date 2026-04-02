// @GLOBALS: 0:bool:,1:int:,2:int:,3:int:,4:int:,5:object:,6:object:,7:object:,8:object:

maintask task_0
{
	void init(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		object var_31_object; int var_32_int; bool var_33_bool; int var_34_int; bool var_35_bool; cvector var_36_cvector; cvector var_37_cvector; int var_38_int; cvector var_39_cvector; cvector var_40_cvector; object var_41_object;
		bool var_42_bool;
		func_3483(var_42_bool);
		if(!var_42_bool) { //@nz
			@Trace("FSM Init failed");
			object var_102_object;
			func_3164(var_102_object);
			@RemoveActor(var_102_object);
			return 22;
		}
		@GetPosition(var_0_cvector);
		@GetDirection(var_1_cvector);
		var_105_int = GlobalVars[3];
		GlobalVars[3] = 0;
		var_106_int = GlobalVars[4];
		GlobalVars[4] = 2;
	
		for(;;) {
			if(true != 0) {
				var_109_int = GlobalVars[3];
				if(0 == var_109_int) {
					TaskCall(9);
					func_2748();
					TaskReturn();
					bool var_117_bool;
					func_3567(var_117_bool, 2);
				} else {
				var_137_int = GlobalVars[3];
				if(7 == var_137_int) {
					object var_139_object;
					var_140_object = GlobalVars[8];
					var_140_object = var_139_object;
					TaskCall(1);
					func_441(var_148_object, var_139_object);
					TaskReturn();
					var_669_int = GlobalVars[3];
					if(7 == var_669_int) {
						TaskCall(7);
						func_2381(1);
						TaskReturn();
						var_689_int = GlobalVars[3];
						if(7 == var_689_int) {
							bool var_691_bool;
							func_3567(var_691_bool, 2);
						}
					}
					goto Label_437;
				}
				var_694_int = GlobalVars[3];
				if(6 == var_694_int) {
					TaskCall(7);
					func_2381(1);
					TaskReturn();
					var_699_int = GlobalVars[3];
					if(6 == var_699_int) {
						object var_701_object;
						var_703_object = GlobalVars[7];
						var_703_object = var_701_object;
						TaskCall(3);
						func_1532(var_701_object, (float)8);
						TaskReturn();
						var_774_int = GlobalVars[3];
						if(6 == var_774_int) {
							TaskCall(7);
							func_2381(1);
							TaskReturn();
							var_779_int = GlobalVars[3];
							if(6 == var_779_int) {
								bool var_781_bool;
								func_3567(var_781_bool, 2);
							}
						}
					}
					goto Label_437;
				}
				var_784_int = GlobalVars[3];
				if(1 == var_784_int) {
					func_3696(true);
					bool var_795_bool;
					TaskCall(6);
					func_2145(var_795_bool);
					TaskReturn();
					var_870_int = GlobalVars[3];
					if(1 == var_870_int) {
						TaskCall(4);
						func_1791();
						TaskReturn();
						var_924_int = GlobalVars[3];
						if(1 == var_924_int) {
							bool var_926_bool;
							TaskCall(5);
							func_1932(var_926_bool, var_0_cvector, var_1_cvector, false);
							TaskReturn();
							var_986_int = GlobalVars[3];
							if(1 == var_986_int) {
								bool var_988_bool;
								func_3567(var_988_bool, 2);
							}
						}
					}
					func_3696(false);
					goto Label_437;
				}
				var_992_int = GlobalVars[3];
				if(2 == var_992_int) {
					bool var_994_bool;
					func_0(var_41_object, var_994_bool);
					if(!var_994_bool) { //@nz
						bool var_1003_bool;
						TaskCall(5);
						func_1932(var_1003_bool, var_0_cvector, var_1_cvector, false);
						TaskReturn();
					}
					var_1009_int = GlobalVars[3];
					if(2 == var_1009_int) {
						TaskCall(4);
						func_1791();
						TaskReturn();
						var_1012_int = GlobalVars[3];
						if(2 == var_1012_int) {
							bool var_1014_bool;
							func_3710(var_1014_bool);
							if(!var_1014_bool) { //@nz
								bool var_1024_bool;
								func_3567(var_1024_bool, 3);
							} else {
								bool var_1026_bool;
								func_3198(var_1026_bool, 0.5);
								if(var_1026_bool == 0) goto Label_223;
								bool var_1030_bool;
								func_3685(var_1030_bool);
								var_1039_bool = !var_1030_bool; //@nz
								if(var_1039_bool == 0) goto Label_223;
								bool var_1040_bool;
								func_3567(var_1040_bool, 1);
				}
							var_1043_int = GlobalVars[3];
							if(3 == var_1043_int) {
								func_3721(true);
								@GetMainOutdoorScene(var_31_object);
								var_1054_int = GlobalVars[2];
								@irand(var_32_int, var_1054_int);
								bool var_1055_bool;
								func_3198(var_1055_bool, 0.5);
								var_1055_bool = var_33_bool;
								var_34_int = 0;

								for(;;) {
									var_1057_int = GlobalVars[2];
									if(var_34_int < var_1057_int) {
										var_1060_int = GlobalVars[2];
										var_38_int = (var_34_int + var_32_int) % var_1060_int;
										if(var_33_bool != 0) {
											var_1062_int = GlobalVars[2];
											var_38_int = (var_1062_int - 1) - var_38_int;
										}
										var_1066_int = GlobalVars[1];
										var_31_object->GetLocator(((("pt_b9q03_bonfire" + (var_1066_int + 1)) + "_patrol") + (var_38_int + 1)), var_35_bool, var_36_cvector, var_37_cvector);
										bool var_1075_bool; cvector var_1076_cvector; cvector var_1077_cvector;
										var_36_cvector = var_1076_cvector;
										var_37_cvector = var_1077_cvector;
										TaskCall(5);
										func_1932(var_1075_bool, var_1076_cvector, var_1077_cvector, false);
										TaskReturn();
										var_1081_int = GlobalVars[3];
										if(3 != var_1081_int) {
										} else {
												TaskCall(7);
												func_2381(1);
												TaskReturn();
												var_1092_int = GlobalVars[3];
												if(!(3 != var_1092_int)) goto Label_291;
										}
									}
									for(;;) {
										var_1084_int = GlobalVars[3];
										if(3 == var_1084_int) {
											bool var_1086_bool;
											func_3567(var_1086_bool, 2);
										}
										func_3721(false);
										var_31_object = null;
										goto Label_437;

									}

								Label_291:
									var_34_int += 1;
								}
							}
							var_1096_int = GlobalVars[3];
							if(4 == var_1096_int) {
								var_1098_object = GlobalVars[5];
								var_1098_object->GetPosition(var_39_cvector);
								var_1099_object = GlobalVars[5];
								var_1099_object->GetDirection(var_40_cvector);
								bool var_1100_bool; cvector var_1101_cvector; cvector var_1102_cvector;
								var_39_cvector = var_1101_cvector;
								var_1102_cvector = -var_40_cvector;
								TaskCall(5);
								func_1932(var_1100_bool, var_1101_cvector, var_1102_cvector, true);
								TaskReturn();
								var_1106_int = GlobalVars[3];
								if(4 == var_1106_int) {
									TaskCall(7);
									func_2381(2);
									TaskReturn();
									var_1111_int = GlobalVars[3];
									if(4 == var_1111_int) {
										bool var_1113_bool;
										TaskCall(5);
										func_1932(var_1113_bool, var_0_cvector, var_1_cvector, true);
										TaskReturn();
										var_1119_int = GlobalVars[3];
										if(4 == var_1119_int) {
											@GetMainOutdoorScene(var_41_object);
											var_1122_int = GlobalVars[1];
											object var_1126_object;
											func_3164(var_1126_object);
											@BroadcastMessage(("b9q03_corpse" + (var_1122_int + 1)), var_1126_object, var_41_object);
											bool var_1127_bool; cvector var_1128_cvector; cvector var_1129_cvector;
											var_39_cvector = var_1128_cvector;
											var_39_cvector = var_1129_cvector;
											TaskCall(5);
											func_1932(var_1127_bool, var_1128_cvector, var_1129_cvector, true);
											TaskReturn();
											var_1133_int = GlobalVars[3];
											if(4 == var_1133_int) {
												TaskCall(7);
												func_2381(3);
												TaskReturn();
												var_1138_int = GlobalVars[3];
												if(4 == var_1138_int) {
													bool var_1140_bool;
													func_3567(var_1140_bool, 2);
												}
											}
											var_41_object = null;
										}
									}
								}
								goto Label_437;
							}
							var_1143_int = GlobalVars[3];
							if(5 == var_1143_int) {
								TaskCall(7);
								func_2381(1);
								TaskReturn();
								var_1148_int = GlobalVars[3];
								if(5 == var_1148_int) {
									object var_1150_object;
									var_1152_object = GlobalVars[6];
									var_1152_object = var_1150_object;
									TaskCall(3);
									func_1532(var_1150_object, (float)8);
									TaskReturn();
									var_1157_int = GlobalVars[3];
									if(5 == var_1157_int) {
										TaskCall(7);
										func_2381(2);
										TaskReturn();
										var_1162_int = GlobalVars[3];
										if(5 == var_1162_int) {
											bool var_1164_bool;
											func_3567(var_1164_bool, 2);
										}
									}
								}
								goto Label_437;
							}
							@Trace("Unknown FSM state");
			}
						return 22;
					}
				}
			}
		Label_223:
			goto Label_437;
			}
		Label_437:
			@sync();
		}
	
	}

}


task task_1
{
	void OnTimer(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object, bool var_17_bool, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		object var_22_object;
		if(var_20_bool == 1) {
			@GetMainOutdoorScene(var_22_object);
			var_26_int = GlobalVars[1];
			@BroadcastMessage(("b9q03_helpme" + (var_26_int + 1)), var_7_float, var_22_object);
			@Trace("helpme timer");
			var_22_object = null;
		}
	}

	// @pe
	void OnSee(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, object var_10_object, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object, bool var_17_bool, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		bool var_21_bool = false;
		bool var_22_bool; object var_23_object;
		var_20_bool = var_23_object;
		func_2804(var_22_bool, var_23_object);
		if(var_22_bool != 0) {
			var_26_object = GlobalVars[8];
			if(var_26_object != var_20_bool)
				var_21_bool = true;
		}
		if(var_21_bool != 0) {
			func_765(var_20_bool);
			bool var_28_bool; object var_29_object;
			var_20_bool = var_29_object;
			func_3667(var_28_bool, var_29_object);
		}
	}

	// @pe
	void OnUnload(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		func_765(var_19_bool);
		bool var_20_bool;
		func_3567(var_20_bool, 0);
	}

}


task task_2
{
	void OnTimer(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		object var_22_object;
		if(var_20_bool == 2) {
			@GetMainOutdoorScene(var_22_object);
			var_26_int = GlobalVars[1];
			@BroadcastMessage(("b9q03_helpme" + (var_26_int + 1)), var_3_int, var_22_object);
			@Trace("helpme timer");
		} else {
			int var_31_int;
			var_20_bool = var_31_int;
			func_1325(Obj(), var_31_int);
		}
	
	}

	// @pe
	void OnUnload(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		func_1339(var_19_bool);
		bool var_24_bool;
		func_3567(var_24_bool, 0);
	}

	// @pe
	void OnSee(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, object var_14_object, bool var_15_bool, object var_16_object, bool var_17_bool, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		bool var_21_bool = false;
		if(var_1_cvector == var_20_bool) {
			if(!var_2_object) //@nz
				var_21_bool = true;
		}
		if(var_21_bool != 0) {
			var_2_object = true;
			object var_24_object;
			var_20_bool = var_24_object;
			func_3101(var_24_object);
		}
	}

	// @pe
	void OnStopSee(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, object var_14_object, bool var_15_bool, object var_16_object, bool var_17_bool, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		bool var_21_bool = false;
		if(var_1_cvector == var_20_bool) {
			if(var_2_object != 0)
				var_21_bool = true;
		}
		if(var_21_bool != 0) {
			var_2_object = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, object var_14_object, bool var_15_bool, object var_16_object, bool var_17_bool, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		@RequestClearPath(var_20_bool);
	}

	// @pe
	void OnDeath(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, object var_14_object, bool var_15_bool, object var_16_object, bool var_17_bool, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		func_1339(var_20_bool);
		object var_25_object;
		var_20_bool = var_25_object;
		func_3766();
	}

}


task task_3
{
	// @pe
	void OnUnload(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		func_1764(var_19_bool);
		var_2_object = true;
		bool var_21_bool;
		func_3567(var_21_bool, 0);
	}

	// @pe
	void OnMessage(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, string var_18_string, bool var_19_bool, bool var_20_bool, bool var_21_bool)
	{
		object var_23_object;
		var_20_bool = var_23_object;
		bool var_22_bool;
		string var_24_string;
		func_3319(var_22_bool, var_23_object, var_24_string);
		if(var_22_bool != 0)
			func_1764(var_24_string);
	}

	// @pe
	void OnSee(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		bool var_21_bool; object var_22_object;
		func_3397(var_21_bool, var_22_object);
		if(var_21_bool != 0) {
			var_2_object = true;
			func_1764(var_22_object);
		}
	}

	// @pe
	void OnHear(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		bool var_21_bool; object var_22_object;
		func_3456(var_21_bool, var_22_object);
		if(var_21_bool != 0) {
			var_2_object = true;
			func_1764(var_22_object);
		}
	}

	// @pe
	void OnAttacked(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		func_1764(var_20_bool);
		var_2_object = true;
		bool var_22_bool; object var_23_object;
		var_20_bool = var_23_object;
		func_3667(var_22_bool, var_23_object);
	}

	// @pe
	void OnTimer(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, int var_17_int, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		if(var_20_bool == 3) {
			func_1764(var_20_bool);
			var_2_object = true;
		}
		int var_24_int;
		func_1742(var_19_bool, var_24_int, var_24_int);
	}

	// @pe
	void OnCollision(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		@RequestClearPath(var_20_bool);
	}

	// @pe
	void OnDeath(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		func_1764(var_20_bool);
		object var_22_object;
		var_20_bool = var_22_object;
		func_3766();
	}

}


task task_4
{
	// @pe
	void OnUnload(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		func_1927();
		bool var_20_bool;
		func_3567(var_20_bool, 0);
	}

	// @pe
	void OnMessage(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, string var_18_string, bool var_19_bool, bool var_20_bool, bool var_21_bool)
	{
		object var_23_object;
		var_20_bool = var_23_object;
		string var_24_string;
		var_21_bool = var_24_string;
		bool var_22_bool;
		func_3319(var_22_bool, var_23_object, var_24_string);
		if(var_22_bool != 0)
			func_1927();
	}

	// @pe
	void OnSee(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		object var_22_object;
		var_20_bool = var_22_object;
		bool var_21_bool;
		func_3397(var_21_bool, var_22_object);
		if(var_21_bool != 0)
			func_1927();
	}

	// @pe
	void OnHear(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		object var_22_object;
		var_20_bool = var_22_object;
		bool var_21_bool;
		func_3456(var_21_bool, var_22_object);
		if(var_21_bool != 0)
			func_1927();
	}

	// @pe
	void OnAttacked(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		func_1927();
		bool var_21_bool; object var_22_object;
		var_20_bool = var_22_object;
		func_3667(var_21_bool, var_22_object);
	}

}


task task_5
{
	// @pe
	void OnUnload(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		func_2125(var_19_bool);
		bool var_21_bool;
		func_3567(var_21_bool, 0);
	}

	// @pe
	void OnMessage(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, object var_18_object, string var_19_string, bool var_20_bool, bool var_21_bool)
	{
		object var_23_object;
		var_20_bool = var_23_object;
		bool var_22_bool;
		string var_24_string;
		func_3319(var_22_bool, var_23_object, var_24_string);
		if(var_22_bool != 0)
			func_2125(var_24_string);
	}

	// @pe
	void OnSee(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, object var_18_object, bool var_19_bool, bool var_20_bool)
	{
		bool var_21_bool; object var_22_object;
		func_3397(var_21_bool, var_22_object);
		if(var_21_bool != 0)
			func_2125(var_22_object);
	}

	// @pe
	void OnHear(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, object var_18_object, bool var_19_bool, bool var_20_bool)
	{
		bool var_21_bool; object var_22_object;
		func_3456(var_21_bool, var_22_object);
		if(var_21_bool != 0)
			func_2125(var_22_object);
	}

	// @pe
	void OnAttacked(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, object var_18_object, bool var_19_bool, bool var_20_bool)
	{
		func_2125(var_20_bool);
		bool var_22_bool; object var_23_object;
		var_20_bool = var_23_object;
		func_3667(var_22_bool, var_23_object);
	}

	// @pe
	void OnTimer(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, int var_18_int, bool var_19_bool, bool var_20_bool)
	{
		if(var_20_bool != 0)
			return 0;
		bool var_23_bool;
		func_1999(var_23_bool);
		if(!var_23_bool) //@nz
			var_0_cvector = true;
		@KillTimer(0);
		@Stop();
	}

	// @pe
	void OnCollision(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, object var_18_object, bool var_19_bool, bool var_20_bool)
	{
		@RequestClearPath(var_20_bool);
	}

	// @pe
	void OnDeath(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, object var_18_object, bool var_19_bool, bool var_20_bool)
	{
		func_2125(var_20_bool);
		object var_22_object;
		var_20_bool = var_22_object;
		func_3766();
	}

}


task task_6
{
	// @pe
	void OnMessage(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, object var_19_object, string var_20_string, bool var_21_bool)
	{
		object var_23_object;
		var_20_string = var_23_object;
		bool var_22_bool;
		string var_24_string;
		func_3319(var_22_bool, var_23_object, var_24_string);
		if(var_22_bool != 0)
			func_2361(var_24_string);
	}

	// @pe
	void OnSee(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		bool var_21_bool; object var_22_object;
		func_3397(var_21_bool, var_22_object);
		if(var_21_bool != 0)
			func_2361(var_22_object);
	}

	// @pe
	void OnHear(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		bool var_21_bool; object var_22_object;
		func_3456(var_21_bool, var_22_object);
		if(var_21_bool != 0)
			func_2361(var_22_object);
	}

	// @pe
	void OnAttacked(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		func_2361(var_20_bool);
		bool var_22_bool; object var_23_object;
		var_20_bool = var_23_object;
		func_3667(var_22_bool, var_23_object);
	}

	// @pe
	void OnUnload(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		func_2361(var_19_bool);
		bool var_21_bool;
		func_3567(var_21_bool, 0);
	}

	// @pe
	void OnTimer(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, int var_19_int, bool var_20_bool)
	{
		if(var_20_bool != 0)
			return 0;
		bool var_23_bool;
		func_2235(var_23_bool);
		if(!var_23_bool) //@nz
			var_0_cvector = true;
		@KillTimer(0);
		@Stop();
	}

	// @pe
	void OnCollision(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		@RequestClearPath(var_20_bool);
	}

	// @pe
	void OnDeath(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		func_2361(var_20_bool);
		object var_22_object;
		var_20_bool = var_22_object;
		func_3766();
	}

}


task task_7
{
	// @pe
	void OnUnload(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		func_2472();
		var_0_cvector = true;
		bool var_20_bool;
		func_3567(var_20_bool, 0);
	}

	// @pe
	void OnMessage(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object, string var_21_string)
	{
		object var_23_object;
		var_20_object = var_23_object;
		string var_24_string;
		var_21_string = var_24_string;
		bool var_22_bool;
		func_3319(var_22_bool, var_23_object, var_24_string);
		if(var_22_bool != 0) {
			func_2472();
			var_0_cvector = true;
		}
	}

	// @pe
	void OnSee(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object)
	{
		object var_22_object;
		var_20_object = var_22_object;
		bool var_21_bool;
		func_3397(var_21_bool, var_22_object);
		if(var_21_bool != 0) {
			func_2472();
			var_0_cvector = true;
		}
	}

	// @pe
	void OnHear(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object)
	{
		object var_22_object;
		var_20_object = var_22_object;
		bool var_21_bool;
		func_3456(var_21_bool, var_22_object);
		if(var_21_bool != 0) {
			func_2472();
			var_0_cvector = true;
		}
	}

	// @pe
	void OnAttacked(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object)
	{
		func_2472();
		bool var_21_bool; object var_22_object;
		var_20_object = var_22_object;
		func_3667(var_21_bool, var_22_object);
	}

}


task task_8
{
	void OnUnload(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		object var_20_object;
		func_3164(var_20_object);
		@RemoveActor(var_20_object);
		@Hold();
	}

	void OnUse(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object)
	{
		bool var_22_bool;
		@IsOverrideActive(var_22_bool);
		if(!var_22_bool) { //@nz
			object var_24_object;
			var_20_object = var_24_object;
			func_3257(var_24_object);
		}
	}

	// @pe
	void OnHit(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object, int var_21_int, float var_22_float, float var_23_float)
	{
	}

	// @pe
	void OnPropertyChange(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object, string var_21_string)
	{
	}

	// @pe
	void OnDeath(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object)
	{
	}

}


task task_9
{
	// @pe
	void OnTrigger(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, string var_20_string)
	{
		if(var_20_string == "cleanup") {
			object var_23_object;
			func_3164(var_23_object);
			@RemoveActor(var_23_object);
			@Hold();
		}
	}

	void OnLoad(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		@StopGroup0();
		@sync();
	}

}


// @pe
void OnTrigger(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, string var_20_string)
{
	if(var_20_string == "cleanup") {
		var_23_bool = GlobalVars[0];
		GlobalVars[0] = true;
	}
}


// @pe
void OnHit(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object, int var_21_int, float var_22_float, float var_23_float)
{
	object var_24_object;
	var_20_object = var_24_object;
	int var_25_int;
	var_21_int = var_25_int;
	float var_26_float;
	var_22_float = var_26_float;
	func_3003(var_24_object, var_25_int, var_26_float);
}


// @pe
void OnHit2(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object, int var_21_int, float var_22_float, float var_23_float, cvector var_24_cvector, cvector var_25_cvector)
{
	object var_26_object;
	var_20_object = var_26_object;
	int var_27_int;
	var_21_int = var_27_int;
	float var_28_float;
	var_22_float = var_28_float;
	cvector var_29_cvector;
	var_24_cvector = var_29_cvector;
	cvector var_30_cvector;
	var_25_cvector = var_30_cvector;
	func_3071(var_28_float, var_29_cvector, var_30_cvector);
}


void OnPropertyChange(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object, string var_21_string)
{
	float var_23_float;
	if(var_21_string == "health") {
		@GetProperty("health", var_23_float);
		if(var_23_float <= 0)
			@SignalDeath(var_20_object);
	}
}


// @pe
void OnDeath(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object)
{
	object var_21_object;
	var_20_object = var_21_object;
	TaskCall(8);
	func_2477(var_21_object);
	TaskReturn();
}


void func_0(cvector var_0_cvector, bool var_994_bool)
{
	cvector var_998_cvector;
	@GetPosition(var_998_cvector);
	var_994_bool = ((var_998_cvector - var_0_cvector) | (var_998_cvector - var_0_cvector)) < 40000;
}


void func_515(cvector var_0_cvector, int var_3_int, int var_4_int, bool var_6_bool, object var_151_object, bool var_152_bool, float var_153_float, bool var_259_bool, bool var_365_bool)
{
	float var_165_float; cvector var_166_cvector; cvector var_167_cvector; bool var_169_bool; float var_172_float; cvector var_173_cvector; bool var_174_bool; float var_175_float;
	func_773(var_173_cvector, var_174_bool, var_175_float);
	var_6_bool = 0;
	var_200_bool = IsFuncExist(var_151_object, "@GetAttackDistance", 1);
	if(var_200_bool != 0) {
		var_151_object->GetAttackDistance(var_165_float);
		var_165_float += 50;
	} else {
						var_153_float = var_165_float;
	}
	if(var_165_float >= 150)
		var_165_float = 150;
	var_0_cvector = var_151_object;
	bool var_168_bool;
	@IsPlayerActor(var_0_cvector, var_168_bool);
	if(var_168_bool != 0)
		@PlayGlobalMusic("attack");
	if(var_152_bool != 0)
		var_169_bool = false;
	else
		var_169_bool = true;

	
Label_550:
	for(;;) {
		bool var_208_bool = false;
		bool var_209_bool = false;
		bool var_210_bool;
		func_2935(var_210_bool, var_0_cvector);
		if(var_210_bool != 0) {
			if(!false) //@nz
				var_209_bool = true;
		}
		if(var_209_bool != 0) {
			if(!var_4_int) //@nz
				var_208_bool = true;
		}
		if(var_208_bool != 0) {
			func_1207(var_175_float);
			var_0_cvector->GetPFPosition(var_166_cvector); //@t
			@GetPFPosition(var_167_cvector);
			var_172_float = (var_166_cvector - var_167_cvector) | (var_166_cvector - var_167_cvector);
			if(var_172_float >= ((300.0 + var_165_float) * (300.0 + var_165_float))) {
				bool var_253_bool; float var_255_float;
				var_165_float = var_255_float;
				TaskCall(2);
				func_1225(var_262_object, var_253_bool, var_0_cvector, var_255_float, 2000.0, true, false);
				TaskReturn();
				if(!var_259_bool) { //@nz
					var_3_int = true;
				} else {
					var_169_bool = false;
			} else {
			if(var_172_float >= (var_153_float * var_153_float)) {
				var_0_cvector->GetPFPosition(var_173_cvector); //@t
				@CanReachByPF(var_174_bool, var_173_cvector);
				if(!var_174_bool) { //@nz
					bool var_359_bool; float var_361_float;
					var_165_float = var_361_float;
					TaskCall(2);
					func_1225(var_368_object, var_359_bool, var_0_cvector, var_361_float, 2000.0, true, false);
					TaskReturn();
					if(!var_365_bool) { //@nz
						var_3_int = true;
						goto Label_742;
					}
					var_169_bool = false;
					goto Label_550;
				}
				if(!var_169_bool) { //@nz
					func_3085(var_0_cvector);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_1207(var_175_float);
					@StopAsync();
					var_169_bool = true;
					bool var_382_bool = true;
					bool var_383_bool;
					func_2935(var_383_bool, var_0_cvector);
					var_385_bool = !var_383_bool; //@nz
					if(var_385_bool != 1) {
						if(var_4_int != 1)
							var_382_bool = false;
					}
					if(var_382_bool != 0) {
						goto Label_742;
					}
				}
				@rand(var_175_float);
				bool var_387_bool;
				var_389_bool = var_175_float < 0.6;
				if(var_389_bool != 1) {
					bool var_390_bool;
					func_1164(true, var_390_bool);
					if(var_390_bool != 1)
						var_387_bool = false;
				}
				if(var_387_bool != 0) {
					@Face(var_0_cvector);
					func_1212();
					@PlayAnimation("all", "attack_stay");
					bool var_427_bool; float var_428_float;
					func_1020(var_175_float, var_427_bool, var_428_float);
					@StopAsync();
				} else {
					@Face(var_0_cvector);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_1207(var_175_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_652_bool;
					func_1164(var_175_float, var_652_bool);
					var_653_bool = !var_652_bool; //@nz
					if(var_653_bool == 0) goto Label_732;
					bool var_654_bool = true;
					bool var_655_bool;
					func_2935(var_655_bool, var_0_cvector);
					var_657_bool = !var_655_bool; //@nz
					if(var_657_bool != 1) {
						if(var_4_int != 1)
							var_654_bool = false;
					}
					if(var_654_bool != 0) {
						goto Label_742;
					}
					var_0_cvector->GetPFPosition(var_166_cvector); //@t
					@GetPFPosition(var_167_cvector);
					if(!(((var_166_cvector - var_167_cvector) | (var_166_cvector - var_167_cvector)) < (var_428_float * var_428_float))) goto Label_732;
					bool var_661_bool; float var_662_float;
					var_153_float = var_662_float;
					func_847(var_174_bool, var_175_float, var_661_bool, var_662_float);
					var_663_bool = !var_661_bool; //@nz
					if(var_663_bool == 0) goto Label_732;
					goto Label_742;
			}
				bool var_664_bool; float var_665_float;
				var_153_float = var_665_float;
				func_847(var_174_bool, var_175_float, var_664_bool, var_665_float);
				if(!var_664_bool) { //@nz
					goto Label_742;
				}
				var_169_bool = true;

			}
		Label_732:
			goto Label_741;
			}
			Label_741:
			}
		}
	Label_742:
		@WaitForAnimEnd();
		bool var_349_bool = true;
		if(var_3_int != 1) {
			if(var_4_int != 1)
				var_349_bool = false;
		}
		if(var_349_bool != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_168_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_3085(object var_371_object)
{
	cvector var_375_cvector;
	var_371_object->GetPosition(var_375_cvector);
	cvector var_376_cvector;
	@GetPosition(var_376_cvector);
	cvector var_377_cvector = var_375_cvector - var_376_cvector;
	var_378_float = GetByIndex(var_377_cvector, 0);
	var_379_float = GetByIndex(var_377_cvector, 2);
	@RotateAsync(var_378_float, var_379_float);
}


void func_3096(bool var_113_bool)
{
	bool var_115_bool;
	@IsLoaded(var_115_bool);
	var_115_bool = var_113_bool;
}


// @pe
void func_1532(object var_701_object, float var_702_float)
{
	object var_708_object;
	var_701_object = var_708_object;
	bool var_707_bool;
	func_2935(var_707_bool, var_708_object);
	if(!var_707_bool) { //@nz
		bool var_710_bool;
		func_3567(var_710_bool, 2);
		return 0;
	}
	if(var_702_float > 0) {
		@SetTimer(3, var_702_float);
		bool var_715_bool; object var_716_object;
		func_1640(var_716_object, var_702_float, var_715_bool, var_716_object, 350.0, (float)6000, true, true);
		@KillTimer(3);
	} else {
		bool var_767_bool; object var_768_object;
		func_1640(var_768_object, var_702_float, var_767_bool, var_768_object, 350.0, (float)6000, true, true);
	}
	
}


void func_3101(object var_281_object)
{
	float var_284_float;
	var_281_object->GetEyesHeight(var_284_float);
	cvector var_285_cvector = [0.0, 0.0, 0.0];
	var_286_float = GetByIndex(var_285_cvector, 1);
	var_284_float = var_286_float;
	SetByIndex(var_285_cvector, 1) = var_286_float;
	@LookAsync(var_281_object, "head", var_285_cvector);
}


// @pe
void func_3613(bool var_42_bool, object var_43_object)
{
	var_44_int = GlobalVars[3];
	if(var_44_int == 4)
		var_42_bool = false;
	var_47_int = GlobalVars[3];
	GlobalVars[3] = 4;
	@Trace("changing state to c_iStateAware");
	var_49_object = GlobalVars[5];
	var_43_object = var_49_object;
	GlobalVars[5] = var_49_object;
	var_42_bool = true;
}


void func_3112(object var_46_object, string var_47_string, int var_48_int, int var_49_int)
{
	bool var_54_bool;
	int var_56_int;
	var_48_int = var_56_int;
	int var_57_int;
	var_49_int = var_57_int;
	bool var_55_bool;
	func_3203(var_55_bool, var_56_int, var_57_int);
	if(var_55_bool != 0)
		var_46_object->AddItem(var_54_bool, var_47_string, 0);
}


// @pe
void func_2600(object var_121_object)
{
	object var_122_object;
	var_121_object = var_122_object;
	func_2625(var_122_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1069(cvector var_0_cvector, bool var_442_bool)
{
	cvector var_448_cvector; cvector var_449_cvector;
	bool var_453_bool = true;
	bool var_454_bool;
	func_2935(var_454_bool, var_0_cvector);
	var_456_bool = !var_454_bool; //@nz
	if(var_456_bool != 1) {
		if(var_4_int != 1)
			var_453_bool = false;
	}
	if(var_453_bool != 0) {
		var_442_bool = false;
		return 10;
	}
	bool var_458_bool;
	float var_452_float;
	func_1164(var_452_float, var_458_bool);
	if(var_458_bool != 0) {
		var_0_cvector->GetPFPosition(var_448_cvector); //@t
		@GetPFPosition(var_449_cvector);
		var_0_cvector->GetAttackDistance(var_452_float); //@t
		var_442_bool = ((var_448_cvector - var_449_cvector) | (var_448_cvector - var_449_cvector)) <= ((var_452_float + 50) * (var_452_float + 50));
		return 10;
	}
	var_442_bool = false;
}


// @pe
void func_3631(bool var_51_bool, object var_52_object)
{
	var_53_int = GlobalVars[3];
	if(var_53_int == 5)
		var_51_bool = false;
	var_56_int = GlobalVars[3];
	GlobalVars[3] = 5;
	@Trace("changing state to c_iStateSearchEnemy");
	var_58_object = GlobalVars[6];
	var_52_object = var_58_object;
	GlobalVars[6] = var_58_object;
	var_51_bool = true;
}


void func_3123(string var_396_string)
{
	bool var_405_bool; int var_406_int; bool var_407_bool; int var_408_int; bool var_409_bool; float var_410_float; cvector var_411_cvector; cvector var_412_cvector;
	@IsExisting3DSound(var_405_bool, var_396_string);
	if(!var_405_bool) { //@nz
		var_406_int = 0;

		for(;;) {
			@IsExisting3DSound(var_407_bool, (var_396_string + (var_406_int + 1)));
			if(!var_407_bool) { //@nz
				break;
			Label_3143:
				@irand(var_408_int, var_406_int);
				var_396_string += (var_408_int + 1);
	}
			@Is3DSoundLoaded(var_409_bool, var_396_string);
			if(var_409_bool != 0) {
				@GetEyesHeight(var_410_float);
				@GetDirection(var_411_cvector);
				var_412_cvector = var_411_cvector * 50;
				var_423_float = GetByIndex(var_412_cvector, 1);
				SetByIndex(var_412_cvector, 1) = (var_423_float + var_410_float);
				@PlayGlobalSound(var_396_string, var_412_cvector);
			}
		}
		var_406_int += 1;
	}
	var_418_bool = !var_406_int; //@nz
	if(var_418_bool == 0) goto Label_3143;
}


void func_2625(object var_122_object)
{
	cvector var_133_cvector; cvector var_134_cvector; cvector var_135_cvector; cvector var_136_cvector; string var_137_string; object var_138_object; bool var_139_bool; bool var_140_bool; float var_141_float; cvector var_142_cvector;
	if(var_122_object == null) {
		func_2716("fdie");
	} else {
		var_122_object->GetPosition(var_133_cvector);
		@GetPosition(var_134_cvector);
		@GetDirection(var_135_cvector);
		var_136_cvector = var_134_cvector - var_133_cvector;
		var_176_float = GetByIndex(var_136_cvector, 0);
		var_177_float = GetByIndex(var_135_cvector, 0);
		var_179_float = GetByIndex(var_136_cvector, 2);
		var_180_float = GetByIndex(var_135_cvector, 2);
		if(((var_176_float * var_177_float) + (var_179_float * var_180_float)) >= 0)
			var_137_string = "fdie";
		else
			var_137_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_122_object = var_138_object;
		var_187_bool = IsFuncExist(var_122_object, "GetScriptProperty", 2);
		if(var_187_bool != 0) {
			var_122_object->HasScriptProperty(var_139_bool, "Owner");
			if(var_139_bool != 0) {
				var_122_object->GetScriptProperty(var_138_object, "Owner");
				if(var_138_object == null)
					var_122_object = var_138_object;
			}
		}
		var_194_bool = IsFuncExist(var_138_object, "@GetEyesHeight", 1);
		if(var_194_bool != 0) {
			var_138_object->GetEyesHeight(var_141_float);
			var_142_cvector = [0.0, 0.0, 0.0];
			var_195_float = GetByIndex(var_142_cvector, 1);
			var_141_float = var_195_float;
			SetByIndex(var_142_cvector, 1) = var_195_float;
			@LookAsync(var_122_object, "head", var_142_cvector);
			var_140_bool = true;
		} else {
			var_140_bool = false;

		}
		string var_197_string;
		var_137_string = var_197_string;
		func_3123(var_197_string);
		@PlayAnimation("all", var_137_string);
		@WaitForAnimEnd();
		if(var_140_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_137_string);
		@RemoveEnvelope();
		var_138_object = null;
	}
	
}


// @pe
void func_3649(bool var_27_bool, object var_28_object)
{
	var_29_int = GlobalVars[3];
	if(var_29_int == 6)
		var_27_bool = false;
	var_32_int = GlobalVars[3];
	GlobalVars[3] = 6;
	@Trace("changing state to c_iStateHearEnemy");
	var_34_object = GlobalVars[7];
	var_28_object = var_34_object;
	GlobalVars[7] = var_34_object;
	var_27_bool = true;
}


void func_2125(cvector var_0_cvector)
{
	var_0_cvector = true;
	@KillTimer(0);
	@Stop();
}


void func_1103(bool var_440_bool)
{
	bool var_441_bool = false;
	bool var_442_bool;
	func_1069(var_441_bool, var_442_bool);
	if(var_442_bool != 0) {
		bool var_461_bool;
		func_1119(var_440_bool, var_441_bool, var_461_bool);
		if(var_461_bool != 0)
			var_441_bool = true;
	}
	if(var_441_bool != 0) {
		var_440_bool = true;
		return 0;
	}
	var_440_bool = false;
}


// @pe
void func_3667(bool var_21_bool, object var_22_object)
{
	var_23_int = GlobalVars[3];
	if(var_23_int == 7)
		var_21_bool = false;
	var_26_int = GlobalVars[3];
	GlobalVars[3] = 7;
	@Trace("changing state to c_iStateAttack");
	var_28_object = GlobalVars[8];
	var_22_object = var_28_object;
	GlobalVars[8] = var_28_object;
	var_21_bool = true;
}


void func_3164(object var_102_object)
{
	object var_104_object;
	@self(var_104_object);
	var_104_object = var_102_object;
}
EMIT "Stack[-1] = 0";


void func_2141(string var_974_string)
{
	var_974_string = "walk";
}


void func_1119(cvector var_0_cvector, bool var_5_bool, bool var_461_bool)
{
	object var_467_object; float var_469_float; cvector var_470_cvector; cvector var_471_cvector;
	@GetScene(var_467_object);
	bool var_468_bool = false;
	
	for(;;) {
		cvector var_472_cvector;
		func_2797(var_472_cvector, var_0_cvector);
		var_478_int = -var_472_cvector;
		@FindDirLength(var_469_float, var_478_int, var_5_bool);
		if(var_469_float < var_5_bool) {
		} else {
				@Face(var_0_cvector);
				@PlayAnimation("all", "bjump");
				var_0_cvector->GetPFPosition(var_470_cvector); //@t
				@GetPFPosition(var_471_cvector);
				@WaitForAnimEnd();
				func_1207(var_471_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_468_bool = true;
				bool var_483_bool;
				func_1069(var_471_cvector, var_483_bool);
				var_484_bool = !var_483_bool; //@nz
				if(var_484_bool == 0) goto Label_1160;
		}
		for(;;) {
			var_468_bool = var_461_bool;

		}

	Label_1160:
	}
}
EMIT "Stack[-5] = 0";


void func_2143(string var_975_string)
{
	var_975_string = "run";
}


void func_2145(bool var_795_bool)
{
	object var_802_object;
	@GetMainOutdoorScene(var_802_object);
	var_806_int = GlobalVars[1];
	bool var_801_bool;
	cvector var_803_cvector;
	cvector var_804_cvector;
	var_802_object->GetLocator(("pt_b9q03_bonfire" + (var_806_int + 1)), var_801_bool, var_803_cvector, var_804_cvector);
	if(!var_801_bool) //@nz
		var_795_bool = false;
	bool var_811_bool; cvector var_812_cvector; cvector var_813_cvector;
	var_803_cvector = var_812_cvector;
	var_804_cvector = var_813_cvector;
	func_2211(var_811_bool, var_812_cvector, var_813_cvector, false);
	var_811_bool = var_795_bool;
}
EMIT "Stack[-3] = 0";


void func_3170(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_61_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_61_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_61_float;
}


void func_3685(bool var_1030_bool)
{
	var_1034_int = GlobalVars[1];
	int var_1032_int;
	@GetVariable(("b9q03HandHeatLock" + (var_1034_int + 1)), var_1032_int);
	var_1030_bool = var_1032_int != 0;
}


void func_1640(cvector var_0_cvector, cvector var_1_cvector, bool var_715_bool, object var_716_object, float var_717_float, float var_718_float, bool var_719_bool, bool var_720_bool)
{
	bool var_729_bool; object var_731_object; cvector var_732_cvector; cvector var_733_cvector; float var_735_float; object var_736_object;
	var_0_cvector = false;
	var_1_cvector = var_716_object;
	bool var_730_bool;
	var_720_bool = var_730_bool;
	
	for(;;) {
		bool var_737_bool; object var_738_object;
		var_716_object = var_738_object;
		func_1780(var_737_bool, var_738_object);
		if(!var_737_bool) { //@nz
			var_715_bool = false;
			return 16;
		}
		var_716_object->GetPosition(var_732_cvector);
		@GetPosition(var_733_cvector);
		var_735_float = (var_732_cvector - var_733_cvector) | (var_732_cvector - var_733_cvector);
		bool var_742_bool = false;
		if(var_718_float > 0) {
			if(var_735_float > (var_718_float * var_718_float))
				var_742_bool = true;
		}
		if(var_742_bool != 0) {
			@Stop();
			var_715_bool = false;
			return 16;
		}
		if(var_735_float > (var_717_float * var_717_float)) {
			var_716_object->GetPFPosition(var_732_cvector);
			@FindPathTo(var_736_object, var_732_cvector);
			if(var_736_object != null) {
				var_736_object = var_731_object;
				var_736_object = null;
			}
			if(var_731_object != null) {
				if(var_730_bool == 0) goto Label_1693;
				var_730_bool = false;
				@RotatePath(var_731_object, var_729_bool);
				if(!var_729_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_755_string;
						func_1787(var_755_string);
						string var_756_string;
						func_1789(var_756_string);
						@FollowPath(var_731_object, var_719_bool, var_729_bool, var_755_string, var_756_string);
						if(!var_729_bool) { //@nz
							if(var_0_cvector == 0) goto Label_1712;
							var_731_object = null;
						}
					EMIT "GOTO 0x6b1";

					Label_1712:
						} else {
					var_731_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_729_bool);
					if(!var_729_bool) { //@nz
						if(var_0_cvector != 0) {
							var_731_object = null;
							goto Label_1740;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1740;
		}
			var_736_object = null;
			goto Label_1738;

		Label_1738:
			var_731_object = null;

		}
	Label_1740:
		for(;;) {
			var_715_bool = !var_0_cvector;
			return 16;

			}
	}
	
}


// @pe
void func_3180(float var_579_float, float var_580_float, float var_581_float)
{
	if(var_580_float < var_581_float)
		var_580_float = var_579_float;
	else
		var_581_float = var_579_float;
	
}


// @pe
void func_3696(bool var_786_bool)
{
	var_788_int = GlobalVars[1];
	if(var_786_bool != 0)
		var_793_int = 1;
	else
		var_794_int = 0; //@pi
	@SetVariable(("b9q03HandHeatLock" + (var_788_int + 1)), var_793_int);
	
}


// @pe
void func_3187(float var_589_float, float var_590_float, float var_591_float, float var_592_float)
{
	if(var_590_float < var_591_float) {
		var_591_float = var_589_float;
		return 0;
	}
	if(var_590_float > var_592_float) {
		var_592_float = var_589_float;
		return 0;
	}
	var_590_float = var_589_float;
}


void func_3710(bool var_1014_bool)
{
	var_1018_int = GlobalVars[1];
	int var_1016_int;
	@GetVariable(("b9q03PatrolLock" + (var_1018_int + 1)), var_1016_int);
	var_1014_bool = var_1016_int != 0;
}


void func_3198(bool var_1026_bool, float var_1027_float)
{
	float var_1029_float;
	@rand(var_1029_float);
	var_1026_bool = var_1029_float < var_1027_float;
}


void func_3203(bool var_55_bool, int var_56_int, int var_57_int)
{
	int var_59_int;
	@irand(var_59_int, var_57_int);
	var_55_bool = var_59_int < var_56_int;
}


void func_3208(float var_597_float)
{
	object var_599_object;
	@CreateFloatVector(var_599_object);
	var_599_object->add(var_597_float);
	@SendWorldWndMessage(15, var_599_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3721(bool var_1045_bool)
{
	var_1047_int = GlobalVars[1];
	if(var_1045_bool != 0)
		var_1052_int = 1;
	else
		var_1053_int = 0; //@pi
	@SetVariable(("b9q03PatrolLock" + (var_1047_int + 1)), var_1052_int);
	
}


void func_1164(cvector var_0_cvector, bool var_390_bool)
{
	bool var_392_bool;
	var_395_bool = IsFuncExist(var_0_cvector, "IsAttacking", 1);
	if(var_395_bool != 0) {
		var_0_cvector->IsAttacking(var_392_bool); //@t
		var_392_bool = var_390_bool;
	}
	var_390_bool = false;
}


void func_3218(object var_246_object)
{
	bool var_248_bool;
	@IsPlayerActor(var_246_object, var_248_bool);
	if(var_248_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_1175(object var_2_object, bool var_6_bool)
{
	int var_510_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_6_bool != 0) {
		if((var_6_bool + -1) > 0)
			return 4;
	}
	float var_509_float;
	@rand(var_509_float);
	float var_516_float;
	func_1223(var_516_float);
	if(var_509_float < var_516_float) {
		@irand(var_510_int, var_2_object);
		@Speak("attack" + (var_510_int + 1));
		int var_521_int;
		func_1221(var_521_int);
		var_6_bool = var_521_int;
	}
}


void func_3227(string var_894_string, int var_895_int)
{
	string var_897_string = "idle";
	if(var_895_int != 0)
		var_897_string += var_895_int;
	var_897_string = var_894_string;
}


// @pe
void func_2716(string var_144_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_145_string;
	var_144_string = var_145_string;
	func_3123(var_145_string);
	@PlayAnimation("all", var_144_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_144_string);
	@RemoveEnvelope();
}


void func_3234(int var_888_int)
{
	int var_891_int; bool var_892_bool;
	var_891_int = 0;
	
	for(;;) {
		string var_894_string; int var_895_int;
		var_891_int = var_895_int;
		func_3227(var_894_string, var_895_int);
		@HasAnimation(var_892_bool, "all", var_894_string);
		if(!var_892_bool) //@nz
			break;
		var_891_int += 1;
	}
	var_891_int = var_888_int;
}


// @pe
void func_2211(bool var_811_bool, cvector var_812_cvector, cvector var_813_cvector, bool var_814_bool)
{
	var_815_float = GetByIndex(var_812_cvector, 1);
	SetByIndex(var_812_cvector, 1) = (var_815_float + 30);
	bool var_817_bool; cvector var_818_cvector; cvector var_819_cvector; bool var_822_bool;
	var_812_cvector = var_818_cvector;
	var_813_cvector = var_819_cvector;
	func_2237(var_822_bool, var_817_bool, var_818_cvector, var_819_cvector, (float)100, (float)4000, var_822_bool, true);
	var_817_bool = var_811_bool;
}


void func_3251(int var_101_int)
{
	int var_103_int;
	@GetVariable("branch", var_103_int);
	var_103_int = var_101_int;
}


void func_1207(cvector var_0_cvector)
{
	func_3218(var_0_cvector);
}


// @pe
void func_3257(object var_24_object)
{
	int var_25_int;
	func_3251(var_25_int);
	if(var_25_int == 1)
		@WorkWithCorpse(var_24_object);
	else
		@Barter(var_24_object);
	
}


void func_2235(bool var_840_bool)
{
	var_840_bool = true;
}


void func_2748(void)
{
	var_111_bool = GlobalVars[0];
	if(var_111_bool != 0) {
		object var_112_object;
		func_3164(var_112_object);
		@RemoveActor(var_112_object);
		@Hold();
	}
	for(;;) {
		bool var_113_bool;
		func_3096(var_113_bool);
		var_116_bool = !var_113_bool; //@nz
		if(var_116_bool == 0) goto Label_2765;
		@Hold();
	}
	
Label_2765:
}


void func_1212(void)
{
	func_3123("attack_stay");
}


void func_3774(int var_603_int)
{
	var_603_int = 0;
}


void func_2237(cvector var_0_cvector, bool var_817_bool, cvector var_818_cvector, cvector var_819_cvector, float var_820_float, float var_821_float, bool var_822_bool, bool var_823_bool)
{
	bool var_832_bool; object var_834_object; cvector var_835_cvector; cvector var_836_cvector; float var_838_float; object var_839_object;
	var_0_cvector = false;
	bool var_833_bool;
	var_823_bool = var_833_bool;
	
	for(;;) {
		bool var_840_bool;
		func_2235(var_840_bool);
		if(!var_840_bool) { //@nz
			var_817_bool = false;
			return 16;
		}
		var_818_cvector = var_835_cvector;
		@GetPosition(var_836_cvector);
		var_838_float = (var_835_cvector - var_836_cvector) | (var_835_cvector - var_836_cvector);
		bool var_842_bool = false;
		if(var_821_float > 0) {
			if(var_838_float > (var_821_float * var_821_float))
				var_842_bool = true;
		}
		if(var_842_bool != 0) {
			@Stop();
			var_817_bool = false;
			return 16;
		}
		if(var_838_float > (var_820_float * var_820_float)) {
			@FindPathTo(var_839_object, var_835_cvector);
			if(var_839_object != null) {
				var_839_object = var_834_object;
				var_839_object = null;
			}
			if(var_834_object != null) {
				if(var_833_bool == 0) goto Label_2285;
				var_833_bool = false;
				@RotatePath(var_834_object, var_832_bool);
				if(!var_832_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_858_string;
						func_2377(var_858_string);
						string var_859_string;
						func_2379(var_859_string);
						@FollowPath(var_834_object, var_822_bool, var_832_bool, var_858_string, var_859_string);
						if(!var_832_bool) { //@nz
							if(var_0_cvector == 0) goto Label_2304;
							var_834_object = null;
						}
					EMIT "GOTO 0x901";

					Label_2304:
						} else {
					var_834_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_832_bool);
					if(!var_832_bool) { //@nz
						if(var_0_cvector != 0) {
							var_834_object = null;
							goto Label_2332;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_2332;
		}
			var_839_object = null;
			goto Label_2330;

		Label_2330:
			var_834_object = null;

		}
	Label_2332:
		for(;;) {
			if(!var_0_cvector) { //@nz
				var_854_float = GetByIndex(var_819_cvector, 0);
				var_855_float = GetByIndex(var_819_cvector, 2);
				@RotateAsync(var_854_float, var_855_float);
			}
			var_817_bool = !var_0_cvector;
			return 16;

			}
	}
	
}


// @pe
void func_1217(void)
{
}


void func_1219(bool var_630_bool)
{
	var_630_bool = true;
}


void func_1221(int var_521_int)
{
	var_521_int = 1;
}


void func_3270(string var_107_string)
{
	object var_111_object;
	@CreateInvItem(var_111_object);
	var_111_object->SetItemName(var_107_string);
	var_111_object->SetProperty("Organ", 1);
	int var_112_int;
	var_111_object->GetItemID(var_112_int);
	bool var_113_bool;
	@AddItem(var_113_bool, var_111_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_1223(float var_516_float)
{
	var_516_float = 0.5;
}


void func_1225(int var_3_int, bool var_253_bool, object var_254_object, float var_255_float, float var_256_float, bool var_257_bool, bool var_258_bool)
{
	var_3_int = var_254_object;
	@SetTimer(2, 2);
	bool var_267_bool; object var_268_object; float var_269_float; float var_270_float; bool var_271_bool; bool var_272_bool;
	var_254_object = var_268_object;
	var_255_float = var_269_float;
	var_256_float = var_270_float;
	var_257_bool = var_271_bool;
	var_258_bool = var_272_bool;
	bool var_264_bool;
	func_1276(var_264_bool, var_267_bool, var_268_object, var_269_float, var_270_float, var_271_bool, var_272_bool);
	var_267_bool = var_264_bool;
	@KillTimer(2);
	var_264_bool = var_253_bool;
}


// @pe
void func_1742(cvector var_0_cvector, cvector var_1_cvector, int var_24_int)
{
	if(var_24_int != 0)
		return 0;
	bool var_27_bool;
	func_1780(var_27_bool, var_1_cvector);
	if(!var_27_bool) //@nz
		var_0_cvector = true;
	@KillTimer(0);
	@Stop();
}


void func_3287(void)
{
	int var_101_int;
	func_3251(var_101_int);
	if(var_101_int != 1) {
	}
	func_3270("liver");
	func_3270("kidney");
	func_3270("heart");
	func_3270("blood");
}


// @pe
void func_2783(string var_569_string, int var_570_int)
{
	if(var_570_int == 2) {
		var_569_string = "fire";
		return 0;
	EMIT "GOTO 0xaeb";
	}
	if(var_570_int == 1) {
		var_569_string = "bullet";
		return 0;
	}
	var_569_string = "phys";
}


void func_1764(cvector var_0_cvector)
{
	var_0_cvector = true;
	@KillTimer(0);
	@Stop();
}


void func_2797(cvector var_472_cvector, object var_473_object)
{
	cvector var_476_cvector;
	@GetPosition(var_476_cvector);
	cvector var_477_cvector;
	var_473_object->GetPosition(var_477_cvector);
	var_472_cvector = var_477_cvector - var_476_cvector;
}


void func_2804(bool var_288_bool, object var_289_object)
{
	bool var_291_bool;
	@IsPlayerActor(var_289_object, var_291_bool);
	var_291_bool = var_288_bool;
}


// @pe
void func_1780(bool var_737_bool, object var_738_object)
{
	object var_740_object;
	var_738_object = var_740_object;
	bool var_739_bool;
	func_2935(var_739_bool, var_740_object);
	var_739_bool = var_737_bool;
}


void func_3319(bool var_22_bool, object var_23_object, string var_24_string)
{
	cvector var_33_cvector; cvector var_34_cvector;
	object var_41_object;
	func_3164(var_41_object);
	if(var_23_object == var_41_object) {
		var_22_bool = false;
		return 16;
	}
	var_46_int = GlobalVars[1];
	if(var_24_string == ("b9q03_corpse" + (var_46_int + 1))) {
		bool var_51_bool; object var_52_object;
		func_3631(var_51_bool, var_52_object);
		if(var_51_bool != 0) {
			var_22_bool = true;
			return 16;
		}
	} else {
			var_60_int = GlobalVars[1];
			if(!(var_24_string == ("b9q03_helpme" + (var_60_int + 1)))) goto Label_3366;
			var_52_object->GetPosition(var_33_cvector);
			@GetPosition(var_34_cvector);
			if(((var_33_cvector - var_34_cvector) | (var_33_cvector - var_34_cvector)) < 4000000.0) {
				bool var_67_bool; object var_68_object;
				var_23_object = var_68_object;
				func_3667(var_67_bool, var_68_object);
				if(var_67_bool != 0) {
					var_22_bool = true;
					return 16;
				}
			}
	}
Label_3395:
	for(;;) {
		var_22_bool = false;
		return 16;

	}
	
Label_3366:
	if(!(var_24_string == "player_shot")) goto Label_3395;
	cvector var_37_cvector;
	var_23_object->GetPosition(var_37_cvector);
	cvector var_38_cvector;
	@GetPosition(var_38_cvector);
	float var_40_float = (var_37_cvector - var_38_cvector) | (var_37_cvector - var_38_cvector);
	if(var_40_float < 360000.0) {
		bool var_79_bool; object var_80_object;
		var_23_object = var_80_object;
		func_3667(var_79_bool, var_80_object);
		if(var_79_bool != 0) {
			var_22_bool = true;
			return 16;
		}
	}
	if(!(var_40_float < 12250000.0)) goto Label_3395;
	bool var_83_bool; object var_84_object;
	var_23_object = var_84_object;
	func_3631(var_83_bool, var_84_object);
	if(var_83_bool == 0) goto Label_3395;
	var_22_bool = true;
}


void func_2809(bool var_232_bool, object var_233_object, string var_234_string)
{
	var_239_bool = IsFuncExist(var_233_object, "HasProperty", 2);
	if(!var_239_bool) { //@nz
		var_232_bool = false;
		return 2;
	}
	bool var_236_bool;
	var_233_object->HasProperty(var_234_string, var_236_bool);
	var_236_bool = var_232_bool;
}


void func_1787(string var_755_string)
{
	var_755_string = "walk";
}


void func_1276(object var_2_object, bool var_267_bool, object var_268_object, float var_269_float, float var_270_float, bool var_271_bool, bool var_272_bool)
{
	object var_277_object;
	func_3218(var_277_object);
	@SetTimer(1, 5);
	bool var_275_bool;
	@CanSee(var_275_bool, var_277_object);
	if(var_275_bool != 0) {
		var_2_object = true;
		object var_281_object;
		var_268_object = var_281_object;
		func_3101(var_281_object);
	} else {
		var_2_object = false;
	}
	bool var_288_bool; object var_289_object;
	func_2804(var_288_bool, var_289_object);
	if(var_288_bool != 0) {
		object var_292_object;
		func_3164(var_292_object);
		@SendPlayerEnemy(var_289_object, var_292_object);
	}
	bool var_293_bool; object var_294_object; float var_295_float; float var_296_float; bool var_297_bool; bool var_298_bool;
	var_268_object = var_294_object;
	var_269_float = var_295_float;
	var_270_float = var_296_float;
	var_271_bool = var_297_bool;
	var_272_bool = var_298_bool;
	bool var_276_bool;
	func_1381(var_275_bool, var_276_bool, var_293_bool, var_294_object, var_295_float, var_296_float, var_297_bool, var_298_bool);
	var_293_bool = var_276_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_276_bool = var_267_bool;
	
}


void func_1789(string var_756_string)
{
	var_756_string = "run";
}


void func_765(int var_4_int)
{
	@Stop();
	@StopAnimation();
	@StopGroup0();
	var_4_int = true;
}


// @pe
void func_1791(void)
{
	func_1846();
}


void func_773(cvector var_1_cvector, object var_2_object, bool var_5_bool)
{
	bool var_179_bool; bool var_180_bool; cvector var_181_cvector;
	var_1_cvector = 0;
	
	for(;;) {
		@HasAnimation(var_179_bool, "all", ("attack_begin" + (var_1_cvector + 1)));
		if(!var_179_bool) { //@nz
		} else {
			var_1_cvector += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_180_bool, ("attack" + (var_2_object + 1)));
			if(!var_180_bool) //@nz
				break;
			var_2_object += 1;
		}
		@GetAnimationOffset(var_181_cvector, "all", "bjump");
		var_195_float = GetByIndex(var_181_cvector, 2);
		var_5_bool = -var_195_float;

	}
}


void func_2821(float var_541_float, object var_542_object, float var_543_float, int var_544_int)
{
	int var_554_int; int var_556_int;
	object var_561_object;
	var_542_object = var_561_object;
	bool var_560_bool;
	func_2809(var_560_bool, var_561_object, "health");
	if(!var_560_bool) //@nz
		var_541_float = 0.0;
	bool var_564_bool; object var_565_object;
	func_2809(var_564_bool, var_565_object, "armor");
	if(!var_564_bool) //@nz
		var_554_int = 0;
	else
		var_565_object->GetProperty("armor", var_554_int);
	string var_569_string; int var_570_int;
	var_544_int = var_570_int;
	func_2783(var_569_string, var_570_int);
	string var_555_string = "armor_" + var_569_string;
	bool var_575_bool; object var_576_object; string var_577_string;
	var_542_object = var_576_object;
	func_2809(var_575_bool, var_576_object, var_577_string);
	if(!var_575_bool) //@nz
		var_556_int = 0;
	else
		var_542_object->GetProperty(var_577_string, var_556_int);

	float var_579_float;
	func_3180(var_579_float, ((var_554_int + var_556_int) / 100.0), (float)1);
	float var_557_float;
	var_579_float = var_557_float;
	float var_558_float;
	var_542_object->GetProperty("health", var_558_float);
	float var_559_float = var_543_float * (1 - var_557_float);
	float var_589_float;
	func_3187(var_589_float, (var_558_float - var_559_float), (float)0, (float)1);
	var_542_object->SetProperty("health", var_589_float);
	bool var_595_bool; object var_596_object;
	var_542_object = var_596_object;
	func_2804(var_595_bool, var_596_object);
	if(var_595_bool != 0) {
		float var_597_float = -var_559_float;
		func_3208(var_597_float);
	}
	var_559_float = var_541_float;
	
}


void func_808(cvector var_0_cvector, float var_527_float, int var_528_int)
{
	object var_532_object; float var_533_float; float var_534_float;
	@GetVictim((var_527_float * 0.9), var_532_object);
	@ReportAttack(var_0_cvector);
	if(var_532_object == var_0_cvector) {
		float var_538_float; object var_539_object; int var_540_int;
		var_532_object = var_539_object;
		var_528_int = var_540_int;
		func_457(var_540_int);
		var_538_float = var_533_float;
		float var_541_float; object var_542_object; float var_543_float; int var_544_int;
		var_532_object = var_542_object;
		int var_545_int; object var_546_object; int var_547_int;
		var_532_object = var_546_object;
		var_528_int = var_547_int;
		func_460(var_547_int);
		var_545_int = var_544_int;
		func_2821(var_541_float, var_542_object, var_543_float, var_544_int);
		var_541_float = var_534_float;
		int var_602_int;
		func_463(var_602_int);
		@ReportHit(var_0_cvector, var_602_int, var_534_float, var_543_float);
		object var_604_object; float var_605_float;
		var_532_object = var_604_object;
		var_534_float = var_605_float;
		func_1217();
	}
}
EMIT "Stack[-3] = 0";


// @pe
void func_1325(cvector var_1_cvector, int var_31_int)
{
	if(var_31_int == 1) {
		func_3218(var_1_cvector);
	} else {
		int var_39_int;
		func_1483(var_22_object, var_39_int, var_39_int);
	}
	
}


void func_1846(void)
{
	int var_881_int; int var_882_int; bool var_883_bool; float var_884_float; bool var_885_bool;
	@WaitForAnimEnd();
	bool var_886_bool;
	func_3096(var_886_bool);
	if(!var_886_bool) //@nz
		return 14;
	int var_888_int;
	func_3234(var_888_int);
	int var_879_int;
	var_888_int = var_879_int;
	int var_880_int = 0;
	
	for(;;) {
		bool var_901_bool = false;
		if(var_880_int < 5) {
			bool var_904_bool;
			func_3096(var_904_bool);
			if(var_904_bool != 0)
				var_901_bool = true;
		}
		if(var_901_bool != 0) {
			@irand(var_881_int, 3);
			if(var_881_int == 0) {
				if(var_879_int == 0) goto Label_1893;
				@irand(var_882_int, var_879_int);
				string var_910_string; int var_911_int;
				var_882_int = var_911_int;
				func_3227(var_910_string, var_911_int);
				@PlayAnimation("all", var_910_string);
				@WaitForAnimEnd(var_883_bool);
				if(!var_883_bool) { //@nz
				} else {
			} else {
			if(var_881_int == 1) {
				@rand(var_884_float, 4);
				@Sleep((var_884_float + 1), var_885_bool);
				if(!var_885_bool) { //@nz
					goto Label_1922;
				}
			} else if(var_880_int != 0) {
				goto Label_1922;
			}
			}
					bool var_913_bool;
					func_1925(var_913_bool);
					var_914_bool = !var_913_bool; //@nz
					if(var_914_bool == 0) goto Label_1917;
			}
		}
	Label_1922:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_1917:
		@ResetAAS();
		var_880_int += 1;
	}
	
}


void func_2361(cvector var_0_cvector)
{
	var_0_cvector = true;
	@KillTimer(0);
	@Stop();
}


void func_1339(object var_2_object)
{
	@KillTimer(1);
	if(var_2_object != 0) {
		var_2_object = false;
		@UnlookAsync("head");
	}
	func_1505(var_20_bool);
}


// @pe
void func_3397(bool var_21_bool, object var_22_object)
{
	bool var_23_bool = false;
	var_26_bool = IsFuncExist(var_22_object, "IsDead", 1);
	if(var_26_bool != 0) {
		bool var_27_bool; object var_28_object;
		var_22_object = var_28_object;
		func_2894(var_27_bool, var_28_object);
		if(var_27_bool != 0)
			var_23_bool = true;
	}
	if(var_23_bool != 0) {
		bool var_31_bool; object var_32_object;
		func_2809(var_31_bool, var_32_object, "b9q03_corpse");
		if(var_31_bool != 0) {
			var_21_bool = false;
			return 0;
		}
		var_32_object->SetProperty("b9q03_corpse", 1);
		bool var_42_bool; object var_43_object;
		var_22_object = var_43_object;
		func_3613(var_42_bool, var_43_object);
		var_42_bool = var_21_bool;
		return 0;
	EMIT "GOTO 0xd7e";
	}
	bool var_50_bool; object var_51_object;
	var_22_object = var_51_object;
	func_2804(var_50_bool, var_51_object);
	if(var_50_bool != 0) {
		bool var_54_bool; object var_55_object;
		var_22_object = var_55_object;
		func_3667(var_54_bool, var_55_object);
		var_54_bool = var_21_bool;
		return 0;
	EMIT "GOTO 0xd7e";
	}
	bool var_62_bool; object var_63_object;
	var_22_object = var_63_object;
	func_2809(var_62_bool, var_63_object, "b9q03");
	if(var_62_bool != 0) {
		bool var_65_bool; object var_66_object;
		var_22_object = var_66_object;
		func_3667(var_65_bool, var_66_object);
		var_65_bool = var_21_bool;
		return 0;
	}
	var_21_bool = false;
}


void func_2377(string var_858_string)
{
	var_858_string = "walk";
}


void func_2379(string var_859_string)
{
	var_859_string = "run";
}


void func_2381(int var_671_int)
{
	int var_674_int = 0;
	
	for(;;) {
		if(var_674_int < var_671_int) {
			func_2451("hunt");
			if(var_0_cvector != 0) {
			} else {
				var_674_int += 1;
			}
		}

	}
}


void func_2894(bool var_225_bool, object var_226_object)
{
	bool var_228_bool;
	var_226_object->IsDead(var_228_bool);
	var_228_bool = var_225_bool;
}


void func_847(cvector var_0_cvector, cvector var_1_cvector, bool var_492_bool, float var_493_float)
{
	string var_501_string;
	func_1207(var_501_string);
	int var_498_int;
	@irand(var_498_int, var_1_cvector);
	@Face(var_0_cvector);
	@SetAttackState(true);
	@PlayAnimation("all", ("attack_begin" + (var_498_int + 1)));
	@WaitForAnimEnd();
	int var_500_int;
	func_1175(var_500_int, var_501_string);
	bool var_522_bool = true;
	bool var_523_bool;
	func_2935(var_523_bool, var_0_cvector);
	var_525_bool = !var_523_bool; //@nz
	if(var_525_bool != 1) {
		if(var_4_int != 1)
			var_522_bool = false;
	}
	if(var_522_bool != 0) {
		@StopAsync();
		var_492_bool = false;
		return 8;
	}
	float var_527_float; int var_528_int;
	var_493_float = var_527_float;
	var_498_int = var_528_int;
	func_808(var_501_string, var_527_float, var_528_int);
	bool var_499_bool;
	@HasAnimation(var_499_bool, "all", ("attack_middle" + var_498_int));
	if(var_499_bool != 0) {
		@PlayAnimation("all", ("attack_middle" + var_498_int));
		@WaitForAnimEnd();
		func_1207(var_501_string);
		bool var_613_bool = true;
		bool var_614_bool;
		func_2935(var_614_bool, var_0_cvector);
		var_616_bool = !var_614_bool; //@nz
		if(var_616_bool != 1) {
			if(var_4_int != 1)
				var_613_bool = false;
		}
		if(var_613_bool != 0) {
			@StopAsync();
			var_492_bool = false;
			return 8;
		}
		float var_618_float; int var_619_int;
		var_493_float = var_618_float;
		func_808(var_501_string, var_618_float, var_619_int);
		var_500_int = 1;

		for(;;) {
			var_501_string = (("attack_middle" + var_619_int) + "_") + var_500_int;
			@HasAnimation(var_499_bool, "all", var_501_string);
			if(!var_499_bool) { //@nz
			} else {
				@PlayAnimation("all", var_501_string);
				@WaitForAnimEnd();
				func_1207(var_501_string);
				bool var_641_bool = true;
				bool var_642_bool;
				func_2935(var_642_bool, var_0_cvector);
				var_644_bool = !var_642_bool; //@nz
				if(var_644_bool != 1) {
					if(var_4_int != 1)
						var_641_bool = false;
				}
				if(var_641_bool != 0) {
					@StopAsync();
					var_492_bool = false;
					return 8;
				}
				float var_646_float; int var_647_int;
				var_493_float = var_646_float;
				var_498_int = var_647_int;
				func_808(var_501_string, var_646_float, var_647_int);
				var_500_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_498_int));
		bool var_630_bool;
		func_1219(var_630_bool);
		if(var_630_bool != 0) {
			bool var_631_bool;
			func_993(var_631_bool, 0.75);
			@StopAsync();
		}
		var_492_bool = true;
		return 8;

	}
}


void func_2899(bool var_214_bool, object var_215_object)
{
	if(var_215_object == null) {
		var_214_bool = false;
		return 4;
	}
	bool var_221_bool = false;
	var_224_bool = IsFuncExist(var_215_object, "IsDead", 1);
	if(var_224_bool != 0) {
		bool var_225_bool; object var_226_object;
		var_215_object = var_226_object;
		func_2894(var_225_bool, var_226_object);
		if(var_225_bool != 0)
			var_221_bool = true;
	}
	if(var_221_bool != 0) {
		var_214_bool = false;
		return 4;
	}
	object var_218_object;
	@GetScene(var_218_object);
	if(var_218_object == null) {
		var_214_bool = false;
		return 4;
	}
	object var_219_object;
	var_215_object->GetScene(var_219_object);
	if(var_218_object != var_219_object) {
		var_214_bool = false;
		return 4;
	}
	var_214_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1381(cvector var_0_cvector, cvector var_1_cvector, bool var_293_bool, object var_294_object, float var_295_float, float var_296_float, bool var_297_bool, bool var_298_bool)
{
	bool var_307_bool; object var_309_object; cvector var_310_cvector; cvector var_311_cvector; float var_313_float; object var_314_object;
	var_0_cvector = false;
	var_1_cvector = var_294_object;
	bool var_308_bool;
	var_298_bool = var_308_bool;
	
	for(;;) {
		bool var_315_bool; object var_316_object;
		var_294_object = var_316_object;
		func_1521(var_315_bool, var_316_object);
		if(!var_315_bool) { //@nz
			var_293_bool = false;
			return 16;
		}
		var_294_object->GetPosition(var_310_cvector);
		@GetPosition(var_311_cvector);
		var_313_float = (var_310_cvector - var_311_cvector) | (var_310_cvector - var_311_cvector);
		bool var_320_bool = false;
		if(var_296_float > 0) {
			if(var_313_float > (var_296_float * var_296_float))
				var_320_bool = true;
		}
		if(var_320_bool != 0) {
			@Stop();
			var_293_bool = false;
			return 16;
		}
		if(var_313_float > (var_295_float * var_295_float)) {
			var_294_object->GetPFPosition(var_310_cvector);
			@FindPathTo(var_314_object, var_310_cvector);
			if(var_314_object != null) {
				var_314_object = var_309_object;
				var_314_object = null;
			}
			if(var_309_object != null) {
				if(var_308_bool == 0) goto Label_1434;
				var_308_bool = false;
				@RotatePath(var_309_object, var_307_bool);
				if(!var_307_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_333_string;
						func_1528(var_333_string);
						string var_334_string;
						func_1530(var_334_string);
						@FollowPath(var_309_object, var_297_bool, var_307_bool, var_333_string, var_334_string);
						if(!var_307_bool) { //@nz
							if(var_0_cvector == 0) goto Label_1453;
							var_309_object = null;
						}
					EMIT "GOTO 0x5ae";

					Label_1453:
						} else {
					var_309_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_307_bool);
					if(!var_307_bool) { //@nz
						if(var_0_cvector != 0) {
							var_309_object = null;
							goto Label_1481;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1481;
		}
			var_314_object = null;
			goto Label_1479;

		Label_1479:
			var_309_object = null;

		}
	Label_1481:
		for(;;) {
			var_293_bool = !var_0_cvector;
			return 16;

			}
	}
	
}


void func_2935(bool var_210_bool, object var_211_object)
{
	object var_215_object;
	var_211_object = var_215_object;
	bool var_214_bool;
	func_2899(var_214_bool, var_215_object);
	if(!var_214_bool) { //@nz
		var_210_bool = false;
		return 2;
	}
	bool var_232_bool; object var_233_object;
	func_2809(var_232_bool, var_233_object, "noaccess");
	if(!var_232_bool) { //@nz
		var_210_bool = true;
		return 2;
	}
	int var_213_int;
	var_233_object->GetProperty("noaccess", var_213_int);
	var_210_bool = var_213_int == 0;
}


// @pe
void func_3456(bool var_21_bool, object var_22_object)
{
	object var_24_object;
	var_22_object = var_24_object;
	bool var_23_bool;
	func_2804(var_23_bool, var_24_object);
	if(var_23_bool != 0) {
		bool var_27_bool; object var_28_object;
		var_22_object = var_28_object;
		func_3649(var_27_bool, var_28_object);
		var_27_bool = var_21_bool;
		return 0;
	EMIT "GOTO 0xd99";
	}
	bool var_35_bool; object var_36_object;
	var_22_object = var_36_object;
	func_2809(var_35_bool, var_36_object, "b9q03");
	if(var_35_bool != 0) {
		bool var_44_bool; object var_45_object;
		var_22_object = var_45_object;
		func_3649(var_44_bool, var_45_object);
		var_44_bool = var_21_bool;
		return 0;
	}
	var_21_bool = false;
}


void func_1925(bool var_913_bool)
{
	var_913_bool = true;
}


void func_1927(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_1932(bool var_926_bool, cvector var_927_cvector, cvector var_928_cvector, bool var_929_bool)
{
	var_931_float = GetByIndex(var_927_cvector, 1);
	SetByIndex(var_927_cvector, 1) = (var_931_float + 30);
	bool var_933_bool; cvector var_934_cvector; cvector var_935_cvector; bool var_938_bool;
	var_927_cvector = var_934_cvector;
	var_928_cvector = var_935_cvector;
	func_2001(var_938_bool, var_933_bool, var_934_cvector, var_935_cvector, (float)100, (float)4000, var_938_bool, true);
	var_933_bool = var_926_bool;
}


void func_2959(object var_37_object)
{
	string var_51_string;
	if(var_37_object == null)
		return 14;
	bool var_45_bool;
	@IsDead(var_45_bool);
	if(var_45_bool != 0)
		return 14;
	int var_46_int;
	@GetSecondaryAnimationType(var_46_int);
	if(var_46_int < 0)
		return 14;
	cvector var_47_cvector;
	var_37_object->GetPosition(var_47_cvector);
	cvector var_48_cvector;
	@GetPosition(var_48_cvector);
	cvector var_49_cvector;
	@GetDirection(var_49_cvector);
	cvector var_50_cvector = var_48_cvector - var_47_cvector;
	var_56_float = GetByIndex(var_50_cvector, 0);
	var_57_float = GetByIndex(var_49_cvector, 0);
	var_59_float = GetByIndex(var_50_cvector, 2);
	var_60_float = GetByIndex(var_49_cvector, 2);
	if(((var_56_float * var_57_float) + (var_59_float * var_60_float)) >= 0)
		var_51_string = "fhit";
	else
		var_51_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_51_string + "1"), (var_51_string + "2"), -10);
	
}


void func_2451(string var_676_string)
{
	@WaitForAnimEnd();
	bool var_681_bool;
	func_3096(var_681_bool);
	if(!var_681_bool) //@nz
		return 4;
	bool var_679_bool;
	@HasAnimation(var_679_bool, "all", var_676_string);
	if(!var_679_bool) //@nz
		return 4;
	@PlayAnimation("all", var_676_string);
	bool var_680_bool;
	@WaitForAnimEnd(var_680_bool);
}


void func_3483(bool var_42_bool)
{
	object var_52_object; cvector var_54_cvector; cvector var_55_cvector; bool var_56_bool; float var_60_float;
	@GetMainOutdoorScene(var_52_object);
	cvector var_53_cvector;
	@GetPosition(var_53_cvector);
	float var_57_float = 4000000;
	int var_58_int = 0;
	var_61_int = GlobalVars[1];
	GlobalVars[1] = 1;
	
	for(;;) {
		if(true != 0) {
			var_64_int = GlobalVars[1];
			var_52_object->GetLocator(("pt_b9q03_bonfire" + var_64_int), var_56_bool, var_54_cvector, var_55_cvector);
			if(!var_56_bool) { //@nz
			} else {
				if(((var_53_cvector - var_54_cvector) | (var_53_cvector - var_54_cvector)) < var_57_float) {
					var_60_float = var_57_float;
					var_97_int = GlobalVars[1];
					var_97_int = var_58_int;
				}
				var_98_int = GlobalVars[1];
				GlobalVars[1] = (var_98_int + 1);
			}
		}
		var_67_int = GlobalVars[1];
		GlobalVars[1] = (var_58_int - 1);
		var_69_int = GlobalVars[1];
		if(var_69_int == -1) {
			var_42_bool = false;
			return 18;
		}
		var_73_int = GlobalVars[1];
		@Trace("Bonfire index: " + (var_73_int + 1));
		var_77_int = GlobalVars[2];
		GlobalVars[2] = 0;

		for(;;) {
			if(true != 0) {
				var_80_int = GlobalVars[1];
				var_86_int = GlobalVars[2];
				var_52_object->GetLocator(((("pt_b9q03_bonfire" + (var_80_int + 1)) + "_patrol") + (var_86_int + 1)), var_56_bool, var_54_cvector, var_55_cvector);
				if(!var_56_bool) { //@nz
				} else {
					var_94_int = GlobalVars[2];
					GlobalVars[2] = (var_94_int + 1);
				}
			}
			var_92_int = GlobalVars[2];
			@Trace("Bonfire pantrol point count: " + var_92_int);
			var_42_bool = true;
			return 18;

		}

	}
}
EMIT "Stack[-9] = 0";


void func_2472(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_2477(object var_21_object)
{
	var_23_int = GlobalVars[3];
	if(1 == var_23_int)
		func_3696(false);
	var_35_int = GlobalVars[3];
	if(3 == var_35_int)
		func_3721(false);
	object var_46_object;
	object var_50_object;
	func_3164(var_50_object);
	var_50_object = var_46_object;
	func_3112(var_46_object, "coffee", 1, 3);
	object var_61_object;
	object var_65_object;
	func_3164(var_65_object);
	var_65_object = var_61_object;
	func_3112(var_61_object, "tvirin", 1, 6);
	object var_66_object;
	object var_70_object;
	func_3164(var_70_object);
	var_70_object = var_66_object;
	func_3112(var_66_object, "silver_ring", 1, 9);
	object var_71_object;
	object var_75_object;
	func_3164(var_75_object);
	var_75_object = var_71_object;
	func_3112(var_71_object, "gold_ring", 1, 8);
	object var_76_object;
	object var_80_object;
	func_3164(var_80_object);
	var_80_object = var_76_object;
	func_3112(var_76_object, "bracelet", 1, 6);
	object var_81_object;
	object var_85_object;
	func_3164(var_85_object);
	var_85_object = var_81_object;
	func_3112(var_81_object, "watch", 1, 9);
	object var_86_object;
	object var_90_object;
	func_3164(var_90_object);
	var_90_object = var_86_object;
	func_3112(var_86_object, "beads", 1, 9);
	object var_91_object;
	object var_95_object;
	func_3164(var_95_object);
	var_95_object = var_91_object;
	func_3112(var_91_object, "ear_ring", 1, 9);
	object var_96_object;
	object var_100_object;
	func_3164(var_100_object);
	var_100_object = var_96_object;
	func_3112(var_96_object, "feromicin", 1, 10);
	func_3287();
	object var_121_object;
	var_21_object = var_121_object;
	func_2600(var_121_object);
}


// @pe
void func_441(float var_7_float, object var_139_object)
{
	var_7_float = var_139_object;
	@SetTimer(1, 1);
	object var_151_object;
	func_515(var_144_bool, var_145_bool, var_146_float, var_147_int, var_148_object, var_151_object, var_151_object, false, 150.0);
	@KillTimer(1);
}


void func_3003(object var_24_object, int var_25_int, float var_26_float)
{
	cvector var_36_cvector; object var_37_object; int var_38_int; bool var_39_bool; cvector var_40_cvector; cvector var_41_cvector;
	bool var_45_bool = false;
	bool var_46_bool = false;
	if(var_24_object != 0) {
		if(var_25_int != 4)
			var_46_bool = true;
	}
	if(var_46_bool != 0) {
		if(var_25_int != 5)
			var_45_bool = true;
	}
	if(var_45_bool != 0) {
		cvector var_52_cvector; cvector var_53_cvector;
		cvector var_54_cvector; object var_55_object;
		var_24_object = var_55_object;
		func_2797(var_54_cvector, var_55_object);
		var_54_cvector = var_53_cvector;
		func_3170(var_52_cvector, var_53_cvector);
		var_52_cvector = var_36_cvector;
		@CreateVectorVector(var_37_object);
		var_38_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_38_int), var_39_bool, var_40_cvector, var_41_cvector);
			if(!var_39_bool) { //@nz
				break;
			Label_3065:
				var_37_object = null;
	}
			object var_114_object;
			var_24_object = var_114_object;
			func_2959(var_114_object);
		}
		if((var_41_cvector | var_36_cvector) >= 0.70710677)
			var_37_object->add(var_40_cvector);
		var_38_int += 1;
	}
	int var_42_int;
	var_37_object->size(var_42_int);
	if(var_42_int == 0) goto Label_3065;
	int var_43_int;
	@irand(var_43_int, var_42_int);
	cvector var_44_cvector;
	var_37_object->get(var_44_cvector, var_43_int);
	object var_69_object; int var_70_int; float var_71_float; cvector var_72_cvector; cvector var_73_cvector;
	var_24_object = var_69_object;
	var_25_int = var_70_int;
	var_26_float = var_71_float;
	var_44_cvector = var_72_cvector;
	var_73_cvector = -var_36_cvector;
	func_3071(var_71_float, var_72_cvector, var_73_cvector);
}


// @pe
void func_457(float var_538_float)
{
	var_538_float = 0.1;
}


// @pe
void func_1483(cvector var_0_cvector, cvector var_1_cvector, int var_39_int)
{
	if(var_39_int != 0)
		return 0;
	bool var_42_bool;
	func_1521(var_42_bool, var_1_cvector);
	if(!var_42_bool) //@nz
		var_0_cvector = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_460(int var_545_int)
{
	var_545_int = 0;
}


void func_463(int var_602_int)
{
	int var_603_int;
	func_3774(var_603_int);
	var_603_int = var_602_int;
}


void func_1999(bool var_956_bool)
{
	var_956_bool = true;
}


void func_2001(cvector var_0_cvector, bool var_933_bool, cvector var_934_cvector, cvector var_935_cvector, float var_936_float, float var_937_float, bool var_938_bool, bool var_939_bool)
{
	bool var_948_bool; object var_950_object; cvector var_951_cvector; cvector var_952_cvector; float var_954_float; object var_955_object;
	var_0_cvector = false;
	bool var_949_bool;
	var_939_bool = var_949_bool;
	
	for(;;) {
		bool var_956_bool;
		func_1999(var_956_bool);
		if(!var_956_bool) { //@nz
			var_933_bool = false;
			return 16;
		}
		var_934_cvector = var_951_cvector;
		@GetPosition(var_952_cvector);
		var_954_float = (var_951_cvector - var_952_cvector) | (var_951_cvector - var_952_cvector);
		bool var_958_bool = false;
		if(var_937_float > 0) {
			if(var_954_float > (var_937_float * var_937_float))
				var_958_bool = true;
		}
		if(var_958_bool != 0) {
			@Stop();
			var_933_bool = false;
			return 16;
		}
		if(var_954_float > (var_936_float * var_936_float)) {
			@FindPathTo(var_955_object, var_951_cvector);
			if(var_955_object != null) {
				var_955_object = var_950_object;
				var_955_object = null;
			}
			if(var_950_object != null) {
				if(var_949_bool == 0) goto Label_2049;
				var_949_bool = false;
				@RotatePath(var_950_object, var_948_bool);
				if(!var_948_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_974_string;
						func_2141(var_974_string);
						string var_975_string;
						func_2143(var_975_string);
						@FollowPath(var_950_object, var_938_bool, var_948_bool, var_974_string, var_975_string);
						if(!var_948_bool) { //@nz
							if(var_0_cvector == 0) goto Label_2068;
							var_950_object = null;
						}
					EMIT "GOTO 0x815";

					Label_2068:
						} else {
					var_950_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_948_bool);
					if(!var_948_bool) { //@nz
						if(var_0_cvector != 0) {
							var_950_object = null;
							goto Label_2096;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_2096;
		}
			var_955_object = null;
			goto Label_2094;

		Label_2094:
			var_950_object = null;

		}
	Label_2096:
		for(;;) {
			if(!var_0_cvector) { //@nz
				var_970_float = GetByIndex(var_935_cvector, 0);
				var_971_float = GetByIndex(var_935_cvector, 2);
				@RotateAsync(var_970_float, var_971_float);
			}
			var_933_bool = !var_0_cvector;
			return 16;

			}
	}
	
}


void func_993(bool var_631_bool, float var_632_float)
{
	float var_635_float; bool var_636_bool;
	@rand(var_635_float);
	if(var_635_float < var_632_float) {

		for(;;) {
			@IsAnimationPlaying(var_636_bool);
			if(!var_636_bool) { //@nz
			} else {
				bool var_639_bool;
				func_1103(var_639_bool);
				if(var_639_bool != 0) {
					var_631_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_631_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_1207(var_636_bool);
}


void func_1505(cvector var_0_cvector)
{
	var_0_cvector = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_3567(bool var_117_bool, int var_118_int)
{
	var_119_int = GlobalVars[3];
	if(var_118_int == var_119_int) {
		var_117_bool = false;
		return 0;
	}
	if(var_118_int == 0) {
		var_123_int = GlobalVars[4];
		var_124_int = GlobalVars[3];
		var_124_int = var_123_int;
		GlobalVars[4] = var_123_int;
		@Trace("changing state to c_iStateWaitForLoad");
	} else if(var_118_int == 1) {
			@Trace("changing state to c_iStateHeatHands");
	}

	for(;;) {
		var_126_int = GlobalVars[3];
		var_118_int = var_126_int;
		GlobalVars[3] = var_126_int;
		var_117_bool = true;
		return 0;

	}
	
	if(var_118_int == 2) {
		@Trace("changing state to c_iStateIdle");
	} else if(var_118_int == 3) {
		@Trace("changing state to c_iStatePatrol");
	}
	var_117_bool = false;
}


// @pe
void func_1521(bool var_315_bool, object var_316_object)
{
	object var_318_object;
	var_316_object = var_318_object;
	bool var_317_bool;
	func_2935(var_317_bool, var_318_object);
	var_317_bool = var_315_bool;
}


void func_1528(string var_333_string)
{
	var_333_string = "walk";
}


void func_1530(string var_334_string)
{
	var_334_string = "run";
}


void func_1020(cvector var_0_cvector, bool var_427_bool, float var_428_float)
{
	bool var_434_bool; cvector var_435_cvector; cvector var_436_cvector; cvector var_437_cvector; float var_438_float;
	
	for(;;) {
		@IsAnimationPlaying(var_434_bool);
		if(!var_434_bool) //@nz
			break;
		bool var_440_bool;
		func_1103(var_440_bool);
		if(var_440_bool != 0) {
			var_427_bool = true;
			return 10;
		}
		bool var_485_bool = true;
		bool var_486_bool;
		func_2935(var_486_bool, var_0_cvector);
		var_488_bool = !var_486_bool; //@nz
		if(var_488_bool != 1) {
			if(var_4_int != 1)
				var_485_bool = false;
		}
		if(var_485_bool != 0) {
			var_427_bool = false;
			return 10;
		}
		var_0_cvector->GetPFPosition(var_435_cvector); //@t
		@GetPFPosition(var_436_cvector);
		var_437_cvector = var_435_cvector - var_436_cvector;
		var_438_float = var_437_cvector | var_437_cvector;
		if(var_438_float < (var_428_float * var_428_float)) {
			bool var_492_bool; float var_493_float;
			var_428_float = var_493_float;
			func_847(var_437_cvector, var_438_float, var_492_bool, var_493_float);
			var_427_bool = true;
			return 10;
		}
		@sync();
	}
	func_1207(var_438_float);
	var_427_bool = false;
}


void func_3071(object var_26_object, cvector var_29_cvector, cvector var_30_cvector)
{
	object var_33_object;
	@GetScene(var_33_object);
	object var_34_object;
	@AddActorByType(var_34_object, "scripted", var_33_object, var_29_cvector, var_30_cvector, "blood_dir.xml");
	object var_37_object;
	var_26_object = var_37_object;
	func_2959(var_37_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";



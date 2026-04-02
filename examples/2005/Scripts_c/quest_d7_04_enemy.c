// @GLOBALS: 0:bool:,1:int:,2:int:,3:int:,4:object:,5:object:,6:object:,7:object:

maintask task_0
{
	void init(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		object var_31_object; int var_32_int; bool var_33_bool; int var_34_int; bool var_35_bool; cvector var_36_cvector; cvector var_37_cvector; int var_38_int; cvector var_39_cvector; cvector var_40_cvector; object var_41_object;
		bool var_42_bool;
		func_3296(var_42_bool);
		if(!var_42_bool) { //@nz
			@Trace("FSM Init failed");
			object var_72_object;
			func_3048(var_72_object);
			@RemoveActor(var_72_object);
			return 22;
		}
		@GetPosition(var_0_cvector);
		@GetDirection(var_1_cvector);
		var_75_int = GlobalVars[2];
		GlobalVars[2] = 0;
		var_76_int = GlobalVars[3];
		GlobalVars[3] = 2;
	
		for(;;) {
			if(true != 0) {
				var_79_int = GlobalVars[2];
				if(0 == var_79_int) {
					TaskCall(9);
					func_2643();
					TaskReturn();
					bool var_87_bool;
					func_3333(var_87_bool, 2);
				} else {
				var_107_int = GlobalVars[2];
				if(7 == var_107_int) {
					object var_109_object;
					var_110_object = GlobalVars[7];
					var_110_object = var_109_object;
					TaskCall(1);
					func_435(var_118_object, var_109_object);
					TaskReturn();
					var_638_int = GlobalVars[2];
					if(7 == var_638_int) {
						TaskCall(7);
						func_2366(1);
						TaskReturn();
						var_658_int = GlobalVars[2];
						if(7 == var_658_int) {
							bool var_660_bool;
							func_3333(var_660_bool, 2);
						}
					}
					goto Label_431;
				}
				var_663_int = GlobalVars[2];
				if(6 == var_663_int) {
					TaskCall(7);
					func_2366(1);
					TaskReturn();
					var_668_int = GlobalVars[2];
					if(6 == var_668_int) {
						object var_670_object;
						var_672_object = GlobalVars[6];
						var_672_object = var_670_object;
						TaskCall(3);
						func_1519(var_670_object, (float)8);
						TaskReturn();
						var_743_int = GlobalVars[2];
						if(6 == var_743_int) {
							TaskCall(7);
							func_2366(1);
							TaskReturn();
							var_748_int = GlobalVars[2];
							if(6 == var_748_int) {
								bool var_750_bool;
								func_3333(var_750_bool, 2);
							}
						}
					}
					goto Label_431;
				}
				var_753_int = GlobalVars[2];
				if(1 == var_753_int) {
					func_3462(true);
					bool var_762_bool;
					TaskCall(6);
					func_2132(var_762_bool);
					TaskReturn();
					var_833_int = GlobalVars[2];
					if(1 == var_833_int) {
						TaskCall(4);
						func_1778();
						TaskReturn();
						var_887_int = GlobalVars[2];
						if(1 == var_887_int) {
							bool var_889_bool;
							TaskCall(5);
							func_1919(var_889_bool, var_0_cvector, var_1_cvector, false);
							TaskReturn();
							var_949_int = GlobalVars[2];
							if(1 == var_949_int) {
								bool var_951_bool;
								func_3333(var_951_bool, 2);
							}
						}
					}
					func_3462(false);
					goto Label_431;
				}
				var_955_int = GlobalVars[2];
				if(2 == var_955_int) {
					bool var_957_bool;
					func_0(var_41_object, var_957_bool);
					if(!var_957_bool) { //@nz
						bool var_966_bool;
						TaskCall(5);
						func_1919(var_966_bool, var_0_cvector, var_1_cvector, false);
						TaskReturn();
					}
					var_972_int = GlobalVars[2];
					if(2 == var_972_int) {
						TaskCall(4);
						func_1778();
						TaskReturn();
						var_975_int = GlobalVars[2];
						if(2 == var_975_int) {
							bool var_977_bool;
							func_3476(var_977_bool);
							if(!var_977_bool) { //@nz
								bool var_985_bool;
								func_3333(var_985_bool, 3);
							} else {
								bool var_987_bool;
								func_3082(var_987_bool, 0.5);
								if(var_987_bool == 0) goto Label_223;
								bool var_991_bool;
								func_3451(var_991_bool);
								var_998_bool = !var_991_bool; //@nz
								if(var_998_bool == 0) goto Label_223;
								bool var_999_bool;
								func_3333(var_999_bool, 1);
				}
							var_1002_int = GlobalVars[2];
							if(3 == var_1002_int) {
								func_3489(true);
								@GetMainOutdoorScene(var_31_object);
								var_1016_int = GlobalVars[1];
								@irand(var_32_int, var_1016_int);
								bool var_1017_bool;
								func_3082(var_1017_bool, 0.5);
								var_1017_bool = var_33_bool;
								var_34_int = 0;

								for(;;) {
									var_1019_int = GlobalVars[1];
									if(var_34_int < var_1019_int) {
										var_1022_int = GlobalVars[1];
										var_38_int = (var_34_int + var_32_int) % var_1022_int;
										if(var_33_bool != 0) {
											var_1024_int = GlobalVars[1];
											var_38_int = (var_1024_int - 1) - var_38_int;
										}
										string var_1027_string;
										func_3551(var_1027_string);
										var_31_object->GetLocator((var_1027_string + (var_38_int + 1)), var_35_bool, var_36_cvector, var_37_cvector);
										bool var_1031_bool; cvector var_1032_cvector; cvector var_1033_cvector;
										var_36_cvector = var_1032_cvector;
										var_37_cvector = var_1033_cvector;
										TaskCall(5);
										func_1919(var_1031_bool, var_1032_cvector, var_1033_cvector, false);
										TaskReturn();
										var_1037_int = GlobalVars[2];
										if(3 != var_1037_int) {
										} else {
												TaskCall(7);
												func_2366(1);
												TaskReturn();
												var_1048_int = GlobalVars[2];
												if(!(3 != var_1048_int)) goto Label_287;
										}
									}
									for(;;) {
										var_1040_int = GlobalVars[2];
										if(3 == var_1040_int) {
											bool var_1042_bool;
											func_3333(var_1042_bool, 2);
										}
										func_3489(false);
										var_31_object = null;
										goto Label_431;

									}

								Label_287:
									var_34_int += 1;
								}
							}
							var_1052_int = GlobalVars[2];
							if(4 == var_1052_int) {
								var_1054_object = GlobalVars[4];
								var_1054_object->GetPosition(var_39_cvector);
								var_1055_object = GlobalVars[4];
								var_1055_object->GetDirection(var_40_cvector);
								bool var_1056_bool; cvector var_1057_cvector; cvector var_1058_cvector;
								var_39_cvector = var_1057_cvector;
								var_1058_cvector = -var_40_cvector;
								TaskCall(5);
								func_1919(var_1056_bool, var_1057_cvector, var_1058_cvector, true);
								TaskReturn();
								var_1062_int = GlobalVars[2];
								if(4 == var_1062_int) {
									TaskCall(7);
									func_2366(2);
									TaskReturn();
									var_1067_int = GlobalVars[2];
									if(4 == var_1067_int) {
										bool var_1069_bool;
										TaskCall(5);
										func_1919(var_1069_bool, var_0_cvector, var_1_cvector, true);
										TaskReturn();
										var_1075_int = GlobalVars[2];
										if(4 == var_1075_int) {
											@GetMainOutdoorScene(var_41_object);
											string var_1077_string;
											func_3555(var_1077_string);
											object var_1078_object;
											func_3048(var_1078_object);
											@BroadcastMessage(var_1077_string, var_1078_object, var_41_object);
											bool var_1079_bool; cvector var_1080_cvector; cvector var_1081_cvector;
											var_39_cvector = var_1080_cvector;
											var_39_cvector = var_1081_cvector;
											TaskCall(5);
											func_1919(var_1079_bool, var_1080_cvector, var_1081_cvector, true);
											TaskReturn();
											var_1085_int = GlobalVars[2];
											if(4 == var_1085_int) {
												TaskCall(7);
												func_2366(3);
												TaskReturn();
												var_1090_int = GlobalVars[2];
												if(4 == var_1090_int) {
													bool var_1092_bool;
													func_3333(var_1092_bool, 2);
												}
											}
											var_41_object = null;
										}
									}
								}
								goto Label_431;
							}
							var_1095_int = GlobalVars[2];
							if(5 == var_1095_int) {
								TaskCall(7);
								func_2366(1);
								TaskReturn();
								var_1100_int = GlobalVars[2];
								if(5 == var_1100_int) {
									object var_1102_object;
									var_1104_object = GlobalVars[5];
									var_1104_object = var_1102_object;
									TaskCall(3);
									func_1519(var_1102_object, (float)8);
									TaskReturn();
									var_1109_int = GlobalVars[2];
									if(5 == var_1109_int) {
										TaskCall(7);
										func_2366(2);
										TaskReturn();
										var_1114_int = GlobalVars[2];
										if(5 == var_1114_int) {
											bool var_1116_bool;
											func_3333(var_1116_bool, 2);
										}
									}
								}
								goto Label_431;
							}
							@Trace("Unknown FSM state");
			}
						return 22;
					}
				}
			}
		Label_223:
			goto Label_431;
			}
		Label_431:
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
			string var_25_string;
			func_3553(var_25_string);
			@BroadcastMessage(var_25_string, var_7_float, var_22_object);
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
		func_2699(var_22_bool, var_23_object);
		if(var_22_bool != 0) {
			var_26_object = GlobalVars[7];
			if(var_26_object != var_20_bool)
				var_21_bool = true;
		}
		if(var_21_bool != 0) {
			func_754(var_20_bool);
			bool var_28_bool; object var_29_object;
			var_20_bool = var_29_object;
			func_3433(var_28_bool, var_29_object);
		}
	}

	// @pe
	void OnUnload(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		func_754(var_19_bool);
		bool var_20_bool;
		func_3333(var_20_bool, 0);
	}

}


task task_2
{
	void OnTimer(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		object var_22_object;
		if(var_20_bool == 2) {
			@GetMainOutdoorScene(var_22_object);
			string var_25_string;
			func_3553(var_25_string);
			@BroadcastMessage(var_25_string, var_3_int, var_22_object);
			@Trace("helpme timer");
		} else {
			int var_27_int;
			var_20_bool = var_27_int;
			func_1312(Obj(), var_27_int);
		}
	
	}

	// @pe
	void OnUnload(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		func_1326(var_19_bool);
		bool var_24_bool;
		func_3333(var_24_bool, 0);
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
			func_2996(var_24_object);
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
		func_1326(var_20_bool);
		object var_25_object;
		var_20_bool = var_25_object;
		func_3543();
	}

}


task task_3
{
	// @pe
	void OnUnload(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		func_1751(var_19_bool);
		var_2_object = true;
		bool var_21_bool;
		func_3333(var_21_bool, 0);
	}

	// @pe
	void OnMessage(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, string var_18_string, bool var_19_bool, bool var_20_bool, bool var_21_bool)
	{
		object var_23_object;
		var_20_bool = var_23_object;
		bool var_22_bool;
		string var_24_string;
		func_3157(var_22_bool, var_23_object, var_24_string);
		if(var_22_bool != 0)
			func_1751(var_24_string);
	}

	// @pe
	void OnSee(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		bool var_21_bool; object var_22_object;
		func_3231(var_21_bool, var_22_object);
		if(var_21_bool != 0) {
			var_2_object = true;
			func_1751(var_22_object);
		}
	}

	// @pe
	void OnHear(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		bool var_21_bool; object var_22_object;
		func_3282(var_21_bool, var_22_object);
		if(var_21_bool != 0) {
			var_2_object = true;
			func_1751(var_22_object);
		}
	}

	// @pe
	void OnAttacked(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		func_1751(var_20_bool);
		var_2_object = true;
		bool var_22_bool; object var_23_object;
		var_20_bool = var_23_object;
		func_3433(var_22_bool, var_23_object);
	}

	// @pe
	void OnTimer(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, int var_17_int, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		if(var_20_bool == 3) {
			func_1751(var_20_bool);
			var_2_object = true;
		}
		int var_24_int;
		func_1729(var_19_bool, var_24_int, var_24_int);
	}

	// @pe
	void OnCollision(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		@RequestClearPath(var_20_bool);
	}

	// @pe
	void OnDeath(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		func_1751(var_20_bool);
		object var_22_object;
		var_20_bool = var_22_object;
		func_3543();
	}

}


task task_4
{
	// @pe
	void OnUnload(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		func_1914();
		bool var_20_bool;
		func_3333(var_20_bool, 0);
	}

	// @pe
	void OnMessage(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, string var_18_string, bool var_19_bool, bool var_20_bool, bool var_21_bool)
	{
		object var_23_object;
		var_20_bool = var_23_object;
		string var_24_string;
		var_21_bool = var_24_string;
		bool var_22_bool;
		func_3157(var_22_bool, var_23_object, var_24_string);
		if(var_22_bool != 0)
			func_1914();
	}

	// @pe
	void OnSee(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		object var_22_object;
		var_20_bool = var_22_object;
		bool var_21_bool;
		func_3231(var_21_bool, var_22_object);
		if(var_21_bool != 0)
			func_1914();
	}

	// @pe
	void OnHear(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		object var_22_object;
		var_20_bool = var_22_object;
		bool var_21_bool;
		func_3282(var_21_bool, var_22_object);
		if(var_21_bool != 0)
			func_1914();
	}

	// @pe
	void OnAttacked(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		func_1914();
		bool var_21_bool; object var_22_object;
		var_20_bool = var_22_object;
		func_3433(var_21_bool, var_22_object);
	}

}


task task_5
{
	// @pe
	void OnUnload(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		func_2112(var_19_bool);
		bool var_21_bool;
		func_3333(var_21_bool, 0);
	}

	// @pe
	void OnMessage(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, object var_18_object, string var_19_string, bool var_20_bool, bool var_21_bool)
	{
		object var_23_object;
		var_20_bool = var_23_object;
		bool var_22_bool;
		string var_24_string;
		func_3157(var_22_bool, var_23_object, var_24_string);
		if(var_22_bool != 0)
			func_2112(var_24_string);
	}

	// @pe
	void OnSee(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, object var_18_object, bool var_19_bool, bool var_20_bool)
	{
		bool var_21_bool; object var_22_object;
		func_3231(var_21_bool, var_22_object);
		if(var_21_bool != 0)
			func_2112(var_22_object);
	}

	// @pe
	void OnHear(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, object var_18_object, bool var_19_bool, bool var_20_bool)
	{
		bool var_21_bool; object var_22_object;
		func_3282(var_21_bool, var_22_object);
		if(var_21_bool != 0)
			func_2112(var_22_object);
	}

	// @pe
	void OnAttacked(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, object var_18_object, bool var_19_bool, bool var_20_bool)
	{
		func_2112(var_20_bool);
		bool var_22_bool; object var_23_object;
		var_20_bool = var_23_object;
		func_3433(var_22_bool, var_23_object);
	}

	// @pe
	void OnTimer(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, int var_18_int, bool var_19_bool, bool var_20_bool)
	{
		if(var_20_bool != 0)
			return 0;
		bool var_23_bool;
		func_1986(var_23_bool);
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
		func_2112(var_20_bool);
		object var_22_object;
		var_20_bool = var_22_object;
		func_3543();
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
		func_3157(var_22_bool, var_23_object, var_24_string);
		if(var_22_bool != 0)
			func_2346(var_24_string);
	}

	// @pe
	void OnSee(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		bool var_21_bool; object var_22_object;
		func_3231(var_21_bool, var_22_object);
		if(var_21_bool != 0)
			func_2346(var_22_object);
	}

	// @pe
	void OnHear(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		bool var_21_bool; object var_22_object;
		func_3282(var_21_bool, var_22_object);
		if(var_21_bool != 0)
			func_2346(var_22_object);
	}

	// @pe
	void OnAttacked(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		func_2346(var_20_bool);
		bool var_22_bool; object var_23_object;
		var_20_bool = var_23_object;
		func_3433(var_22_bool, var_23_object);
	}

	// @pe
	void OnUnload(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		func_2346(var_19_bool);
		bool var_21_bool;
		func_3333(var_21_bool, 0);
	}

	// @pe
	void OnTimer(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, int var_19_int, bool var_20_bool)
	{
		if(var_20_bool != 0)
			return 0;
		bool var_23_bool;
		func_2220(var_23_bool);
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
		func_2346(var_20_bool);
		object var_22_object;
		var_20_bool = var_22_object;
		func_3543();
	}

}


task task_7
{
	// @pe
	void OnUnload(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		func_2457();
		var_0_cvector = true;
		bool var_20_bool;
		func_3333(var_20_bool, 0);
	}

	// @pe
	void OnMessage(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object, string var_21_string)
	{
		object var_23_object;
		var_20_object = var_23_object;
		string var_24_string;
		var_21_string = var_24_string;
		bool var_22_bool;
		func_3157(var_22_bool, var_23_object, var_24_string);
		if(var_22_bool != 0) {
			func_2457();
			var_0_cvector = true;
		}
	}

	// @pe
	void OnSee(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object)
	{
		object var_22_object;
		var_20_object = var_22_object;
		bool var_21_bool;
		func_3231(var_21_bool, var_22_object);
		if(var_21_bool != 0) {
			func_2457();
			var_0_cvector = true;
		}
	}

	// @pe
	void OnHear(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object)
	{
		object var_22_object;
		var_20_object = var_22_object;
		bool var_21_bool;
		func_3282(var_21_bool, var_22_object);
		if(var_21_bool != 0) {
			func_2457();
			var_0_cvector = true;
		}
	}

	// @pe
	void OnAttacked(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object)
	{
		func_2457();
		bool var_21_bool; object var_22_object;
		var_20_object = var_22_object;
		func_3433(var_21_bool, var_22_object);
	}

}


task task_8
{
	void OnUnload(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		object var_20_object;
		func_3048(var_20_object);
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
			func_3136(var_24_object);
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
			func_3048(var_23_object);
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
	func_2898(var_24_object, var_25_int, var_26_float);
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
	func_2966(var_28_float, var_29_cvector, var_30_cvector);
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
	func_2462(var_21_object);
	TaskReturn();
}


void func_0(cvector var_0_cvector, bool var_957_bool)
{
	cvector var_961_cvector;
	@GetPosition(var_961_cvector);
	var_957_bool = ((var_961_cvector - var_0_cvector) | (var_961_cvector - var_0_cvector)) < 40000;
}


void func_3082(bool var_987_bool, float var_988_float)
{
	float var_990_float;
	@rand(var_990_float);
	var_987_bool = var_990_float < var_988_float;
}


void func_3087(float var_567_float)
{
	object var_569_object;
	@CreateFloatVector(var_569_object);
	var_569_object->add(var_567_float);
	@SendWorldWndMessage(15, var_569_object);
}
EMIT "Stack[-1] = 0";


void func_3097(object var_216_object)
{
	bool var_218_bool;
	@IsPlayerActor(var_216_object, var_218_bool);
	if(var_218_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_1058(cvector var_0_cvector, bool var_412_bool)
{
	cvector var_418_cvector; cvector var_419_cvector;
	bool var_423_bool = true;
	bool var_424_bool;
	func_2830(var_424_bool, var_0_cvector);
	var_426_bool = !var_424_bool; //@nz
	if(var_426_bool != 1) {
		if(var_4_int != 1)
			var_423_bool = false;
	}
	if(var_423_bool != 0) {
		var_412_bool = false;
		return 10;
	}
	bool var_428_bool;
	float var_422_float;
	func_1153(var_422_float, var_428_bool);
	if(var_428_bool != 0) {
		var_0_cvector->GetPFPosition(var_418_cvector); //@t
		@GetPFPosition(var_419_cvector);
		var_0_cvector->GetAttackDistance(var_422_float); //@t
		var_412_bool = ((var_418_cvector - var_419_cvector) | (var_418_cvector - var_419_cvector)) <= ((var_422_float + 50) * (var_422_float + 50));
		return 10;
	}
	var_412_bool = false;
}


void func_3106(string var_857_string, int var_858_int)
{
	string var_860_string = "idle";
	if(var_858_int != 0)
		var_860_string += var_858_int;
	var_860_string = var_857_string;
}


void func_3113(int var_851_int)
{
	int var_854_int; bool var_855_bool;
	var_854_int = 0;
	
	for(;;) {
		string var_857_string; int var_858_int;
		var_854_int = var_858_int;
		func_3106(var_857_string, var_858_int);
		@HasAnimation(var_855_bool, "all", var_857_string);
		if(!var_855_bool) //@nz
			break;
		var_854_int += 1;
	}
	var_854_int = var_851_int;
}


// @pe
void func_2611(string var_92_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_93_string;
	var_92_string = var_93_string;
	func_3007(var_93_string);
	@PlayAnimation("all", var_92_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_92_string);
	@RemoveEnvelope();
}


// @pe
void func_3064(float var_549_float, float var_550_float, float var_551_float)
{
	if(var_550_float < var_551_float)
		var_550_float = var_549_float;
	else
		var_551_float = var_549_float;
	
}


void func_3130(int var_25_int)
{
	int var_27_int;
	@GetVariable("branch", var_27_int);
	var_27_int = var_25_int;
}


void func_2112(cvector var_0_cvector)
{
	var_0_cvector = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_3136(object var_24_object)
{
	int var_25_int;
	func_3130(var_25_int);
	if(var_25_int == 1)
		@WorkWithCorpse(var_24_object);
	else
		@Barter(var_24_object);
	
}


void func_1092(bool var_410_bool)
{
	bool var_411_bool = false;
	bool var_412_bool;
	func_1058(var_411_bool, var_412_bool);
	if(var_412_bool != 0) {
		bool var_431_bool;
		func_1108(var_410_bool, var_411_bool, var_431_bool);
		if(var_431_bool != 0)
			var_411_bool = true;
	}
	if(var_411_bool != 0) {
		var_410_bool = true;
		return 0;
	}
	var_410_bool = false;
}


void func_2128(string var_937_string)
{
	var_937_string = "walk";
}


void func_2130(string var_938_string)
{
	var_938_string = "run";
}


void func_2643(void)
{
	var_81_bool = GlobalVars[0];
	if(var_81_bool != 0) {
		object var_82_object;
		func_3048(var_82_object);
		@RemoveActor(var_82_object);
		@Hold();
	}
	for(;;) {
		bool var_83_bool;
		func_2991(var_83_bool);
		var_86_bool = !var_83_bool; //@nz
		if(var_86_bool == 0) goto Label_2660;
		@Hold();
	}
	
Label_2660:
}


void func_2132(bool var_762_bool)
{
	object var_769_object;
	@GetMainOutdoorScene(var_769_object);
	string var_772_string;
	func_3557(var_772_string);
	bool var_768_bool;
	cvector var_770_cvector;
	cvector var_771_cvector;
	var_769_object->GetLocator(var_772_string, var_768_bool, var_770_cvector, var_771_cvector);
	if(!var_768_bool) //@nz
		var_762_bool = false;
	bool var_774_bool; cvector var_775_cvector; cvector var_776_cvector;
	var_770_cvector = var_775_cvector;
	var_771_cvector = var_776_cvector;
	func_2196(var_774_bool, var_775_cvector, var_776_cvector, false);
	var_774_bool = var_762_bool;
}
EMIT "Stack[-3] = 0";


void func_1108(cvector var_0_cvector, bool var_5_bool, bool var_431_bool)
{
	object var_437_object; float var_439_float; cvector var_440_cvector; cvector var_441_cvector;
	@GetScene(var_437_object);
	bool var_438_bool = false;
	
	for(;;) {
		cvector var_442_cvector;
		func_2692(var_442_cvector, var_0_cvector);
		var_448_int = -var_442_cvector;
		@FindDirLength(var_439_float, var_448_int, var_5_bool);
		if(var_439_float < var_5_bool) {
		} else {
				@Face(var_0_cvector);
				@PlayAnimation("all", "bjump");
				var_0_cvector->GetPFPosition(var_440_cvector); //@t
				@GetPFPosition(var_441_cvector);
				@WaitForAnimEnd();
				func_1196(var_441_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_438_bool = true;
				bool var_453_bool;
				func_1058(var_441_cvector, var_453_bool);
				var_454_bool = !var_453_bool; //@nz
				if(var_454_bool == 0) goto Label_1149;
		}
		for(;;) {
			var_438_bool = var_431_bool;

		}

	Label_1149:
	}
}
EMIT "Stack[-5] = 0";


void func_3157(bool var_22_bool, object var_23_object, string var_24_string)
{
	cvector var_33_cvector; cvector var_34_cvector;
	object var_41_object;
	func_3048(var_41_object);
	if(var_23_object == var_41_object) {
		var_22_bool = false;
		return 16;
	}
	string var_45_string;
	func_3555(var_45_string);
	if(var_24_string == var_45_string) {
		bool var_47_bool; object var_48_object;
		func_3397(var_47_bool, var_48_object);
		if(var_47_bool != 0) {
			var_22_bool = true;
			return 16;
		}
	} else {
			string var_55_string;
			func_3553(var_55_string);
			if(!(var_24_string == var_55_string)) goto Label_3200;
			var_48_object->GetPosition(var_33_cvector);
			@GetPosition(var_34_cvector);
			if(((var_33_cvector - var_34_cvector) | (var_33_cvector - var_34_cvector)) < 4000000.0) {
				bool var_59_bool; object var_60_object;
				var_23_object = var_60_object;
				func_3433(var_59_bool, var_60_object);
				if(var_59_bool != 0) {
					var_22_bool = true;
					return 16;
				}
			}
	}
Label_3229:
	for(;;) {
		var_22_bool = false;
		return 16;

	}
	
Label_3200:
	if(!(var_24_string == "player_shot")) goto Label_3229;
	cvector var_37_cvector;
	var_23_object->GetPosition(var_37_cvector);
	cvector var_38_cvector;
	@GetPosition(var_38_cvector);
	float var_40_float = (var_37_cvector - var_38_cvector) | (var_37_cvector - var_38_cvector);
	if(var_40_float < 360000.0) {
		bool var_71_bool; object var_72_object;
		var_23_object = var_72_object;
		func_3433(var_71_bool, var_72_object);
		if(var_71_bool != 0) {
			var_22_bool = true;
			return 16;
		}
	}
	if(!(var_40_float < 12250000.0)) goto Label_3229;
	bool var_75_bool; object var_76_object;
	var_23_object = var_76_object;
	func_3397(var_75_bool, var_76_object);
	if(var_75_bool == 0) goto Label_3229;
	var_22_bool = true;
}


void func_1627(cvector var_0_cvector, cvector var_1_cvector, bool var_684_bool, object var_685_object, float var_686_float, float var_687_float, bool var_688_bool, bool var_689_bool)
{
	bool var_698_bool; object var_700_object; cvector var_701_cvector; cvector var_702_cvector; float var_704_float; object var_705_object;
	var_0_cvector = false;
	var_1_cvector = var_685_object;
	bool var_699_bool;
	var_689_bool = var_699_bool;
	
	for(;;) {
		bool var_706_bool; object var_707_object;
		var_685_object = var_707_object;
		func_1767(var_706_bool, var_707_object);
		if(!var_706_bool) { //@nz
			var_684_bool = false;
			return 16;
		}
		var_685_object->GetPosition(var_701_cvector);
		@GetPosition(var_702_cvector);
		var_704_float = (var_701_cvector - var_702_cvector) | (var_701_cvector - var_702_cvector);
		bool var_711_bool = false;
		if(var_687_float > 0) {
			if(var_704_float > (var_687_float * var_687_float))
				var_711_bool = true;
		}
		if(var_711_bool != 0) {
			@Stop();
			var_684_bool = false;
			return 16;
		}
		if(var_704_float > (var_686_float * var_686_float)) {
			var_685_object->GetPFPosition(var_701_cvector);
			@FindPathTo(var_705_object, var_701_cvector);
			if(var_705_object != null) {
				var_705_object = var_700_object;
				var_705_object = null;
			}
			if(var_700_object != null) {
				if(var_699_bool == 0) goto Label_1680;
				var_699_bool = false;
				@RotatePath(var_700_object, var_698_bool);
				if(!var_698_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_724_string;
						func_1774(var_724_string);
						string var_725_string;
						func_1776(var_725_string);
						@FollowPath(var_700_object, var_688_bool, var_698_bool, var_724_string, var_725_string);
						if(!var_698_bool) { //@nz
							if(var_0_cvector == 0) goto Label_1699;
							var_700_object = null;
						}
					EMIT "GOTO 0x6a4";

					Label_1699:
						} else {
					var_700_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_698_bool);
					if(!var_698_bool) { //@nz
						if(var_0_cvector != 0) {
							var_700_object = null;
							goto Label_1727;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1727;
		}
			var_705_object = null;
			goto Label_1725;

		Label_1725:
			var_700_object = null;

		}
	Label_1727:
		for(;;) {
			var_684_bool = !var_0_cvector;
			return 16;

			}
	}
	
}


// @pe
void func_2678(string var_539_string, int var_540_int)
{
	if(var_540_int == 2) {
		var_539_string = "fire";
		return 0;
	EMIT "GOTO 0xa82";
	}
	if(var_540_int == 1) {
		var_539_string = "bullet";
		return 0;
	}
	var_539_string = "phys";
}


void func_1153(cvector var_0_cvector, bool var_360_bool)
{
	bool var_362_bool;
	var_365_bool = IsFuncExist(var_0_cvector, "IsAttacking", 1);
	if(var_365_bool != 0) {
		var_0_cvector->IsAttacking(var_362_bool); //@t
		var_362_bool = var_360_bool;
	}
	var_360_bool = false;
}


void func_2692(cvector var_442_cvector, object var_443_object)
{
	cvector var_446_cvector;
	@GetPosition(var_446_cvector);
	cvector var_447_cvector;
	var_443_object->GetPosition(var_447_cvector);
	var_442_cvector = var_447_cvector - var_446_cvector;
}


void func_2699(bool var_258_bool, object var_259_object)
{
	bool var_261_bool;
	@IsPlayerActor(var_259_object, var_261_bool);
	var_261_bool = var_258_bool;
}


void func_1164(object var_2_object, bool var_6_bool)
{
	int var_480_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_6_bool != 0) {
		if((var_6_bool + -1) > 0)
			return 4;
	}
	float var_479_float;
	@rand(var_479_float);
	float var_486_float;
	func_1212(var_486_float);
	if(var_479_float < var_486_float) {
		@irand(var_480_int, var_2_object);
		@Speak("attack" + (var_480_int + 1));
		int var_491_int;
		func_1210(var_491_int);
		var_6_bool = var_491_int;
	}
}


void func_2704(bool var_202_bool, object var_203_object, string var_204_string)
{
	var_209_bool = IsFuncExist(var_203_object, "HasProperty", 2);
	if(!var_209_bool) { //@nz
		var_202_bool = false;
		return 2;
	}
	bool var_206_bool;
	var_203_object->HasProperty(var_204_string, var_206_bool);
	var_206_bool = var_202_bool;
}


// @pe
void func_2196(bool var_774_bool, cvector var_775_cvector, cvector var_776_cvector, bool var_777_bool)
{
	var_778_float = GetByIndex(var_775_cvector, 1);
	SetByIndex(var_775_cvector, 1) = (var_778_float + 30);
	bool var_780_bool; cvector var_781_cvector; cvector var_782_cvector; bool var_785_bool;
	var_775_cvector = var_781_cvector;
	var_776_cvector = var_782_cvector;
	func_2222(var_785_bool, var_780_bool, var_781_cvector, var_782_cvector, (float)100, (float)4000, var_785_bool, true);
	var_780_bool = var_774_bool;
}


void func_2716(float var_511_float, object var_512_object, float var_513_float, int var_514_int)
{
	int var_524_int; int var_526_int;
	object var_531_object;
	var_512_object = var_531_object;
	bool var_530_bool;
	func_2704(var_530_bool, var_531_object, "health");
	if(!var_530_bool) //@nz
		var_511_float = 0.0;
	bool var_534_bool; object var_535_object;
	func_2704(var_534_bool, var_535_object, "armor");
	if(!var_534_bool) //@nz
		var_524_int = 0;
	else
		var_535_object->GetProperty("armor", var_524_int);
	string var_539_string; int var_540_int;
	var_514_int = var_540_int;
	func_2678(var_539_string, var_540_int);
	string var_525_string = "armor_" + var_539_string;
	bool var_545_bool; object var_546_object; string var_547_string;
	var_512_object = var_546_object;
	func_2704(var_545_bool, var_546_object, var_547_string);
	if(!var_545_bool) //@nz
		var_526_int = 0;
	else
		var_512_object->GetProperty(var_547_string, var_526_int);

	float var_549_float;
	func_3064(var_549_float, ((var_524_int + var_526_int) / 100.0), (float)1);
	float var_527_float;
	var_549_float = var_527_float;
	float var_528_float;
	var_512_object->GetProperty("health", var_528_float);
	float var_529_float = var_513_float * (1 - var_527_float);
	float var_559_float;
	func_3071(var_559_float, (var_528_float - var_529_float), (float)0, (float)1);
	var_512_object->SetProperty("health", var_559_float);
	bool var_565_bool; object var_566_object;
	var_512_object = var_566_object;
	func_2699(var_565_bool, var_566_object);
	if(var_565_bool != 0) {
		float var_567_float = -var_529_float;
		func_3087(var_567_float);
	}
	var_529_float = var_511_float;
	
}


// @pe
void func_3231(bool var_21_bool, object var_22_object)
{
	bool var_23_bool = false;
	var_26_bool = IsFuncExist(var_22_object, "IsDead", 1);
	if(var_26_bool != 0) {
		bool var_27_bool; object var_28_object;
		var_22_object = var_28_object;
		func_2789(var_27_bool, var_28_object);
		if(var_27_bool != 0)
			var_23_bool = true;
	}
	if(var_23_bool != 0) {
		bool var_31_bool; object var_32_object; string var_33_string;
		string var_34_string;
		func_3555(var_34_string);
		var_34_string = var_33_string;
		func_2704(var_31_bool, var_32_object, var_33_string);
		if(var_31_bool != 0) {
			var_21_bool = false;
			return 0;
		}
		string var_41_string;
		func_3555(var_41_string);
		var_32_object->SetProperty(var_41_string, 1);
		bool var_43_bool; object var_44_object;
		var_22_object = var_44_object;
		func_3379(var_43_bool, var_44_object);
		var_43_bool = var_21_bool;
		return 0;
	EMIT "GOTO 0xcd0";
	}
	bool var_51_bool; object var_52_object;
	var_22_object = var_52_object;
	func_2699(var_51_bool, var_52_object);
	if(var_51_bool != 0) {
		bool var_55_bool; object var_56_object;
		var_22_object = var_56_object;
		func_3433(var_55_bool, var_56_object);
		var_55_bool = var_21_bool;
		return 0;
	}
	var_21_bool = false;
}


void func_1196(cvector var_0_cvector)
{
	func_3097(var_0_cvector);
}


void func_2220(bool var_803_bool)
{
	var_803_bool = true;
}


void func_2222(cvector var_0_cvector, bool var_780_bool, cvector var_781_cvector, cvector var_782_cvector, float var_783_float, float var_784_float, bool var_785_bool, bool var_786_bool)
{
	bool var_795_bool; object var_797_object; cvector var_798_cvector; cvector var_799_cvector; float var_801_float; object var_802_object;
	var_0_cvector = false;
	bool var_796_bool;
	var_786_bool = var_796_bool;
	
	for(;;) {
		bool var_803_bool;
		func_2220(var_803_bool);
		if(!var_803_bool) { //@nz
			var_780_bool = false;
			return 16;
		}
		var_781_cvector = var_798_cvector;
		@GetPosition(var_799_cvector);
		var_801_float = (var_798_cvector - var_799_cvector) | (var_798_cvector - var_799_cvector);
		bool var_805_bool = false;
		if(var_784_float > 0) {
			if(var_801_float > (var_784_float * var_784_float))
				var_805_bool = true;
		}
		if(var_805_bool != 0) {
			@Stop();
			var_780_bool = false;
			return 16;
		}
		if(var_801_float > (var_783_float * var_783_float)) {
			@FindPathTo(var_802_object, var_798_cvector);
			if(var_802_object != null) {
				var_802_object = var_797_object;
				var_802_object = null;
			}
			if(var_797_object != null) {
				if(var_796_bool == 0) goto Label_2270;
				var_796_bool = false;
				@RotatePath(var_797_object, var_795_bool);
				if(!var_795_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_821_string;
						func_2362(var_821_string);
						string var_822_string;
						func_2364(var_822_string);
						@FollowPath(var_797_object, var_785_bool, var_795_bool, var_821_string, var_822_string);
						if(!var_795_bool) { //@nz
							if(var_0_cvector == 0) goto Label_2289;
							var_797_object = null;
						}
					EMIT "GOTO 0x8f2";

					Label_2289:
						} else {
					var_797_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_795_bool);
					if(!var_795_bool) { //@nz
						if(var_0_cvector != 0) {
							var_797_object = null;
							goto Label_2317;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_2317;
		}
			var_802_object = null;
			goto Label_2315;

		Label_2315:
			var_797_object = null;

		}
	Label_2317:
		for(;;) {
			if(!var_0_cvector) { //@nz
				var_817_float = GetByIndex(var_782_cvector, 0);
				var_818_float = GetByIndex(var_782_cvector, 2);
				@RotateAsync(var_817_float, var_818_float);
			}
			var_780_bool = !var_0_cvector;
			return 16;

			}
	}
	
}


void func_1201(void)
{
	func_3007("attack_stay");
}


// @pe
void func_1206(void)
{
}


void func_1208(bool var_599_bool)
{
	var_599_bool = true;
}


void func_1210(int var_491_int)
{
	var_491_int = 1;
}


void func_1212(float var_486_float)
{
	var_486_float = 0.5;
}


void func_1214(int var_3_int, bool var_223_bool, object var_224_object, float var_225_float, float var_226_float, bool var_227_bool, bool var_228_bool)
{
	var_3_int = var_224_object;
	@SetTimer(2, 2);
	bool var_237_bool; object var_238_object; float var_239_float; float var_240_float; bool var_241_bool; bool var_242_bool;
	var_224_object = var_238_object;
	var_225_float = var_239_float;
	var_226_float = var_240_float;
	var_227_bool = var_241_bool;
	var_228_bool = var_242_bool;
	bool var_234_bool;
	func_1263(var_234_bool, var_237_bool, var_238_object, var_239_float, var_240_float, var_241_bool, var_242_bool);
	var_237_bool = var_234_bool;
	@KillTimer(2);
	var_234_bool = var_223_bool;
}


// @pe
void func_1729(cvector var_0_cvector, cvector var_1_cvector, int var_24_int)
{
	if(var_24_int != 0)
		return 0;
	bool var_27_bool;
	func_1767(var_27_bool, var_1_cvector);
	if(!var_27_bool) //@nz
		var_0_cvector = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_3282(bool var_21_bool, object var_22_object)
{
	object var_24_object;
	var_22_object = var_24_object;
	bool var_23_bool;
	func_2699(var_23_bool, var_24_object);
	if(var_23_bool != 0) {
		bool var_27_bool; object var_28_object;
		var_22_object = var_28_object;
		func_3415(var_27_bool, var_28_object);
		var_27_bool = var_21_bool;
		return 0;
	}
	var_21_bool = false;
}


void func_1751(cvector var_0_cvector)
{
	var_0_cvector = true;
	@KillTimer(0);
	@Stop();
}


void func_3296(bool var_42_bool)
{
	object var_50_object; cvector var_52_cvector; cvector var_53_cvector; bool var_54_bool;
	@GetMainOutdoorScene(var_50_object);
	cvector var_51_cvector;
	@GetPosition(var_51_cvector);
	float var_55_float = 4000000;
	int var_56_int = 0;
	var_57_int = GlobalVars[1];
	GlobalVars[1] = 0;
	
	for(;;) {
		if(true != 0) {
			string var_59_string;
			func_3551(var_59_string);
			var_60_int = GlobalVars[1];
			var_50_object->GetLocator((var_59_string + (var_60_int + 1)), var_54_bool, var_52_cvector, var_53_cvector);
			if(!var_54_bool) { //@nz
			} else {
				var_68_int = GlobalVars[1];
				GlobalVars[1] = (var_68_int + 1);
			}
		}
		var_66_int = GlobalVars[1];
		@Trace("Pantrol point count: " + var_66_int);
		var_42_bool = true;

	}
}
EMIT "Stack[-7] = 0";


void func_2789(bool var_195_bool, object var_196_object)
{
	bool var_198_bool;
	var_196_object->IsDead(var_198_bool);
	var_198_bool = var_195_bool;
}


// @pe
void func_1767(bool var_706_bool, object var_707_object)
{
	object var_709_object;
	var_707_object = var_709_object;
	bool var_708_bool;
	func_2830(var_708_bool, var_709_object);
	var_708_bool = var_706_bool;
}


void func_2794(bool var_184_bool, object var_185_object)
{
	if(var_185_object == null) {
		var_184_bool = false;
		return 4;
	}
	bool var_191_bool = false;
	var_194_bool = IsFuncExist(var_185_object, "IsDead", 1);
	if(var_194_bool != 0) {
		bool var_195_bool; object var_196_object;
		var_185_object = var_196_object;
		func_2789(var_195_bool, var_196_object);
		if(var_195_bool != 0)
			var_191_bool = true;
	}
	if(var_191_bool != 0) {
		var_184_bool = false;
		return 4;
	}
	object var_188_object;
	@GetScene(var_188_object);
	if(var_188_object == null) {
		var_184_bool = false;
		return 4;
	}
	object var_189_object;
	var_185_object->GetScene(var_189_object);
	if(var_188_object != var_189_object) {
		var_184_bool = false;
		return 4;
	}
	var_184_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1774(string var_724_string)
{
	var_724_string = "walk";
}


void func_1263(object var_2_object, bool var_237_bool, object var_238_object, float var_239_float, float var_240_float, bool var_241_bool, bool var_242_bool)
{
	object var_247_object;
	func_3097(var_247_object);
	@SetTimer(1, 5);
	bool var_245_bool;
	@CanSee(var_245_bool, var_247_object);
	if(var_245_bool != 0) {
		var_2_object = true;
		object var_251_object;
		var_238_object = var_251_object;
		func_2996(var_251_object);
	} else {
		var_2_object = false;
	}
	bool var_258_bool; object var_259_object;
	func_2699(var_258_bool, var_259_object);
	if(var_258_bool != 0) {
		object var_262_object;
		func_3048(var_262_object);
		@SendPlayerEnemy(var_259_object, var_262_object);
	}
	bool var_263_bool; object var_264_object; float var_265_float; float var_266_float; bool var_267_bool; bool var_268_bool;
	var_238_object = var_264_object;
	var_239_float = var_265_float;
	var_240_float = var_266_float;
	var_241_bool = var_267_bool;
	var_242_bool = var_268_bool;
	bool var_246_bool;
	func_1368(var_245_bool, var_246_bool, var_263_bool, var_264_object, var_265_float, var_266_float, var_267_bool, var_268_bool);
	var_263_bool = var_246_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_246_bool = var_237_bool;
	
}


void func_1776(string var_725_string)
{
	var_725_string = "run";
}


// @pe
void func_1778(void)
{
	func_1833();
}


void func_754(int var_4_int)
{
	@Stop();
	@StopAnimation();
	@StopGroup0();
	var_4_int = true;
}


void func_762(cvector var_1_cvector, object var_2_object, bool var_5_bool)
{
	bool var_149_bool; bool var_150_bool; cvector var_151_cvector;
	var_1_cvector = 0;
	
	for(;;) {
		@HasAnimation(var_149_bool, "all", ("attack_begin" + (var_1_cvector + 1)));
		if(!var_149_bool) { //@nz
		} else {
			var_1_cvector += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_150_bool, ("attack" + (var_2_object + 1)));
			if(!var_150_bool) //@nz
				break;
			var_2_object += 1;
		}
		@GetAnimationOffset(var_151_cvector, "all", "bjump");
		var_165_float = GetByIndex(var_151_cvector, 2);
		var_5_bool = -var_165_float;

	}
}


// @pe
void func_3333(bool var_87_bool, int var_88_int)
{
	var_89_int = GlobalVars[2];
	if(var_88_int == var_89_int) {
		var_87_bool = false;
		return 0;
	}
	if(var_88_int == 0) {
		var_93_int = GlobalVars[3];
		var_94_int = GlobalVars[2];
		var_94_int = var_93_int;
		GlobalVars[3] = var_93_int;
		@Trace("changing state to c_iStateWaitForLoad");
	} else if(var_88_int == 1) {
			@Trace("changing state to c_iStateHeatHands");
	}

	for(;;) {
		var_96_int = GlobalVars[2];
		var_88_int = var_96_int;
		GlobalVars[2] = var_96_int;
		var_87_bool = true;
		return 0;

	}
	
	if(var_88_int == 2) {
		@Trace("changing state to c_iStateIdle");
	} else if(var_88_int == 3) {
		@Trace("changing state to c_iStatePatrol");
	}
	var_87_bool = false;
}


void func_2830(bool var_180_bool, object var_181_object)
{
	object var_185_object;
	var_181_object = var_185_object;
	bool var_184_bool;
	func_2794(var_184_bool, var_185_object);
	if(!var_184_bool) { //@nz
		var_180_bool = false;
		return 2;
	}
	bool var_202_bool; object var_203_object;
	func_2704(var_202_bool, var_203_object, "noaccess");
	if(!var_202_bool) { //@nz
		var_180_bool = true;
		return 2;
	}
	int var_183_int;
	var_203_object->GetProperty("noaccess", var_183_int);
	var_180_bool = var_183_int == 0;
}


void func_797(cvector var_0_cvector, float var_497_float, int var_498_int)
{
	object var_502_object; float var_503_float; float var_504_float;
	@GetVictim((var_497_float * 0.9), var_502_object);
	@ReportAttack(var_0_cvector);
	if(var_502_object == var_0_cvector) {
		float var_508_float; object var_509_object; int var_510_int;
		var_502_object = var_509_object;
		var_498_int = var_510_int;
		func_451(var_510_int);
		var_508_float = var_503_float;
		float var_511_float; object var_512_object; float var_513_float; int var_514_int;
		var_502_object = var_512_object;
		int var_515_int; object var_516_object; int var_517_int;
		var_502_object = var_516_object;
		var_498_int = var_517_int;
		func_454(var_517_int);
		var_515_int = var_514_int;
		func_2716(var_511_float, var_512_object, var_513_float, var_514_int);
		var_511_float = var_504_float;
		int var_572_int;
		func_457(var_572_int);
		@ReportHit(var_0_cvector, var_572_int, var_504_float, var_513_float);
		object var_573_object; float var_574_float;
		var_502_object = var_573_object;
		var_504_float = var_574_float;
		func_1206();
	}
}
EMIT "Stack[-3] = 0";


// @pe
void func_1312(cvector var_1_cvector, int var_27_int)
{
	if(var_27_int == 1) {
		func_3097(var_1_cvector);
	} else {
		int var_35_int;
		func_1470(var_22_object, var_35_int, var_35_int);
	}
	
}


void func_2854(object var_37_object)
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


void func_1833(void)
{
	int var_844_int; int var_845_int; bool var_846_bool; float var_847_float; bool var_848_bool;
	@WaitForAnimEnd();
	bool var_849_bool;
	func_2991(var_849_bool);
	if(!var_849_bool) //@nz
		return 14;
	int var_851_int;
	func_3113(var_851_int);
	int var_842_int;
	var_851_int = var_842_int;
	int var_843_int = 0;
	
	for(;;) {
		bool var_864_bool = false;
		if(var_843_int < 5) {
			bool var_867_bool;
			func_2991(var_867_bool);
			if(var_867_bool != 0)
				var_864_bool = true;
		}
		if(var_864_bool != 0) {
			@irand(var_844_int, 3);
			if(var_844_int == 0) {
				if(var_842_int == 0) goto Label_1880;
				@irand(var_845_int, var_842_int);
				string var_873_string; int var_874_int;
				var_845_int = var_874_int;
				func_3106(var_873_string, var_874_int);
				@PlayAnimation("all", var_873_string);
				@WaitForAnimEnd(var_846_bool);
				if(!var_846_bool) { //@nz
				} else {
			} else {
			if(var_844_int == 1) {
				@rand(var_847_float, 4);
				@Sleep((var_847_float + 1), var_848_bool);
				if(!var_848_bool) { //@nz
					goto Label_1909;
				}
			} else if(var_843_int != 0) {
				goto Label_1909;
			}
			}
					bool var_876_bool;
					func_1912(var_876_bool);
					var_877_bool = !var_876_bool; //@nz
					if(var_877_bool == 0) goto Label_1904;
			}
		}
	Label_1909:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_1904:
		@ResetAAS();
		var_843_int += 1;
	}
	
}


void func_2346(cvector var_0_cvector)
{
	var_0_cvector = true;
	@KillTimer(0);
	@Stop();
}


void func_1326(object var_2_object)
{
	@KillTimer(1);
	if(var_2_object != 0) {
		var_2_object = false;
		@UnlookAsync("head");
	}
	func_1492(var_20_bool);
}


// @pe
void func_3379(bool var_43_bool, object var_44_object)
{
	var_45_int = GlobalVars[2];
	if(var_45_int == 4)
		var_43_bool = false;
	var_48_int = GlobalVars[2];
	GlobalVars[2] = 4;
	@Trace("changing state to c_iStateAware");
	var_50_object = GlobalVars[4];
	var_44_object = var_50_object;
	GlobalVars[4] = var_50_object;
	var_43_bool = true;
}


void func_2362(string var_821_string)
{
	var_821_string = "walk";
}


void func_2364(string var_822_string)
{
	var_822_string = "run";
}


void func_2366(int var_640_int)
{
	int var_643_int = 0;
	
	for(;;) {
		if(var_643_int < var_640_int) {
			func_2436("hunt");
			if(var_0_cvector != 0) {
			} else {
				var_643_int += 1;
			}
		}

	}
}


void func_836(cvector var_0_cvector, cvector var_1_cvector, bool var_462_bool, float var_463_float)
{
	string var_471_string;
	func_1196(var_471_string);
	int var_468_int;
	@irand(var_468_int, var_1_cvector);
	@Face(var_0_cvector);
	@SetAttackState(true);
	@PlayAnimation("all", ("attack_begin" + (var_468_int + 1)));
	@WaitForAnimEnd();
	int var_470_int;
	func_1164(var_470_int, var_471_string);
	bool var_492_bool = true;
	bool var_493_bool;
	func_2830(var_493_bool, var_0_cvector);
	var_495_bool = !var_493_bool; //@nz
	if(var_495_bool != 1) {
		if(var_4_int != 1)
			var_492_bool = false;
	}
	if(var_492_bool != 0) {
		@StopAsync();
		var_462_bool = false;
		return 8;
	}
	float var_497_float; int var_498_int;
	var_463_float = var_497_float;
	var_468_int = var_498_int;
	func_797(var_471_string, var_497_float, var_498_int);
	bool var_469_bool;
	@HasAnimation(var_469_bool, "all", ("attack_middle" + var_468_int));
	if(var_469_bool != 0) {
		@PlayAnimation("all", ("attack_middle" + var_468_int));
		@WaitForAnimEnd();
		func_1196(var_471_string);
		bool var_582_bool = true;
		bool var_583_bool;
		func_2830(var_583_bool, var_0_cvector);
		var_585_bool = !var_583_bool; //@nz
		if(var_585_bool != 1) {
			if(var_4_int != 1)
				var_582_bool = false;
		}
		if(var_582_bool != 0) {
			@StopAsync();
			var_462_bool = false;
			return 8;
		}
		float var_587_float; int var_588_int;
		var_463_float = var_587_float;
		func_797(var_471_string, var_587_float, var_588_int);
		var_470_int = 1;

		for(;;) {
			var_471_string = (("attack_middle" + var_588_int) + "_") + var_470_int;
			@HasAnimation(var_469_bool, "all", var_471_string);
			if(!var_469_bool) { //@nz
			} else {
				@PlayAnimation("all", var_471_string);
				@WaitForAnimEnd();
				func_1196(var_471_string);
				bool var_610_bool = true;
				bool var_611_bool;
				func_2830(var_611_bool, var_0_cvector);
				var_613_bool = !var_611_bool; //@nz
				if(var_613_bool != 1) {
					if(var_4_int != 1)
						var_610_bool = false;
				}
				if(var_610_bool != 0) {
					@StopAsync();
					var_462_bool = false;
					return 8;
				}
				float var_615_float; int var_616_int;
				var_463_float = var_615_float;
				var_468_int = var_616_int;
				func_797(var_471_string, var_615_float, var_616_int);
				var_470_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_468_int));
		bool var_599_bool;
		func_1208(var_599_bool);
		if(var_599_bool != 0) {
			bool var_600_bool;
			func_982(var_600_bool, 0.75);
			@StopAsync();
		}
		var_462_bool = true;
		return 8;

	}
}


// @pe
void func_3397(bool var_47_bool, object var_48_object)
{
	var_49_int = GlobalVars[2];
	if(var_49_int == 5)
		var_47_bool = false;
	var_52_int = GlobalVars[2];
	GlobalVars[2] = 5;
	@Trace("changing state to c_iStateSearchEnemy");
	var_54_object = GlobalVars[5];
	var_48_object = var_54_object;
	GlobalVars[5] = var_54_object;
	var_47_bool = true;
}


void func_2898(object var_24_object, int var_25_int, float var_26_float)
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
		func_2692(var_54_cvector, var_55_object);
		var_54_cvector = var_53_cvector;
		func_3054(var_52_cvector, var_53_cvector);
		var_52_cvector = var_36_cvector;
		@CreateVectorVector(var_37_object);
		var_38_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_38_int), var_39_bool, var_40_cvector, var_41_cvector);
			if(!var_39_bool) { //@nz
				break;
			Label_2960:
				var_37_object = null;
	}
			object var_114_object;
			var_24_object = var_114_object;
			func_2854(var_114_object);
		}
		if((var_41_cvector | var_36_cvector) >= 0.70710677)
			var_37_object->add(var_40_cvector);
		var_38_int += 1;
	}
	int var_42_int;
	var_37_object->size(var_42_int);
	if(var_42_int == 0) goto Label_2960;
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
	func_2966(var_71_float, var_72_cvector, var_73_cvector);
}


// @pe
void func_3415(bool var_27_bool, object var_28_object)
{
	var_29_int = GlobalVars[2];
	if(var_29_int == 6)
		var_27_bool = false;
	var_32_int = GlobalVars[2];
	GlobalVars[2] = 6;
	@Trace("changing state to c_iStateHearEnemy");
	var_34_object = GlobalVars[6];
	var_28_object = var_34_object;
	GlobalVars[6] = var_34_object;
	var_27_bool = true;
}


void func_1368(cvector var_0_cvector, cvector var_1_cvector, bool var_263_bool, object var_264_object, float var_265_float, float var_266_float, bool var_267_bool, bool var_268_bool)
{
	bool var_277_bool; object var_279_object; cvector var_280_cvector; cvector var_281_cvector; float var_283_float; object var_284_object;
	var_0_cvector = false;
	var_1_cvector = var_264_object;
	bool var_278_bool;
	var_268_bool = var_278_bool;
	
	for(;;) {
		bool var_285_bool; object var_286_object;
		var_264_object = var_286_object;
		func_1508(var_285_bool, var_286_object);
		if(!var_285_bool) { //@nz
			var_263_bool = false;
			return 16;
		}
		var_264_object->GetPosition(var_280_cvector);
		@GetPosition(var_281_cvector);
		var_283_float = (var_280_cvector - var_281_cvector) | (var_280_cvector - var_281_cvector);
		bool var_290_bool = false;
		if(var_266_float > 0) {
			if(var_283_float > (var_266_float * var_266_float))
				var_290_bool = true;
		}
		if(var_290_bool != 0) {
			@Stop();
			var_263_bool = false;
			return 16;
		}
		if(var_283_float > (var_265_float * var_265_float)) {
			var_264_object->GetPFPosition(var_280_cvector);
			@FindPathTo(var_284_object, var_280_cvector);
			if(var_284_object != null) {
				var_284_object = var_279_object;
				var_284_object = null;
			}
			if(var_279_object != null) {
				if(var_278_bool == 0) goto Label_1421;
				var_278_bool = false;
				@RotatePath(var_279_object, var_277_bool);
				if(!var_277_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_303_string;
						func_1515(var_303_string);
						string var_304_string;
						func_1517(var_304_string);
						@FollowPath(var_279_object, var_267_bool, var_277_bool, var_303_string, var_304_string);
						if(!var_277_bool) { //@nz
							if(var_0_cvector == 0) goto Label_1440;
							var_279_object = null;
						}
					EMIT "GOTO 0x5a1";

					Label_1440:
						} else {
					var_279_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_277_bool);
					if(!var_277_bool) { //@nz
						if(var_0_cvector != 0) {
							var_279_object = null;
							goto Label_1468;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1468;
		}
			var_284_object = null;
			goto Label_1466;

		Label_1466:
			var_279_object = null;

		}
	Label_1468:
		for(;;) {
			var_263_bool = !var_0_cvector;
			return 16;

			}
	}
	
}


// @pe
void func_3433(bool var_21_bool, object var_22_object)
{
	var_23_int = GlobalVars[2];
	if(var_23_int == 7)
		var_21_bool = false;
	var_26_int = GlobalVars[2];
	GlobalVars[2] = 7;
	@Trace("changing state to c_iStateAttack");
	var_28_object = GlobalVars[7];
	var_22_object = var_28_object;
	GlobalVars[7] = var_28_object;
	var_21_bool = true;
}


void func_1912(bool var_876_bool)
{
	var_876_bool = true;
}


void func_1914(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_3451(bool var_991_bool)
{
	string var_994_string;
	func_3557(var_994_string);
	int var_993_int;
	@GetVariable((var_994_string + "_locked"), var_993_int);
	var_991_bool = var_993_int != 0;
}


// @pe
void func_1919(bool var_889_bool, cvector var_890_cvector, cvector var_891_cvector, bool var_892_bool)
{
	var_894_float = GetByIndex(var_890_cvector, 1);
	SetByIndex(var_890_cvector, 1) = (var_894_float + 30);
	bool var_896_bool; cvector var_897_cvector; cvector var_898_cvector; bool var_901_bool;
	var_890_cvector = var_897_cvector;
	var_891_cvector = var_898_cvector;
	func_1988(var_901_bool, var_896_bool, var_897_cvector, var_898_cvector, (float)100, (float)4000, var_901_bool, true);
	var_896_bool = var_889_bool;
}


void func_2436(string var_645_string)
{
	@WaitForAnimEnd();
	bool var_650_bool;
	func_2991(var_650_bool);
	if(!var_650_bool) //@nz
		return 4;
	bool var_648_bool;
	@HasAnimation(var_648_bool, "all", var_645_string);
	if(!var_648_bool) //@nz
		return 4;
	@PlayAnimation("all", var_645_string);
	bool var_649_bool;
	@WaitForAnimEnd(var_649_bool);
}


// @pe
void func_3462(bool var_755_bool)
{
	string var_756_string;
	func_3557(var_756_string);
	if(var_755_bool != 0)
		var_760_int = 1;
	else
		var_761_int = 0; //@pi
	@SetVariable((var_756_string + "_locked"), var_760_int);
	
}


void func_3476(bool var_977_bool)
{
	string var_980_string;
	func_3551(var_980_string);
	int var_979_int;
	@GetVariable((var_980_string + "_locked"), var_979_int);
	int var_983_int;
	func_3559(var_983_int);
	var_977_bool = var_979_int >= var_983_int;
}


void func_2966(object var_26_object, cvector var_29_cvector, cvector var_30_cvector)
{
	object var_33_object;
	@GetScene(var_33_object);
	object var_34_object;
	@AddActorByType(var_34_object, "scripted", var_33_object, var_29_cvector, var_30_cvector, "blood_dir.xml");
	object var_37_object;
	var_26_object = var_37_object;
	func_2854(var_37_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2457(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_2462(object var_21_object)
{
	var_23_int = GlobalVars[2];
	if(1 == var_23_int)
		func_3462(false);
	var_33_int = GlobalVars[2];
	if(3 == var_33_int)
		func_3489(false);
	func_3561();
	object var_69_object;
	var_21_object = var_69_object;
	func_2495(var_69_object);
}


void func_3489(bool var_1004_bool)
{
	string var_1007_string;
	func_3551(var_1007_string);
	int var_1006_int;
	@GetVariable((var_1007_string + "_locked"), var_1006_int);
	if(var_1004_bool != 0)
		var_1006_int += 1;
	else
		var_1006_int += -1;
	string var_1012_string;
	func_3551(var_1012_string);
	@SetVariable((var_1012_string + "_locked"), var_1006_int);
	
}


void func_2980(object var_341_object)
{
	cvector var_345_cvector;
	var_341_object->GetPosition(var_345_cvector);
	cvector var_346_cvector;
	@GetPosition(var_346_cvector);
	cvector var_347_cvector = var_345_cvector - var_346_cvector;
	var_348_float = GetByIndex(var_347_cvector, 0);
	var_349_float = GetByIndex(var_347_cvector, 2);
	@RotateAsync(var_348_float, var_349_float);
}


void func_2991(bool var_83_bool)
{
	bool var_85_bool;
	@IsLoaded(var_85_bool);
	var_85_bool = var_83_bool;
}


// @pe
void func_435(float var_7_float, object var_109_object)
{
	var_7_float = var_109_object;
	@SetTimer(1, 1);
	object var_121_object;
	func_504(var_114_bool, var_115_bool, var_116_float, var_117_int, var_118_object, var_121_object, var_121_object, true, 150.0);
	@KillTimer(1);
}


void func_2996(object var_251_object)
{
	float var_254_float;
	var_251_object->GetEyesHeight(var_254_float);
	cvector var_255_cvector = [0.0, 0.0, 0.0];
	var_256_float = GetByIndex(var_255_cvector, 1);
	var_254_float = var_256_float;
	SetByIndex(var_255_cvector, 1) = var_256_float;
	@LookAsync(var_251_object, "head", var_255_cvector);
}


// @pe
void func_1470(cvector var_0_cvector, cvector var_1_cvector, int var_35_int)
{
	if(var_35_int != 0)
		return 0;
	bool var_38_bool;
	func_1508(var_38_bool, var_1_cvector);
	if(!var_38_bool) //@nz
		var_0_cvector = true;
	@KillTimer(0);
	@Stop();
}


void func_3007(string var_366_string)
{
	bool var_375_bool; int var_376_int; bool var_377_bool; int var_378_int; bool var_379_bool; float var_380_float; cvector var_381_cvector; cvector var_382_cvector;
	@IsExisting3DSound(var_375_bool, var_366_string);
	if(!var_375_bool) { //@nz
		var_376_int = 0;

		for(;;) {
			@IsExisting3DSound(var_377_bool, (var_366_string + (var_376_int + 1)));
			if(!var_377_bool) { //@nz
				break;
			Label_3027:
				@irand(var_378_int, var_376_int);
				var_366_string += (var_378_int + 1);
	}
			@Is3DSoundLoaded(var_379_bool, var_366_string);
			if(var_379_bool != 0) {
				@GetEyesHeight(var_380_float);
				@GetDirection(var_381_cvector);
				var_382_cvector = var_381_cvector * 50;
				var_393_float = GetByIndex(var_382_cvector, 1);
				SetByIndex(var_382_cvector, 1) = (var_393_float + var_380_float);
				@PlayGlobalSound(var_366_string, var_382_cvector);
			}
		}
		var_376_int += 1;
	}
	var_388_bool = !var_376_int; //@nz
	if(var_388_bool == 0) goto Label_3027;
}


// @pe
void func_2495(object var_69_object)
{
	object var_70_object;
	var_69_object = var_70_object;
	func_2520(var_70_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1986(bool var_919_bool)
{
	var_919_bool = true;
}


// @pe
void func_451(float var_508_float)
{
	var_508_float = 0.1;
}


void func_1988(cvector var_0_cvector, bool var_896_bool, cvector var_897_cvector, cvector var_898_cvector, float var_899_float, float var_900_float, bool var_901_bool, bool var_902_bool)
{
	bool var_911_bool; object var_913_object; cvector var_914_cvector; cvector var_915_cvector; float var_917_float; object var_918_object;
	var_0_cvector = false;
	bool var_912_bool;
	var_902_bool = var_912_bool;
	
	for(;;) {
		bool var_919_bool;
		func_1986(var_919_bool);
		if(!var_919_bool) { //@nz
			var_896_bool = false;
			return 16;
		}
		var_897_cvector = var_914_cvector;
		@GetPosition(var_915_cvector);
		var_917_float = (var_914_cvector - var_915_cvector) | (var_914_cvector - var_915_cvector);
		bool var_921_bool = false;
		if(var_900_float > 0) {
			if(var_917_float > (var_900_float * var_900_float))
				var_921_bool = true;
		}
		if(var_921_bool != 0) {
			@Stop();
			var_896_bool = false;
			return 16;
		}
		if(var_917_float > (var_899_float * var_899_float)) {
			@FindPathTo(var_918_object, var_914_cvector);
			if(var_918_object != null) {
				var_918_object = var_913_object;
				var_918_object = null;
			}
			if(var_913_object != null) {
				if(var_912_bool == 0) goto Label_2036;
				var_912_bool = false;
				@RotatePath(var_913_object, var_911_bool);
				if(!var_911_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_937_string;
						func_2128(var_937_string);
						string var_938_string;
						func_2130(var_938_string);
						@FollowPath(var_913_object, var_901_bool, var_911_bool, var_937_string, var_938_string);
						if(!var_911_bool) { //@nz
							if(var_0_cvector == 0) goto Label_2055;
							var_913_object = null;
						}
					EMIT "GOTO 0x808";

					Label_2055:
						} else {
					var_913_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_911_bool);
					if(!var_911_bool) { //@nz
						if(var_0_cvector != 0) {
							var_913_object = null;
							goto Label_2083;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_2083;
		}
			var_918_object = null;
			goto Label_2081;

		Label_2081:
			var_913_object = null;

		}
	Label_2083:
		for(;;) {
			if(!var_0_cvector) { //@nz
				var_933_float = GetByIndex(var_898_cvector, 0);
				var_934_float = GetByIndex(var_898_cvector, 2);
				@RotateAsync(var_933_float, var_934_float);
			}
			var_896_bool = !var_0_cvector;
			return 16;

			}
	}
	
}


// @pe
void func_454(int var_515_int)
{
	var_515_int = 0;
}


void func_457(int var_572_int)
{
	var_572_int = 0;
}


void func_1492(cvector var_0_cvector)
{
	var_0_cvector = true;
	@KillTimer(0);
	@Stop();
}


void func_982(bool var_600_bool, float var_601_float)
{
	float var_604_float; bool var_605_bool;
	@rand(var_604_float);
	if(var_604_float < var_601_float) {

		for(;;) {
			@IsAnimationPlaying(var_605_bool);
			if(!var_605_bool) { //@nz
			} else {
				bool var_608_bool;
				func_1092(var_608_bool);
				if(var_608_bool != 0) {
					var_600_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_600_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_1196(var_605_bool);
}


void func_2520(object var_70_object)
{
	cvector var_81_cvector; cvector var_82_cvector; cvector var_83_cvector; cvector var_84_cvector; string var_85_string; object var_86_object; bool var_87_bool; bool var_88_bool; float var_89_float; cvector var_90_cvector;
	if(var_70_object == null) {
		func_2611("fdie");
	} else {
		var_70_object->GetPosition(var_81_cvector);
		@GetPosition(var_82_cvector);
		@GetDirection(var_83_cvector);
		var_84_cvector = var_82_cvector - var_81_cvector;
		var_124_float = GetByIndex(var_84_cvector, 0);
		var_125_float = GetByIndex(var_83_cvector, 0);
		var_127_float = GetByIndex(var_84_cvector, 2);
		var_128_float = GetByIndex(var_83_cvector, 2);
		if(((var_124_float * var_125_float) + (var_127_float * var_128_float)) >= 0)
			var_85_string = "fdie";
		else
			var_85_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_70_object = var_86_object;
		var_135_bool = IsFuncExist(var_70_object, "GetScriptProperty", 2);
		if(var_135_bool != 0) {
			var_70_object->HasScriptProperty(var_87_bool, "Owner");
			if(var_87_bool != 0) {
				var_70_object->GetScriptProperty(var_86_object, "Owner");
				if(var_86_object == null)
					var_70_object = var_86_object;
			}
		}
		var_142_bool = IsFuncExist(var_86_object, "@GetEyesHeight", 1);
		if(var_142_bool != 0) {
			var_86_object->GetEyesHeight(var_89_float);
			var_90_cvector = [0.0, 0.0, 0.0];
			var_143_float = GetByIndex(var_90_cvector, 1);
			var_89_float = var_143_float;
			SetByIndex(var_90_cvector, 1) = var_143_float;
			@LookAsync(var_70_object, "head", var_90_cvector);
			var_88_bool = true;
		} else {
			var_88_bool = false;

		}
		string var_145_string;
		var_85_string = var_145_string;
		func_3007(var_145_string);
		@PlayAnimation("all", var_85_string);
		@WaitForAnimEnd();
		if(var_88_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_85_string);
		@RemoveEnvelope();
		var_86_object = null;
	}
	
}


void func_3551(string var_59_string)
{
	var_59_string = "pt_d7q04_patrol";
}


void func_3553(string var_55_string)
{
	var_55_string = "d7q04_helpme";
}


void func_3555(string var_1077_string)
{
	var_1077_string = "d7q04_corpse";
}


// @pe
void func_1508(bool var_285_bool, object var_286_object)
{
	object var_288_object;
	var_286_object = var_288_object;
	bool var_287_bool;
	func_2830(var_287_bool, var_288_object);
	var_287_bool = var_285_bool;
}


void func_3557(string var_756_string)
{
	var_756_string = "pt_d7q04_bonfire";
}


void func_3559(int var_983_int)
{
	var_983_int = 3;
}


void func_3048(object var_72_object)
{
	object var_74_object;
	@self(var_74_object);
	var_74_object = var_72_object;
}
EMIT "Stack[-1] = 0";


void func_3561(void)
{
	object var_51_object;
	@CreateInvItem(var_51_object);
	float var_52_float;
	@rand(var_52_float, 40, 80);
	float var_53_float;
	@rand(var_53_float, 5, 20);
	var_51_object->SetItemName("grass_combination");
	var_51_object->SetProperty("im_inc", (var_52_float / 100.0));
	var_51_object->SetProperty("hl_inc", (-(var_53_float / 100.0)));
	bool var_54_bool;
	@AddItem(var_54_bool, var_51_object, 0, 1);
}
EMIT "Stack[-4] = 0";


void func_1515(string var_303_string)
{
	var_303_string = "walk";
}


void func_1517(string var_304_string)
{
	var_304_string = "run";
}


void func_3054(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_61_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_61_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_61_float;
}


// @pe
void func_1519(object var_670_object, float var_671_float)
{
	object var_677_object;
	var_670_object = var_677_object;
	bool var_676_bool;
	func_2830(var_676_bool, var_677_object);
	if(!var_676_bool) { //@nz
		bool var_679_bool;
		func_3333(var_679_bool, 2);
		return 0;
	}
	if(var_671_float > 0) {
		@SetTimer(3, var_671_float);
		bool var_684_bool; object var_685_object;
		func_1627(var_685_object, var_671_float, var_684_bool, var_685_object, 350.0, (float)6000, true, true);
		@KillTimer(3);
	} else {
		bool var_736_bool; object var_737_object;
		func_1627(var_737_object, var_671_float, var_736_bool, var_737_object, 350.0, (float)6000, true, true);
	}
	
}


void func_1009(cvector var_0_cvector, bool var_397_bool, float var_398_float)
{
	bool var_404_bool; cvector var_405_cvector; cvector var_406_cvector; cvector var_407_cvector; float var_408_float;
	
	for(;;) {
		@IsAnimationPlaying(var_404_bool);
		if(!var_404_bool) //@nz
			break;
		bool var_410_bool;
		func_1092(var_410_bool);
		if(var_410_bool != 0) {
			var_397_bool = true;
			return 10;
		}
		bool var_455_bool = true;
		bool var_456_bool;
		func_2830(var_456_bool, var_0_cvector);
		var_458_bool = !var_456_bool; //@nz
		if(var_458_bool != 1) {
			if(var_4_int != 1)
				var_455_bool = false;
		}
		if(var_455_bool != 0) {
			var_397_bool = false;
			return 10;
		}
		var_0_cvector->GetPFPosition(var_405_cvector); //@t
		@GetPFPosition(var_406_cvector);
		var_407_cvector = var_405_cvector - var_406_cvector;
		var_408_float = var_407_cvector | var_407_cvector;
		if(var_408_float < (var_398_float * var_398_float)) {
			bool var_462_bool; float var_463_float;
			var_398_float = var_463_float;
			func_836(var_407_cvector, var_408_float, var_462_bool, var_463_float);
			var_397_bool = true;
			return 10;
		}
		@sync();
	}
	func_1196(var_408_float);
	var_397_bool = false;
}


void func_504(cvector var_0_cvector, int var_3_int, int var_4_int, bool var_6_bool, object var_121_object, bool var_122_bool, float var_123_float, bool var_229_bool, bool var_335_bool)
{
	float var_135_float; cvector var_136_cvector; cvector var_137_cvector; bool var_139_bool; float var_142_float; cvector var_143_cvector; bool var_144_bool; float var_145_float;
	func_762(var_143_cvector, var_144_bool, var_145_float);
	var_6_bool = 0;
	var_170_bool = IsFuncExist(var_121_object, "@GetAttackDistance", 1);
	if(var_170_bool != 0) {
		var_121_object->GetAttackDistance(var_135_float);
		var_135_float += 50;
	} else {
						var_123_float = var_135_float;
	}
	if(var_135_float >= 150)
		var_135_float = 150;
	var_0_cvector = var_121_object;
	bool var_138_bool;
	@IsPlayerActor(var_0_cvector, var_138_bool);
	if(var_138_bool != 0)
		@PlayGlobalMusic("attack");
	if(var_122_bool != 0)
		var_139_bool = false;
	else
		var_139_bool = true;

	
Label_539:
	for(;;) {
		bool var_178_bool = false;
		bool var_179_bool = false;
		bool var_180_bool;
		func_2830(var_180_bool, var_0_cvector);
		if(var_180_bool != 0) {
			if(!false) //@nz
				var_179_bool = true;
		}
		if(var_179_bool != 0) {
			if(!var_4_int) //@nz
				var_178_bool = true;
		}
		if(var_178_bool != 0) {
			func_1196(var_145_float);
			var_0_cvector->GetPFPosition(var_136_cvector); //@t
			@GetPFPosition(var_137_cvector);
			var_142_float = (var_136_cvector - var_137_cvector) | (var_136_cvector - var_137_cvector);
			if(var_142_float >= ((300.0 + var_135_float) * (300.0 + var_135_float))) {
				bool var_223_bool; float var_225_float;
				var_135_float = var_225_float;
				TaskCall(2);
				func_1214(var_232_object, var_223_bool, var_0_cvector, var_225_float, 2000.0, true, false);
				TaskReturn();
				if(!var_229_bool) { //@nz
					var_3_int = true;
				} else {
					var_139_bool = false;
			} else {
			if(var_142_float >= (var_123_float * var_123_float)) {
				var_0_cvector->GetPFPosition(var_143_cvector); //@t
				@CanReachByPF(var_144_bool, var_143_cvector);
				if(!var_144_bool) { //@nz
					bool var_329_bool; float var_331_float;
					var_135_float = var_331_float;
					TaskCall(2);
					func_1214(var_338_object, var_329_bool, var_0_cvector, var_331_float, 2000.0, true, false);
					TaskReturn();
					if(!var_335_bool) { //@nz
						var_3_int = true;
						goto Label_731;
					}
					var_139_bool = false;
					goto Label_539;
				}
				if(!var_139_bool) { //@nz
					func_2980(var_0_cvector);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_1196(var_145_float);
					@StopAsync();
					var_139_bool = true;
					bool var_352_bool = true;
					bool var_353_bool;
					func_2830(var_353_bool, var_0_cvector);
					var_355_bool = !var_353_bool; //@nz
					if(var_355_bool != 1) {
						if(var_4_int != 1)
							var_352_bool = false;
					}
					if(var_352_bool != 0) {
						goto Label_731;
					}
				}
				@rand(var_145_float);
				bool var_357_bool;
				var_359_bool = var_145_float < 0.6;
				if(var_359_bool != 1) {
					bool var_360_bool;
					func_1153(true, var_360_bool);
					if(var_360_bool != 1)
						var_357_bool = false;
				}
				if(var_357_bool != 0) {
					@Face(var_0_cvector);
					func_1201();
					@PlayAnimation("all", "attack_stay");
					bool var_397_bool; float var_398_float;
					func_1009(var_145_float, var_397_bool, var_398_float);
					@StopAsync();
				} else {
					@Face(var_0_cvector);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_1196(var_145_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_621_bool;
					func_1153(var_145_float, var_621_bool);
					var_622_bool = !var_621_bool; //@nz
					if(var_622_bool == 0) goto Label_721;
					bool var_623_bool = true;
					bool var_624_bool;
					func_2830(var_624_bool, var_0_cvector);
					var_626_bool = !var_624_bool; //@nz
					if(var_626_bool != 1) {
						if(var_4_int != 1)
							var_623_bool = false;
					}
					if(var_623_bool != 0) {
						goto Label_731;
					}
					var_0_cvector->GetPFPosition(var_136_cvector); //@t
					@GetPFPosition(var_137_cvector);
					if(!(((var_136_cvector - var_137_cvector) | (var_136_cvector - var_137_cvector)) < (var_398_float * var_398_float))) goto Label_721;
					bool var_630_bool; float var_631_float;
					var_123_float = var_631_float;
					func_836(var_144_bool, var_145_float, var_630_bool, var_631_float);
					var_632_bool = !var_630_bool; //@nz
					if(var_632_bool == 0) goto Label_721;
					goto Label_731;
			}
				bool var_633_bool; float var_634_float;
				var_123_float = var_634_float;
				func_836(var_144_bool, var_145_float, var_633_bool, var_634_float);
				if(!var_633_bool) { //@nz
					goto Label_731;
				}
				var_139_bool = true;

			}
		Label_721:
			goto Label_730;
			}
			Label_730:
			}
		}
	Label_731:
		@WaitForAnimEnd();
		bool var_319_bool = true;
		if(var_3_int != 1) {
			if(var_4_int != 1)
				var_319_bool = false;
		}
		if(var_319_bool != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_138_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


// @pe
void func_3071(float var_559_float, float var_560_float, float var_561_float, float var_562_float)
{
	if(var_560_float < var_561_float) {
		var_561_float = var_559_float;
		return 0;
	}
	if(var_560_float > var_562_float) {
		var_562_float = var_559_float;
		return 0;
	}
	var_560_float = var_559_float;
}



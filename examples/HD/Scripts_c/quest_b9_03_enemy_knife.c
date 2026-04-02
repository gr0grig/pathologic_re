// @GLOBALS: 0:bool:,1:int:,2:int:,3:int:,4:int:,5:object:,6:object:,7:object:,8:object:

maintask task_0
{
	void init(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		object var_31_object; int var_32_int; bool var_33_bool; int var_34_int; bool var_35_bool; cvector var_36_cvector; cvector var_37_cvector; int var_38_int; cvector var_39_cvector; cvector var_40_cvector; object var_41_object;
		bool var_42_bool;
		func_3517(var_42_bool);
		if(!var_42_bool) { //@nz
			@Trace("FSM Init failed");
			object var_102_object;
			func_3168(var_102_object);
			@RemoveActor(var_102_object);
			return 22;
		}
		@SetProperty("noaccess", 0);
		@GetPosition(var_0_cvector);
		@GetDirection(var_1_cvector);
		var_107_int = GlobalVars[3];
		GlobalVars[3] = 0;
		var_108_int = GlobalVars[4];
		GlobalVars[4] = 2;
	
		for(;;) {
			if(true != 0) {
				var_111_int = GlobalVars[3];
				if(0 == var_111_int) {
					TaskCall(9);
					func_2752();
					TaskReturn();
					bool var_119_bool;
					func_3601(var_119_bool, 2);
				} else {
				var_139_int = GlobalVars[3];
				if(7 == var_139_int) {
					object var_141_object;
					var_142_object = GlobalVars[8];
					var_142_object = var_141_object;
					TaskCall(1);
					func_445(var_150_object, var_141_object);
					TaskReturn();
					var_675_int = GlobalVars[3];
					if(7 == var_675_int) {
						TaskCall(7);
						func_2385(1);
						TaskReturn();
						var_695_int = GlobalVars[3];
						if(7 == var_695_int) {
							bool var_697_bool;
							func_3601(var_697_bool, 2);
						}
					}
					goto Label_441;
				}
				var_700_int = GlobalVars[3];
				if(6 == var_700_int) {
					TaskCall(7);
					func_2385(1);
					TaskReturn();
					var_705_int = GlobalVars[3];
					if(6 == var_705_int) {
						object var_707_object;
						var_709_object = GlobalVars[7];
						var_709_object = var_707_object;
						TaskCall(3);
						func_1536(var_707_object, (float)8);
						TaskReturn();
						var_780_int = GlobalVars[3];
						if(6 == var_780_int) {
							TaskCall(7);
							func_2385(1);
							TaskReturn();
							var_785_int = GlobalVars[3];
							if(6 == var_785_int) {
								bool var_787_bool;
								func_3601(var_787_bool, 2);
							}
						}
					}
					goto Label_441;
				}
				var_790_int = GlobalVars[3];
				if(1 == var_790_int) {
					func_3730(true);
					bool var_801_bool;
					TaskCall(6);
					func_2149(var_801_bool);
					TaskReturn();
					var_876_int = GlobalVars[3];
					if(1 == var_876_int) {
						TaskCall(4);
						func_1795();
						TaskReturn();
						var_930_int = GlobalVars[3];
						if(1 == var_930_int) {
							bool var_932_bool;
							TaskCall(5);
							func_1936(var_932_bool, var_0_cvector, var_1_cvector, false);
							TaskReturn();
							var_992_int = GlobalVars[3];
							if(1 == var_992_int) {
								bool var_994_bool;
								func_3601(var_994_bool, 2);
							}
						}
					}
					func_3730(false);
					goto Label_441;
				}
				var_998_int = GlobalVars[3];
				if(2 == var_998_int) {
					bool var_1000_bool;
					func_0(var_41_object, var_1000_bool);
					if(!var_1000_bool) { //@nz
						bool var_1009_bool;
						TaskCall(5);
						func_1936(var_1009_bool, var_0_cvector, var_1_cvector, false);
						TaskReturn();
					}
					var_1015_int = GlobalVars[3];
					if(2 == var_1015_int) {
						TaskCall(4);
						func_1795();
						TaskReturn();
						var_1018_int = GlobalVars[3];
						if(2 == var_1018_int) {
							bool var_1020_bool;
							func_3744(var_1020_bool);
							if(!var_1020_bool) { //@nz
								bool var_1030_bool;
								func_3601(var_1030_bool, 3);
							} else {
								bool var_1032_bool;
								func_3202(var_1032_bool, 0.5);
								if(var_1032_bool == 0) goto Label_227;
								bool var_1036_bool;
								func_3719(var_1036_bool);
								var_1045_bool = !var_1036_bool; //@nz
								if(var_1045_bool == 0) goto Label_227;
								bool var_1046_bool;
								func_3601(var_1046_bool, 1);
				}
							var_1049_int = GlobalVars[3];
							if(3 == var_1049_int) {
								func_3755(true);
								@GetMainOutdoorScene(var_31_object);
								var_1060_int = GlobalVars[2];
								@irand(var_32_int, var_1060_int);
								bool var_1061_bool;
								func_3202(var_1061_bool, 0.5);
								var_1061_bool = var_33_bool;
								var_34_int = 0;

								for(;;) {
									var_1063_int = GlobalVars[2];
									if(var_34_int < var_1063_int) {
										var_1066_int = GlobalVars[2];
										var_38_int = (var_34_int + var_32_int) % var_1066_int;
										if(var_33_bool != 0) {
											var_1068_int = GlobalVars[2];
											var_38_int = (var_1068_int - 1) - var_38_int;
										}
										var_1072_int = GlobalVars[1];
										var_31_object->GetLocator(((("pt_b9q03_bonfire" + (var_1072_int + 1)) + "_patrol") + (var_38_int + 1)), var_35_bool, var_36_cvector, var_37_cvector);
										bool var_1081_bool; cvector var_1082_cvector; cvector var_1083_cvector;
										var_36_cvector = var_1082_cvector;
										var_37_cvector = var_1083_cvector;
										TaskCall(5);
										func_1936(var_1081_bool, var_1082_cvector, var_1083_cvector, false);
										TaskReturn();
										var_1087_int = GlobalVars[3];
										if(3 != var_1087_int) {
										} else {
												TaskCall(7);
												func_2385(1);
												TaskReturn();
												var_1098_int = GlobalVars[3];
												if(!(3 != var_1098_int)) goto Label_295;
										}
									}
									for(;;) {
										var_1090_int = GlobalVars[3];
										if(3 == var_1090_int) {
											bool var_1092_bool;
											func_3601(var_1092_bool, 2);
										}
										func_3755(false);
										var_31_object = null;
										goto Label_441;

									}

								Label_295:
									var_34_int += 1;
								}
							}
							var_1102_int = GlobalVars[3];
							if(4 == var_1102_int) {
								var_1104_object = GlobalVars[5];
								var_1104_object->GetPosition(var_39_cvector);
								var_1105_object = GlobalVars[5];
								var_1105_object->GetDirection(var_40_cvector);
								bool var_1106_bool; cvector var_1107_cvector; cvector var_1108_cvector;
								var_39_cvector = var_1107_cvector;
								var_1108_cvector = -var_40_cvector;
								TaskCall(5);
								func_1936(var_1106_bool, var_1107_cvector, var_1108_cvector, true);
								TaskReturn();
								var_1112_int = GlobalVars[3];
								if(4 == var_1112_int) {
									TaskCall(7);
									func_2385(2);
									TaskReturn();
									var_1117_int = GlobalVars[3];
									if(4 == var_1117_int) {
										bool var_1119_bool;
										TaskCall(5);
										func_1936(var_1119_bool, var_0_cvector, var_1_cvector, true);
										TaskReturn();
										var_1125_int = GlobalVars[3];
										if(4 == var_1125_int) {
											@GetMainOutdoorScene(var_41_object);
											var_1128_int = GlobalVars[1];
											object var_1132_object;
											func_3168(var_1132_object);
											@BroadcastMessage(("b9q03_corpse" + (var_1128_int + 1)), var_1132_object, var_41_object);
											bool var_1133_bool; cvector var_1134_cvector; cvector var_1135_cvector;
											var_39_cvector = var_1134_cvector;
											var_39_cvector = var_1135_cvector;
											TaskCall(5);
											func_1936(var_1133_bool, var_1134_cvector, var_1135_cvector, true);
											TaskReturn();
											var_1139_int = GlobalVars[3];
											if(4 == var_1139_int) {
												TaskCall(7);
												func_2385(3);
												TaskReturn();
												var_1144_int = GlobalVars[3];
												if(4 == var_1144_int) {
													bool var_1146_bool;
													func_3601(var_1146_bool, 2);
												}
											}
											var_41_object = null;
										}
									}
								}
								goto Label_441;
							}
							var_1149_int = GlobalVars[3];
							if(5 == var_1149_int) {
								TaskCall(7);
								func_2385(1);
								TaskReturn();
								var_1154_int = GlobalVars[3];
								if(5 == var_1154_int) {
									object var_1156_object;
									var_1158_object = GlobalVars[6];
									var_1158_object = var_1156_object;
									TaskCall(3);
									func_1536(var_1156_object, (float)8);
									TaskReturn();
									var_1163_int = GlobalVars[3];
									if(5 == var_1163_int) {
										TaskCall(7);
										func_2385(2);
										TaskReturn();
										var_1168_int = GlobalVars[3];
										if(5 == var_1168_int) {
											bool var_1170_bool;
											func_3601(var_1170_bool, 2);
										}
									}
								}
								goto Label_441;
							}
							@Trace("Unknown FSM state");
			}
						return 22;
					}
				}
			}
		Label_227:
			goto Label_441;
			}
		Label_441:
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
		func_2808(var_22_bool, var_23_object);
		if(var_22_bool != 0) {
			var_26_object = GlobalVars[8];
			if(var_26_object != var_20_bool)
				var_21_bool = true;
		}
		if(var_21_bool != 0) {
			func_769(var_20_bool);
			bool var_28_bool; object var_29_object;
			var_20_bool = var_29_object;
			func_3701(var_28_bool, var_29_object);
		}
	}

	// @pe
	void OnUnload(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		func_769(var_19_bool);
		bool var_20_bool;
		func_3601(var_20_bool, 0);
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
			func_1329(Obj(), var_31_int);
		}
	
	}

	// @pe
	void OnUnload(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		func_1343(var_19_bool);
		bool var_24_bool;
		func_3601(var_24_bool, 0);
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
			func_3105(var_24_object);
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
		func_1343(var_20_bool);
		object var_25_object;
		var_20_bool = var_25_object;
		func_3800();
	}

}


task task_3
{
	// @pe
	void OnUnload(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		func_1768(var_19_bool);
		var_2_object = true;
		bool var_21_bool;
		func_3601(var_21_bool, 0);
	}

	// @pe
	void OnMessage(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, string var_18_string, bool var_19_bool, bool var_20_bool, bool var_21_bool)
	{
		object var_23_object;
		var_20_bool = var_23_object;
		bool var_22_bool;
		string var_24_string;
		func_3330(var_22_bool, var_23_object, var_24_string);
		if(var_22_bool != 0)
			func_1768(var_24_string);
	}

	// @pe
	void OnSee(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		bool var_21_bool; object var_22_object;
		func_3431(var_21_bool, var_22_object);
		if(var_21_bool != 0) {
			var_2_object = true;
			func_1768(var_22_object);
		}
	}

	// @pe
	void OnHear(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		bool var_21_bool; object var_22_object;
		func_3490(var_21_bool, var_22_object);
		if(var_21_bool != 0) {
			var_2_object = true;
			func_1768(var_22_object);
		}
	}

	// @pe
	void OnAttacked(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		func_1768(var_20_bool);
		var_2_object = true;
		bool var_22_bool; object var_23_object;
		var_20_bool = var_23_object;
		func_3701(var_22_bool, var_23_object);
	}

	// @pe
	void OnTimer(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, int var_17_int, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		if(var_20_bool == 3) {
			func_1768(var_20_bool);
			var_2_object = true;
		}
		int var_24_int;
		func_1746(var_19_bool, var_24_int, var_24_int);
	}

	// @pe
	void OnCollision(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		@RequestClearPath(var_20_bool);
	}

	// @pe
	void OnDeath(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		func_1768(var_20_bool);
		object var_22_object;
		var_20_bool = var_22_object;
		func_3800();
	}

}


task task_4
{
	// @pe
	void OnUnload(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		func_1931();
		bool var_20_bool;
		func_3601(var_20_bool, 0);
	}

	// @pe
	void OnMessage(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, string var_18_string, bool var_19_bool, bool var_20_bool, bool var_21_bool)
	{
		object var_23_object;
		var_20_bool = var_23_object;
		string var_24_string;
		var_21_bool = var_24_string;
		bool var_22_bool;
		func_3330(var_22_bool, var_23_object, var_24_string);
		if(var_22_bool != 0)
			func_1931();
	}

	// @pe
	void OnSee(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		object var_22_object;
		var_20_bool = var_22_object;
		bool var_21_bool;
		func_3431(var_21_bool, var_22_object);
		if(var_21_bool != 0)
			func_1931();
	}

	// @pe
	void OnHear(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		object var_22_object;
		var_20_bool = var_22_object;
		bool var_21_bool;
		func_3490(var_21_bool, var_22_object);
		if(var_21_bool != 0)
			func_1931();
	}

	// @pe
	void OnAttacked(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		func_1931();
		bool var_21_bool; object var_22_object;
		var_20_bool = var_22_object;
		func_3701(var_21_bool, var_22_object);
	}

}


task task_5
{
	// @pe
	void OnUnload(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		func_2129(var_19_bool);
		bool var_21_bool;
		func_3601(var_21_bool, 0);
	}

	// @pe
	void OnMessage(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, object var_18_object, string var_19_string, bool var_20_bool, bool var_21_bool)
	{
		object var_23_object;
		var_20_bool = var_23_object;
		bool var_22_bool;
		string var_24_string;
		func_3330(var_22_bool, var_23_object, var_24_string);
		if(var_22_bool != 0)
			func_2129(var_24_string);
	}

	// @pe
	void OnSee(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, object var_18_object, bool var_19_bool, bool var_20_bool)
	{
		bool var_21_bool; object var_22_object;
		func_3431(var_21_bool, var_22_object);
		if(var_21_bool != 0)
			func_2129(var_22_object);
	}

	// @pe
	void OnHear(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, object var_18_object, bool var_19_bool, bool var_20_bool)
	{
		bool var_21_bool; object var_22_object;
		func_3490(var_21_bool, var_22_object);
		if(var_21_bool != 0)
			func_2129(var_22_object);
	}

	// @pe
	void OnAttacked(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, object var_18_object, bool var_19_bool, bool var_20_bool)
	{
		func_2129(var_20_bool);
		bool var_22_bool; object var_23_object;
		var_20_bool = var_23_object;
		func_3701(var_22_bool, var_23_object);
	}

	// @pe
	void OnTimer(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, int var_18_int, bool var_19_bool, bool var_20_bool)
	{
		if(var_20_bool != 0)
			return 0;
		bool var_23_bool;
		func_2003(var_23_bool);
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
		func_2129(var_20_bool);
		object var_22_object;
		var_20_bool = var_22_object;
		func_3800();
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
		func_3330(var_22_bool, var_23_object, var_24_string);
		if(var_22_bool != 0)
			func_2365(var_24_string);
	}

	// @pe
	void OnSee(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		bool var_21_bool; object var_22_object;
		func_3431(var_21_bool, var_22_object);
		if(var_21_bool != 0)
			func_2365(var_22_object);
	}

	// @pe
	void OnHear(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		bool var_21_bool; object var_22_object;
		func_3490(var_21_bool, var_22_object);
		if(var_21_bool != 0)
			func_2365(var_22_object);
	}

	// @pe
	void OnAttacked(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		func_2365(var_20_bool);
		bool var_22_bool; object var_23_object;
		var_20_bool = var_23_object;
		func_3701(var_22_bool, var_23_object);
	}

	// @pe
	void OnUnload(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		func_2365(var_19_bool);
		bool var_21_bool;
		func_3601(var_21_bool, 0);
	}

	// @pe
	void OnTimer(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, int var_19_int, bool var_20_bool)
	{
		if(var_20_bool != 0)
			return 0;
		bool var_23_bool;
		func_2239(var_23_bool);
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
		func_2365(var_20_bool);
		object var_22_object;
		var_20_bool = var_22_object;
		func_3800();
	}

}


task task_7
{
	// @pe
	void OnUnload(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		func_2476();
		var_0_cvector = true;
		bool var_20_bool;
		func_3601(var_20_bool, 0);
	}

	// @pe
	void OnMessage(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object, string var_21_string)
	{
		object var_23_object;
		var_20_object = var_23_object;
		string var_24_string;
		var_21_string = var_24_string;
		bool var_22_bool;
		func_3330(var_22_bool, var_23_object, var_24_string);
		if(var_22_bool != 0) {
			func_2476();
			var_0_cvector = true;
		}
	}

	// @pe
	void OnSee(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object)
	{
		object var_22_object;
		var_20_object = var_22_object;
		bool var_21_bool;
		func_3431(var_21_bool, var_22_object);
		if(var_21_bool != 0) {
			func_2476();
			var_0_cvector = true;
		}
	}

	// @pe
	void OnHear(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object)
	{
		object var_22_object;
		var_20_object = var_22_object;
		bool var_21_bool;
		func_3490(var_21_bool, var_22_object);
		if(var_21_bool != 0) {
			func_2476();
			var_0_cvector = true;
		}
	}

	// @pe
	void OnAttacked(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object)
	{
		func_2476();
		bool var_21_bool; object var_22_object;
		var_20_object = var_22_object;
		func_3701(var_21_bool, var_22_object);
	}

}


task task_8
{
	void OnUnload(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		object var_20_object;
		func_3168(var_20_object);
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
			func_3268(var_24_object);
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
			func_3168(var_23_object);
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
	func_3007(var_24_object, var_25_int, var_26_float);
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
	func_3075(var_28_float, var_29_cvector, var_30_cvector);
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
	func_2481(var_21_object);
	TaskReturn();
}


// @pe
void func_1536(object var_707_object, float var_708_float)
{
	object var_714_object;
	var_707_object = var_714_object;
	bool var_713_bool;
	func_2939(var_713_bool, var_714_object);
	if(!var_713_bool) { //@nz
		bool var_716_bool;
		func_3601(var_716_bool, 2);
		return 0;
	}
	if(var_708_float > 0) {
		@SetTimer(3, var_708_float);
		bool var_721_bool; object var_722_object;
		func_1644(var_722_object, var_708_float, var_721_bool, var_722_object, 350.0, (float)6000, true, true);
		@KillTimer(3);
	} else {
		bool var_773_bool; object var_774_object;
		func_1644(var_774_object, var_708_float, var_773_bool, var_774_object, 350.0, (float)6000, true, true);
	}
	
}


void func_0(cvector var_0_cvector, bool var_1000_bool)
{
	cvector var_1004_cvector;
	@GetPosition(var_1004_cvector);
	var_1000_bool = ((var_1004_cvector - var_0_cvector) | (var_1004_cvector - var_0_cvector)) < 40000;
}


void func_1024(cvector var_0_cvector, bool var_429_bool, float var_430_float)
{
	bool var_436_bool; cvector var_437_cvector; cvector var_438_cvector; cvector var_439_cvector; float var_440_float;
	
	for(;;) {
		@IsAnimationPlaying(var_436_bool);
		if(!var_436_bool) //@nz
			break;
		bool var_442_bool;
		func_1107(var_442_bool);
		if(var_442_bool != 0) {
			var_429_bool = true;
			return 10;
		}
		bool var_487_bool = true;
		bool var_488_bool;
		func_2939(var_488_bool, var_0_cvector);
		var_490_bool = !var_488_bool; //@nz
		if(var_490_bool != 1) {
			if(var_4_int != 1)
				var_487_bool = false;
		}
		if(var_487_bool != 0) {
			var_429_bool = false;
			return 10;
		}
		var_0_cvector->GetPFPosition(var_437_cvector); //@t
		@GetPFPosition(var_438_cvector);
		var_439_cvector = var_437_cvector - var_438_cvector;
		var_440_float = var_439_cvector | var_439_cvector;
		if(var_440_float < (var_430_float * var_430_float)) {
			bool var_494_bool; float var_495_float;
			var_430_float = var_495_float;
			func_851(var_439_cvector, var_440_float, var_494_bool, var_495_float);
			var_429_bool = true;
			return 10;
		}
		@sync();
	}
	func_1211(var_440_float);
	var_429_bool = false;
}


void func_3075(object var_26_object, cvector var_29_cvector, cvector var_30_cvector)
{
	object var_33_object;
	@GetScene(var_33_object);
	object var_34_object;
	@AddActorByType(var_34_object, "scripted", var_33_object, var_29_cvector, var_30_cvector, "blood_dir.xml");
	object var_37_object;
	var_26_object = var_37_object;
	func_2963(var_37_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_519(cvector var_0_cvector, int var_3_int, int var_4_int, bool var_6_bool, object var_153_object, bool var_154_bool, float var_155_float, bool var_261_bool, bool var_367_bool)
{
	float var_167_float; cvector var_168_cvector; cvector var_169_cvector; bool var_171_bool; float var_174_float; cvector var_175_cvector; bool var_176_bool; float var_177_float;
	func_777(var_175_cvector, var_176_bool, var_177_float);
	var_6_bool = 0;
	var_202_bool = IsFuncExist(var_153_object, "@GetAttackDistance", 1);
	if(var_202_bool != 0) {
		var_153_object->GetAttackDistance(var_167_float);
		var_167_float += 50;
	} else {
						var_155_float = var_167_float;
	}
	if(var_167_float >= 150)
		var_167_float = 150;
	var_0_cvector = var_153_object;
	bool var_170_bool;
	@IsPlayerActor(var_0_cvector, var_170_bool);
	if(var_170_bool != 0)
		@PlayGlobalMusic("attack");
	if(var_154_bool != 0)
		var_171_bool = false;
	else
		var_171_bool = true;

	
Label_554:
	for(;;) {
		bool var_210_bool = false;
		bool var_211_bool = false;
		bool var_212_bool;
		func_2939(var_212_bool, var_0_cvector);
		if(var_212_bool != 0) {
			if(!false) //@nz
				var_211_bool = true;
		}
		if(var_211_bool != 0) {
			if(!var_4_int) //@nz
				var_210_bool = true;
		}
		if(var_210_bool != 0) {
			func_1211(var_177_float);
			var_0_cvector->GetPFPosition(var_168_cvector); //@t
			@GetPFPosition(var_169_cvector);
			var_174_float = (var_168_cvector - var_169_cvector) | (var_168_cvector - var_169_cvector);
			if(var_174_float >= ((300.0 + var_167_float) * (300.0 + var_167_float))) {
				bool var_255_bool; float var_257_float;
				var_167_float = var_257_float;
				TaskCall(2);
				func_1229(var_264_object, var_255_bool, var_0_cvector, var_257_float, 2000.0, true, false);
				TaskReturn();
				if(!var_261_bool) { //@nz
					var_3_int = true;
				} else {
					var_171_bool = false;
			} else {
			if(var_174_float >= (var_155_float * var_155_float)) {
				var_0_cvector->GetPFPosition(var_175_cvector); //@t
				@CanReachByPF(var_176_bool, var_175_cvector);
				if(!var_176_bool) { //@nz
					bool var_361_bool; float var_363_float;
					var_167_float = var_363_float;
					TaskCall(2);
					func_1229(var_370_object, var_361_bool, var_0_cvector, var_363_float, 2000.0, true, false);
					TaskReturn();
					if(!var_367_bool) { //@nz
						var_3_int = true;
						goto Label_746;
					}
					var_171_bool = false;
					goto Label_554;
				}
				if(!var_171_bool) { //@nz
					func_3089(var_0_cvector);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_1211(var_177_float);
					@StopAsync();
					var_171_bool = true;
					bool var_384_bool = true;
					bool var_385_bool;
					func_2939(var_385_bool, var_0_cvector);
					var_387_bool = !var_385_bool; //@nz
					if(var_387_bool != 1) {
						if(var_4_int != 1)
							var_384_bool = false;
					}
					if(var_384_bool != 0) {
						goto Label_746;
					}
				}
				@rand(var_177_float);
				bool var_389_bool;
				var_391_bool = var_177_float < 0.6;
				if(var_391_bool != 1) {
					bool var_392_bool;
					func_1168(true, var_392_bool);
					if(var_392_bool != 1)
						var_389_bool = false;
				}
				if(var_389_bool != 0) {
					@Face(var_0_cvector);
					func_1216();
					@PlayAnimation("all", "attack_stay");
					bool var_429_bool; float var_430_float;
					func_1024(var_177_float, var_429_bool, var_430_float);
					@StopAsync();
				} else {
					@Face(var_0_cvector);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_1211(var_177_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_658_bool;
					func_1168(var_177_float, var_658_bool);
					var_659_bool = !var_658_bool; //@nz
					if(var_659_bool == 0) goto Label_736;
					bool var_660_bool = true;
					bool var_661_bool;
					func_2939(var_661_bool, var_0_cvector);
					var_663_bool = !var_661_bool; //@nz
					if(var_663_bool != 1) {
						if(var_4_int != 1)
							var_660_bool = false;
					}
					if(var_660_bool != 0) {
						goto Label_746;
					}
					var_0_cvector->GetPFPosition(var_168_cvector); //@t
					@GetPFPosition(var_169_cvector);
					if(!(((var_168_cvector - var_169_cvector) | (var_168_cvector - var_169_cvector)) < (var_430_float * var_430_float))) goto Label_736;
					bool var_667_bool; float var_668_float;
					var_155_float = var_668_float;
					func_851(var_176_bool, var_177_float, var_667_bool, var_668_float);
					var_669_bool = !var_667_bool; //@nz
					if(var_669_bool == 0) goto Label_736;
					goto Label_746;
			}
				bool var_670_bool; float var_671_float;
				var_155_float = var_671_float;
				func_851(var_176_bool, var_177_float, var_670_bool, var_671_float);
				if(!var_670_bool) { //@nz
					goto Label_746;
				}
				var_171_bool = true;

			}
		Label_736:
			goto Label_745;
			}
			Label_745:
			}
		}
	Label_746:
		@WaitForAnimEnd();
		bool var_351_bool = true;
		if(var_3_int != 1) {
			if(var_4_int != 1)
				var_351_bool = false;
		}
		if(var_351_bool != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_170_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


// @pe
void func_3601(bool var_119_bool, int var_120_int)
{
	var_121_int = GlobalVars[3];
	if(var_120_int == var_121_int) {
		var_119_bool = false;
		return 0;
	}
	if(var_120_int == 0) {
		var_125_int = GlobalVars[4];
		var_126_int = GlobalVars[3];
		var_126_int = var_125_int;
		GlobalVars[4] = var_125_int;
		@Trace("changing state to c_iStateWaitForLoad");
	} else if(var_120_int == 1) {
			@Trace("changing state to c_iStateHeatHands");
	}

	for(;;) {
		var_128_int = GlobalVars[3];
		var_120_int = var_128_int;
		GlobalVars[3] = var_128_int;
		var_119_bool = true;
		return 0;

	}
	
	if(var_120_int == 2) {
		@Trace("changing state to c_iStateIdle");
	} else if(var_120_int == 3) {
		@Trace("changing state to c_iStatePatrol");
	}
	var_119_bool = false;
}


void func_3089(object var_373_object)
{
	cvector var_377_cvector;
	var_373_object->GetPosition(var_377_cvector);
	cvector var_378_cvector;
	@GetPosition(var_378_cvector);
	cvector var_379_cvector = var_377_cvector - var_378_cvector;
	var_380_float = GetByIndex(var_379_cvector, 0);
	var_381_float = GetByIndex(var_379_cvector, 2);
	@RotateAsync(var_380_float, var_381_float);
}


void func_3100(bool var_115_bool)
{
	bool var_117_bool;
	@IsLoaded(var_117_bool);
	var_117_bool = var_115_bool;
}


void func_3105(object var_283_object)
{
	float var_286_float;
	var_283_object->GetEyesHeight(var_286_float);
	cvector var_287_cvector = [0.0, 0.0, 0.0];
	var_288_float = GetByIndex(var_287_cvector, 1);
	var_286_float = var_288_float;
	SetByIndex(var_287_cvector, 1) = var_288_float;
	@LookAsync(var_283_object, "head", var_287_cvector);
}


void func_3116(object var_46_object, string var_47_string, int var_48_int, int var_49_int)
{
	bool var_54_bool;
	int var_56_int;
	var_48_int = var_56_int;
	int var_57_int;
	var_49_int = var_57_int;
	bool var_55_bool;
	func_3207(var_55_bool, var_56_int, var_57_int);
	if(var_55_bool != 0)
		var_46_object->AddItem(var_54_bool, var_47_string, 0);
}


// @pe
void func_2604(object var_121_object)
{
	object var_122_object;
	var_121_object = var_122_object;
	func_2629(var_122_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1073(cvector var_0_cvector, bool var_444_bool)
{
	cvector var_450_cvector; cvector var_451_cvector;
	bool var_455_bool = true;
	bool var_456_bool;
	func_2939(var_456_bool, var_0_cvector);
	var_458_bool = !var_456_bool; //@nz
	if(var_458_bool != 1) {
		if(var_4_int != 1)
			var_455_bool = false;
	}
	if(var_455_bool != 0) {
		var_444_bool = false;
		return 10;
	}
	bool var_460_bool;
	float var_454_float;
	func_1168(var_454_float, var_460_bool);
	if(var_460_bool != 0) {
		var_0_cvector->GetPFPosition(var_450_cvector); //@t
		@GetPFPosition(var_451_cvector);
		var_0_cvector->GetAttackDistance(var_454_float); //@t
		var_444_bool = ((var_450_cvector - var_451_cvector) | (var_450_cvector - var_451_cvector)) <= ((var_454_float + 50) * (var_454_float + 50));
		return 10;
	}
	var_444_bool = false;
}


void func_3127(string var_398_string)
{
	bool var_407_bool; int var_408_int; bool var_409_bool; int var_410_int; bool var_411_bool; float var_412_float; cvector var_413_cvector; cvector var_414_cvector;
	@IsExisting3DSound(var_407_bool, var_398_string);
	if(!var_407_bool) { //@nz
		var_408_int = 0;

		for(;;) {
			@IsExisting3DSound(var_409_bool, (var_398_string + (var_408_int + 1)));
			if(!var_409_bool) { //@nz
				break;
			Label_3147:
				@irand(var_410_int, var_408_int);
				var_398_string += (var_410_int + 1);
	}
			@Is3DSoundLoaded(var_411_bool, var_398_string);
			if(var_411_bool != 0) {
				@GetEyesHeight(var_412_float);
				@GetDirection(var_413_cvector);
				var_414_cvector = var_413_cvector * 50;
				var_425_float = GetByIndex(var_414_cvector, 1);
				SetByIndex(var_414_cvector, 1) = (var_425_float + var_412_float);
				@PlayGlobalSound(var_398_string, var_414_cvector);
			}
		}
		var_408_int += 1;
	}
	var_420_bool = !var_408_int; //@nz
	if(var_420_bool == 0) goto Label_3147;
}


// @pe
void func_3647(bool var_42_bool, object var_43_object)
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


void func_2629(object var_122_object)
{
	cvector var_133_cvector; cvector var_134_cvector; cvector var_135_cvector; cvector var_136_cvector; string var_137_string; object var_138_object; bool var_139_bool; bool var_140_bool; float var_141_float; cvector var_142_cvector;
	if(var_122_object == null) {
		func_2720("fdie");
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
		func_3127(var_197_string);
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


void func_2129(cvector var_0_cvector)
{
	var_0_cvector = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_3665(bool var_59_bool, object var_60_object)
{
	var_61_int = GlobalVars[3];
	if(var_61_int == 5)
		var_59_bool = false;
	var_64_int = GlobalVars[3];
	GlobalVars[3] = 5;
	@Trace("changing state to c_iStateSearchEnemy");
	var_66_object = GlobalVars[6];
	var_60_object = var_66_object;
	GlobalVars[6] = var_66_object;
	var_59_bool = true;
}


void func_1107(bool var_442_bool)
{
	bool var_443_bool = false;
	bool var_444_bool;
	func_1073(var_443_bool, var_444_bool);
	if(var_444_bool != 0) {
		bool var_463_bool;
		func_1123(var_442_bool, var_443_bool, var_463_bool);
		if(var_463_bool != 0)
			var_443_bool = true;
	}
	if(var_443_bool != 0) {
		var_442_bool = true;
		return 0;
	}
	var_442_bool = false;
}


void func_3168(object var_102_object)
{
	object var_104_object;
	@self(var_104_object);
	var_104_object = var_102_object;
}
EMIT "Stack[-1] = 0";


void func_2145(string var_980_string)
{
	var_980_string = "walk";
}


void func_1123(cvector var_0_cvector, bool var_5_bool, bool var_463_bool)
{
	object var_469_object; float var_471_float; cvector var_472_cvector; cvector var_473_cvector;
	@GetScene(var_469_object);
	bool var_470_bool = false;
	
	for(;;) {
		cvector var_474_cvector;
		func_2801(var_474_cvector, var_0_cvector);
		var_480_int = -var_474_cvector;
		@FindDirLength(var_471_float, var_480_int, var_5_bool);
		if(var_471_float < var_5_bool) {
		} else {
				@Face(var_0_cvector);
				@PlayAnimation("all", "bjump");
				var_0_cvector->GetPFPosition(var_472_cvector); //@t
				@GetPFPosition(var_473_cvector);
				@WaitForAnimEnd();
				func_1211(var_473_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_470_bool = true;
				bool var_485_bool;
				func_1073(var_473_cvector, var_485_bool);
				var_486_bool = !var_485_bool; //@nz
				if(var_486_bool == 0) goto Label_1164;
		}
		for(;;) {
			var_470_bool = var_463_bool;

		}

	Label_1164:
	}
}
EMIT "Stack[-5] = 0";


void func_2147(string var_981_string)
{
	var_981_string = "run";
}


void func_2149(bool var_801_bool)
{
	object var_808_object;
	@GetMainOutdoorScene(var_808_object);
	var_812_int = GlobalVars[1];
	bool var_807_bool;
	cvector var_809_cvector;
	cvector var_810_cvector;
	var_808_object->GetLocator(("pt_b9q03_bonfire" + (var_812_int + 1)), var_807_bool, var_809_cvector, var_810_cvector);
	if(!var_807_bool) //@nz
		var_801_bool = false;
	bool var_817_bool; cvector var_818_cvector; cvector var_819_cvector;
	var_809_cvector = var_818_cvector;
	var_810_cvector = var_819_cvector;
	func_2215(var_817_bool, var_818_cvector, var_819_cvector, false);
	var_817_bool = var_801_bool;
}
EMIT "Stack[-3] = 0";


void func_3174(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_61_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_61_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_61_float;
}


// @pe
void func_3683(bool var_27_bool, object var_28_object)
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


void func_1644(cvector var_0_cvector, cvector var_1_cvector, bool var_721_bool, object var_722_object, float var_723_float, float var_724_float, bool var_725_bool, bool var_726_bool)
{
	bool var_735_bool; object var_737_object; cvector var_738_cvector; cvector var_739_cvector; float var_741_float; object var_742_object;
	var_0_cvector = false;
	var_1_cvector = var_722_object;
	bool var_736_bool;
	var_726_bool = var_736_bool;
	
	for(;;) {
		bool var_743_bool; object var_744_object;
		var_722_object = var_744_object;
		func_1784(var_743_bool, var_744_object);
		if(!var_743_bool) { //@nz
			var_721_bool = false;
			return 16;
		}
		var_722_object->GetPosition(var_738_cvector);
		@GetPosition(var_739_cvector);
		var_741_float = (var_738_cvector - var_739_cvector) | (var_738_cvector - var_739_cvector);
		bool var_748_bool = false;
		if(var_724_float > 0) {
			if(var_741_float > (var_724_float * var_724_float))
				var_748_bool = true;
		}
		if(var_748_bool != 0) {
			@Stop();
			var_721_bool = false;
			return 16;
		}
		if(var_741_float > (var_723_float * var_723_float)) {
			var_722_object->GetPFPosition(var_738_cvector);
			@FindPathTo(var_742_object, var_738_cvector);
			if(var_742_object != null) {
				var_742_object = var_737_object;
				var_742_object = null;
			}
			if(var_737_object != null) {
				if(var_736_bool == 0) goto Label_1697;
				var_736_bool = false;
				@RotatePath(var_737_object, var_735_bool);
				if(!var_735_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_761_string;
						func_1791(var_761_string);
						string var_762_string;
						func_1793(var_762_string);
						@FollowPath(var_737_object, var_725_bool, var_735_bool, var_761_string, var_762_string);
						if(!var_735_bool) { //@nz
							if(var_0_cvector == 0) goto Label_1716;
							var_737_object = null;
						}
					EMIT "GOTO 0x6b5";

					Label_1716:
						} else {
					var_737_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_735_bool);
					if(!var_735_bool) { //@nz
						if(var_0_cvector != 0) {
							var_737_object = null;
							goto Label_1744;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1744;
		}
			var_742_object = null;
			goto Label_1742;

		Label_1742:
			var_737_object = null;

		}
	Label_1744:
		for(;;) {
			var_721_bool = !var_0_cvector;
			return 16;

			}
	}
	
}


// @pe
void func_3184(float var_581_float, float var_582_float, float var_583_float)
{
	if(var_582_float < var_583_float)
		var_582_float = var_581_float;
	else
		var_583_float = var_581_float;
	
}


// @pe
void func_3701(bool var_21_bool, object var_22_object)
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


// @pe
void func_3191(float var_591_float, float var_592_float, float var_593_float, float var_594_float)
{
	if(var_592_float < var_593_float) {
		var_593_float = var_591_float;
		return 0;
	}
	if(var_592_float > var_594_float) {
		var_594_float = var_591_float;
		return 0;
	}
	var_592_float = var_591_float;
}


void func_3202(bool var_1032_bool, float var_1033_float)
{
	float var_1035_float;
	@rand(var_1035_float);
	var_1032_bool = var_1035_float < var_1033_float;
}


void func_3719(bool var_1036_bool)
{
	var_1040_int = GlobalVars[1];
	int var_1038_int;
	@GetVariable(("b9q03HandHeatLock" + (var_1040_int + 1)), var_1038_int);
	var_1036_bool = var_1038_int != 0;
}


void func_3207(bool var_55_bool, int var_56_int, int var_57_int)
{
	int var_59_int;
	@irand(var_59_int, var_57_int);
	var_55_bool = var_59_int < var_56_int;
}


void func_3212(float var_599_float)
{
	object var_601_object;
	@CreateFloatVector(var_601_object);
	var_601_object->add(var_599_float);
	if(var_599_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_601_object);
}
EMIT "Stack[-1] = 0";


void func_1168(cvector var_0_cvector, bool var_392_bool)
{
	bool var_394_bool;
	var_397_bool = IsFuncExist(var_0_cvector, "IsAttacking", 1);
	if(var_397_bool != 0) {
		var_0_cvector->IsAttacking(var_394_bool); //@t
		var_394_bool = var_392_bool;
	}
	var_392_bool = false;
}


// @pe
void func_3730(bool var_792_bool)
{
	var_794_int = GlobalVars[1];
	if(var_792_bool != 0)
		var_799_int = 1;
	else
		var_800_int = 0; //@pi
	@SetVariable(("b9q03HandHeatLock" + (var_794_int + 1)), var_799_int);
	
}


void func_1179(object var_2_object, bool var_6_bool)
{
	int var_512_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_6_bool != 0) {
		if((var_6_bool + -1) > 0)
			return 4;
	}
	float var_511_float;
	@rand(var_511_float);
	float var_518_float;
	func_1227(var_518_float);
	if(var_511_float < var_518_float) {
		@irand(var_512_int, var_2_object);
		@Speak("attack" + (var_512_int + 1));
		int var_523_int;
		func_1225(var_523_int);
		var_6_bool = var_523_int;
	}
}


void func_3229(object var_248_object)
{
	bool var_250_bool;
	@IsPlayerActor(var_248_object, var_250_bool);
	if(var_250_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_3744(bool var_1020_bool)
{
	var_1024_int = GlobalVars[1];
	int var_1022_int;
	@GetVariable(("b9q03PatrolLock" + (var_1024_int + 1)), var_1022_int);
	var_1020_bool = var_1022_int != 0;
}


// @pe
void func_2720(string var_144_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_145_string;
	var_144_string = var_145_string;
	func_3127(var_145_string);
	@PlayAnimation("all", var_144_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_144_string);
	@RemoveEnvelope();
}


void func_3238(string var_900_string, int var_901_int)
{
	string var_903_string = "idle";
	if(var_901_int != 0)
		var_903_string += var_901_int;
	var_903_string = var_900_string;
}


// @pe
void func_2215(bool var_817_bool, cvector var_818_cvector, cvector var_819_cvector, bool var_820_bool)
{
	var_821_float = GetByIndex(var_818_cvector, 1);
	SetByIndex(var_818_cvector, 1) = (var_821_float + 30);
	bool var_823_bool; cvector var_824_cvector; cvector var_825_cvector; bool var_828_bool;
	var_818_cvector = var_824_cvector;
	var_819_cvector = var_825_cvector;
	func_2241(var_828_bool, var_823_bool, var_824_cvector, var_825_cvector, (float)100, (float)4000, var_828_bool, true);
	var_823_bool = var_817_bool;
}


// @pe
void func_3755(bool var_1051_bool)
{
	var_1053_int = GlobalVars[1];
	if(var_1051_bool != 0)
		var_1058_int = 1;
	else
		var_1059_int = 0; //@pi
	@SetVariable(("b9q03PatrolLock" + (var_1053_int + 1)), var_1058_int);
	
}


void func_3245(int var_894_int)
{
	int var_897_int; bool var_898_bool;
	var_897_int = 0;
	
	for(;;) {
		string var_900_string; int var_901_int;
		var_897_int = var_901_int;
		func_3238(var_900_string, var_901_int);
		@HasAnimation(var_898_bool, "all", var_900_string);
		if(!var_898_bool) //@nz
			break;
		var_897_int += 1;
	}
	var_897_int = var_894_int;
}


void func_1211(cvector var_0_cvector)
{
	func_3229(var_0_cvector);
}


void func_3262(int var_101_int)
{
	int var_103_int;
	@GetVariable("branch", var_103_int);
	var_103_int = var_101_int;
}


void func_2239(bool var_846_bool)
{
	var_846_bool = true;
}


void func_2752(void)
{
	var_113_bool = GlobalVars[0];
	if(var_113_bool != 0) {
		object var_114_object;
		func_3168(var_114_object);
		@RemoveActor(var_114_object);
		@Hold();
	}
	for(;;) {
		bool var_115_bool;
		func_3100(var_115_bool);
		var_118_bool = !var_115_bool; //@nz
		if(var_118_bool == 0) goto Label_2769;
		@Hold();
	}
	
Label_2769:
}


void func_1216(void)
{
	func_3127("attack_stay");
}


void func_2241(cvector var_0_cvector, bool var_823_bool, cvector var_824_cvector, cvector var_825_cvector, float var_826_float, float var_827_float, bool var_828_bool, bool var_829_bool)
{
	bool var_838_bool; object var_840_object; cvector var_841_cvector; cvector var_842_cvector; float var_844_float; object var_845_object;
	var_0_cvector = false;
	bool var_839_bool;
	var_829_bool = var_839_bool;
	
	for(;;) {
		bool var_846_bool;
		func_2239(var_846_bool);
		if(!var_846_bool) { //@nz
			var_823_bool = false;
			return 16;
		}
		var_824_cvector = var_841_cvector;
		@GetPosition(var_842_cvector);
		var_844_float = (var_841_cvector - var_842_cvector) | (var_841_cvector - var_842_cvector);
		bool var_848_bool = false;
		if(var_827_float > 0) {
			if(var_844_float > (var_827_float * var_827_float))
				var_848_bool = true;
		}
		if(var_848_bool != 0) {
			@Stop();
			var_823_bool = false;
			return 16;
		}
		if(var_844_float > (var_826_float * var_826_float)) {
			@FindPathTo(var_845_object, var_841_cvector);
			if(var_845_object != null) {
				var_845_object = var_840_object;
				var_845_object = null;
			}
			if(var_840_object != null) {
				if(var_839_bool == 0) goto Label_2289;
				var_839_bool = false;
				@RotatePath(var_840_object, var_838_bool);
				if(!var_838_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_864_string;
						func_2381(var_864_string);
						string var_865_string;
						func_2383(var_865_string);
						@FollowPath(var_840_object, var_828_bool, var_838_bool, var_864_string, var_865_string);
						if(!var_838_bool) { //@nz
							if(var_0_cvector == 0) goto Label_2308;
							var_840_object = null;
						}
					EMIT "GOTO 0x905";

					Label_2308:
						} else {
					var_840_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_838_bool);
					if(!var_838_bool) { //@nz
						if(var_0_cvector != 0) {
							var_840_object = null;
							goto Label_2336;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_2336;
		}
			var_845_object = null;
			goto Label_2334;

		Label_2334:
			var_840_object = null;

		}
	Label_2336:
		for(;;) {
			if(!var_0_cvector) { //@nz
				var_860_float = GetByIndex(var_825_cvector, 0);
				var_861_float = GetByIndex(var_825_cvector, 2);
				@RotateAsync(var_860_float, var_861_float);
			}
			var_823_bool = !var_0_cvector;
			return 16;

			}
	}
	
}


// @pe
void func_3268(object var_24_object)
{
	int var_25_int;
	func_3262(var_25_int);
	if(var_25_int == 1)
		@WorkWithCorpse(var_24_object);
	else
		@Barter(var_24_object);
	
}


// @pe
void func_1221(void)
{
}


void func_1223(bool var_636_bool)
{
	var_636_bool = true;
}


void func_1225(int var_523_int)
{
	var_523_int = 1;
}


void func_1227(float var_518_float)
{
	var_518_float = 0.5;
}


void func_1229(int var_3_int, bool var_255_bool, object var_256_object, float var_257_float, float var_258_float, bool var_259_bool, bool var_260_bool)
{
	var_3_int = var_256_object;
	@SetTimer(2, 2);
	bool var_269_bool; object var_270_object; float var_271_float; float var_272_float; bool var_273_bool; bool var_274_bool;
	var_256_object = var_270_object;
	var_257_float = var_271_float;
	var_258_float = var_272_float;
	var_259_bool = var_273_bool;
	var_260_bool = var_274_bool;
	bool var_266_bool;
	func_1280(var_266_bool, var_269_bool, var_270_object, var_271_float, var_272_float, var_273_bool, var_274_bool);
	var_269_bool = var_266_bool;
	@KillTimer(2);
	var_266_bool = var_255_bool;
}


void func_3281(string var_107_string)
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


// @pe
void func_1746(cvector var_0_cvector, cvector var_1_cvector, int var_24_int)
{
	if(var_24_int != 0)
		return 0;
	bool var_27_bool;
	func_1784(var_27_bool, var_1_cvector);
	if(!var_27_bool) //@nz
		var_0_cvector = true;
	@KillTimer(0);
	@Stop();
}


void func_3808(int var_609_int)
{
	var_609_int = 1;
}


void func_3298(void)
{
	int var_101_int;
	func_3262(var_101_int);
	if(var_101_int != 1) {
	}
	func_3281("liver");
	func_3281("kidney");
	func_3281("heart");
	func_3281("blood");
}


// @pe
void func_2787(string var_571_string, int var_572_int)
{
	if(var_572_int == 2) {
		var_571_string = "fire";
		return 0;
	EMIT "GOTO 0xaef";
	}
	if(var_572_int == 1) {
		var_571_string = "bullet";
		return 0;
	}
	var_571_string = "phys";
}


void func_1768(cvector var_0_cvector)
{
	var_0_cvector = true;
	@KillTimer(0);
	@Stop();
}


void func_2801(cvector var_474_cvector, object var_475_object)
{
	cvector var_478_cvector;
	@GetPosition(var_478_cvector);
	cvector var_479_cvector;
	var_475_object->GetPosition(var_479_cvector);
	var_474_cvector = var_479_cvector - var_478_cvector;
}


// @pe
void func_1784(bool var_743_bool, object var_744_object)
{
	object var_746_object;
	var_744_object = var_746_object;
	bool var_745_bool;
	func_2939(var_745_bool, var_746_object);
	var_745_bool = var_743_bool;
}


void func_2808(bool var_290_bool, object var_291_object)
{
	bool var_293_bool;
	@IsPlayerActor(var_291_object, var_293_bool);
	var_293_bool = var_290_bool;
}


void func_2813(bool var_234_bool, object var_235_object, string var_236_string)
{
	var_241_bool = IsFuncExist(var_235_object, "HasProperty", 2);
	if(!var_241_bool) { //@nz
		var_234_bool = false;
		return 2;
	}
	bool var_238_bool;
	var_235_object->HasProperty(var_236_string, var_238_bool);
	var_238_bool = var_234_bool;
}


void func_1791(string var_761_string)
{
	var_761_string = "walk";
}


void func_1280(object var_2_object, bool var_269_bool, object var_270_object, float var_271_float, float var_272_float, bool var_273_bool, bool var_274_bool)
{
	object var_279_object;
	func_3229(var_279_object);
	@SetTimer(1, 5);
	bool var_277_bool;
	@CanSee(var_277_bool, var_279_object);
	if(var_277_bool != 0) {
		var_2_object = true;
		object var_283_object;
		var_270_object = var_283_object;
		func_3105(var_283_object);
	} else {
		var_2_object = false;
	}
	bool var_290_bool; object var_291_object;
	func_2808(var_290_bool, var_291_object);
	if(var_290_bool != 0) {
		object var_294_object;
		func_3168(var_294_object);
		@SendPlayerEnemy(var_291_object, var_294_object);
	}
	bool var_295_bool; object var_296_object; float var_297_float; float var_298_float; bool var_299_bool; bool var_300_bool;
	var_270_object = var_296_object;
	var_271_float = var_297_float;
	var_272_float = var_298_float;
	var_273_bool = var_299_bool;
	var_274_bool = var_300_bool;
	bool var_278_bool;
	func_1385(var_277_bool, var_278_bool, var_295_bool, var_296_object, var_297_float, var_298_float, var_299_bool, var_300_bool);
	var_295_bool = var_278_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_278_bool = var_269_bool;
	
}


void func_769(int var_4_int)
{
	@Stop();
	@StopAnimation();
	@StopGroup0();
	var_4_int = true;
}


void func_3330(bool var_22_bool, object var_23_object, string var_24_string)
{
	cvector var_37_cvector; cvector var_38_cvector; cvector var_41_cvector; cvector var_42_cvector; float var_44_float; cvector var_45_cvector; cvector var_46_cvector;
	object var_49_object;
	func_3168(var_49_object);
	if(var_23_object == var_49_object) {
		var_22_bool = false;
		return 24;
	}
	var_54_int = GlobalVars[1];
	if(var_24_string == ("b9q03_corpse" + (var_54_int + 1))) {
		bool var_59_bool; object var_60_object;
		func_3665(var_59_bool, var_60_object);
		if(var_59_bool != 0) {
			var_22_bool = true;
			return 24;
		}
	} else {
			var_68_int = GlobalVars[1];
			if(!(var_24_string == ("b9q03_helpme" + (var_68_int + 1)))) goto Label_3377;
			var_60_object->GetPosition(var_37_cvector);
			@GetPosition(var_38_cvector);
			if(((var_37_cvector - var_38_cvector) | (var_37_cvector - var_38_cvector)) < 4000000.0) {
				bool var_75_bool; object var_76_object;
				var_23_object = var_76_object;
				func_3701(var_75_bool, var_76_object);
				if(var_75_bool != 0) {
					var_22_bool = true;
					return 24;
				}
			}
	}
Label_3429:
	for(;;) {
		var_22_bool = false;
		return 24;

	}
	
Label_3377:
	if(var_24_string == "player_shot") {
		var_23_object->GetPosition(var_41_cvector);
		@GetPosition(var_42_cvector);
		var_44_float = (var_41_cvector - var_42_cvector) | (var_41_cvector - var_42_cvector);
		if(var_44_float < 360000.0) {
			bool var_87_bool; object var_88_object;
			var_23_object = var_88_object;
			func_3701(var_87_bool, var_88_object);
			if(var_87_bool != 0) {
				var_22_bool = true;
				return 24;
			}
		}
		if(var_44_float < 12250000.0) {
			bool var_91_bool; object var_92_object;
			var_23_object = var_92_object;
			func_3665(var_91_bool, var_92_object);
			if(var_91_bool != 0) {
				var_22_bool = true;
				return 24;
			}
		}
	} else if(var_24_string == "b9q03BonfireBurnedByFollower") {
		var_23_object->GetPosition(var_45_cvector);
		@GetPosition(var_46_cvector);
		if(!(((var_45_cvector - var_46_cvector) | (var_45_cvector - var_46_cvector)) < 2250000.0)) goto Label_3429;
		bool var_97_bool; object var_98_object;
		var_23_object = var_98_object;
		func_3701(var_97_bool, var_98_object);
		if(var_97_bool == 0) goto Label_3429;
		@Trace("Attacking follower after he has burned bonefire.");
		var_22_bool = true;
	}
}


// @pe
void func_1795(void)
{
	func_1850();
}


void func_1793(string var_762_string)
{
	var_762_string = "run";
}


void func_777(cvector var_1_cvector, object var_2_object, bool var_5_bool)
{
	bool var_181_bool; bool var_182_bool; cvector var_183_cvector;
	var_1_cvector = 0;
	
	for(;;) {
		@HasAnimation(var_181_bool, "all", ("attack_begin" + (var_1_cvector + 1)));
		if(!var_181_bool) { //@nz
		} else {
			var_1_cvector += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_182_bool, ("attack" + (var_2_object + 1)));
			if(!var_182_bool) //@nz
				break;
			var_2_object += 1;
		}
		@GetAnimationOffset(var_183_cvector, "all", "bjump");
		var_197_float = GetByIndex(var_183_cvector, 2);
		var_5_bool = -var_197_float;

	}
}


void func_2825(float var_543_float, object var_544_object, float var_545_float, int var_546_int)
{
	int var_556_int; int var_558_int;
	object var_563_object;
	var_544_object = var_563_object;
	bool var_562_bool;
	func_2813(var_562_bool, var_563_object, "health");
	if(!var_562_bool) //@nz
		var_543_float = 0.0;
	bool var_566_bool; object var_567_object;
	func_2813(var_566_bool, var_567_object, "armor");
	if(!var_566_bool) //@nz
		var_556_int = 0;
	else
		var_567_object->GetProperty("armor", var_556_int);
	string var_571_string; int var_572_int;
	var_546_int = var_572_int;
	func_2787(var_571_string, var_572_int);
	string var_557_string = "armor_" + var_571_string;
	bool var_577_bool; object var_578_object; string var_579_string;
	var_544_object = var_578_object;
	func_2813(var_577_bool, var_578_object, var_579_string);
	if(!var_577_bool) //@nz
		var_558_int = 0;
	else
		var_544_object->GetProperty(var_579_string, var_558_int);

	float var_581_float;
	func_3184(var_581_float, ((var_556_int + var_558_int) / 100.0), (float)1);
	float var_559_float;
	var_581_float = var_559_float;
	float var_560_float;
	var_544_object->GetProperty("health", var_560_float);
	float var_561_float = var_545_float * (1 - var_559_float);
	float var_591_float;
	func_3191(var_591_float, (var_560_float - var_561_float), (float)0, (float)1);
	var_544_object->SetProperty("health", var_591_float);
	bool var_597_bool; object var_598_object;
	var_544_object = var_598_object;
	func_2808(var_597_bool, var_598_object);
	if(var_597_bool != 0) {
		float var_599_float = -var_561_float;
		func_3212(var_599_float);
	}
	var_561_float = var_543_float;
	
}


void func_812(cvector var_0_cvector, float var_529_float, int var_530_int)
{
	object var_534_object; float var_535_float; float var_536_float;
	@GetVictim((var_529_float * 0.9), var_534_object);
	@ReportAttack(var_0_cvector);
	if(var_534_object == var_0_cvector) {
		float var_540_float; object var_541_object; int var_542_int;
		var_534_object = var_541_object;
		var_530_int = var_542_int;
		func_461(var_542_int);
		var_540_float = var_535_float;
		float var_543_float; object var_544_object; float var_545_float; int var_546_int;
		var_534_object = var_544_object;
		int var_547_int; object var_548_object; int var_549_int;
		var_534_object = var_548_object;
		var_530_int = var_549_int;
		func_464(var_549_int);
		var_547_int = var_546_int;
		func_2825(var_543_float, var_544_object, var_545_float, var_546_int);
		var_543_float = var_536_float;
		int var_608_int;
		func_467(var_608_int);
		@ReportHit(var_0_cvector, var_608_int, var_536_float, var_545_float);
		object var_610_object; float var_611_float;
		var_534_object = var_610_object;
		var_536_float = var_611_float;
		func_1221();
	}
}
EMIT "Stack[-3] = 0";


// @pe
void func_1329(cvector var_1_cvector, int var_31_int)
{
	if(var_31_int == 1) {
		func_3229(var_1_cvector);
	} else {
		int var_39_int;
		func_1487(var_22_object, var_39_int, var_39_int);
	}
	
}


void func_1850(void)
{
	int var_887_int; int var_888_int; bool var_889_bool; float var_890_float; bool var_891_bool;
	@WaitForAnimEnd();
	bool var_892_bool;
	func_3100(var_892_bool);
	if(!var_892_bool) //@nz
		return 14;
	int var_894_int;
	func_3245(var_894_int);
	int var_885_int;
	var_894_int = var_885_int;
	int var_886_int = 0;
	
	for(;;) {
		bool var_907_bool = false;
		if(var_886_int < 5) {
			bool var_910_bool;
			func_3100(var_910_bool);
			if(var_910_bool != 0)
				var_907_bool = true;
		}
		if(var_907_bool != 0) {
			@irand(var_887_int, 3);
			if(var_887_int == 0) {
				if(var_885_int == 0) goto Label_1897;
				@irand(var_888_int, var_885_int);
				string var_916_string; int var_917_int;
				var_888_int = var_917_int;
				func_3238(var_916_string, var_917_int);
				@PlayAnimation("all", var_916_string);
				@WaitForAnimEnd(var_889_bool);
				if(!var_889_bool) { //@nz
				} else {
			} else {
			if(var_887_int == 1) {
				@rand(var_890_float, 4);
				@Sleep((var_890_float + 1), var_891_bool);
				if(!var_891_bool) { //@nz
					goto Label_1926;
				}
			} else if(var_886_int != 0) {
				goto Label_1926;
			}
			}
					bool var_919_bool;
					func_1929(var_919_bool);
					var_920_bool = !var_919_bool; //@nz
					if(var_920_bool == 0) goto Label_1921;
			}
		}
	Label_1926:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_1921:
		@ResetAAS();
		var_886_int += 1;
	}
	
}


void func_2365(cvector var_0_cvector)
{
	var_0_cvector = true;
	@KillTimer(0);
	@Stop();
}


void func_1343(object var_2_object)
{
	@KillTimer(1);
	if(var_2_object != 0) {
		var_2_object = false;
		@UnlookAsync("head");
	}
	func_1509(var_20_bool);
}


void func_2381(string var_864_string)
{
	var_864_string = "walk";
}


void func_2383(string var_865_string)
{
	var_865_string = "run";
}


void func_2385(int var_677_int)
{
	int var_680_int = 0;
	
	for(;;) {
		if(var_680_int < var_677_int) {
			func_2455("hunt");
			if(var_0_cvector != 0) {
			} else {
				var_680_int += 1;
			}
		}

	}
}


void func_2898(bool var_227_bool, object var_228_object)
{
	bool var_230_bool;
	var_228_object->IsDead(var_230_bool);
	var_230_bool = var_227_bool;
}


void func_851(cvector var_0_cvector, cvector var_1_cvector, bool var_494_bool, float var_495_float)
{
	string var_503_string;
	func_1211(var_503_string);
	int var_500_int;
	@irand(var_500_int, var_1_cvector);
	@Face(var_0_cvector);
	@SetAttackState(true);
	@PlayAnimation("all", ("attack_begin" + (var_500_int + 1)));
	@WaitForAnimEnd();
	int var_502_int;
	func_1179(var_502_int, var_503_string);
	bool var_524_bool = true;
	bool var_525_bool;
	func_2939(var_525_bool, var_0_cvector);
	var_527_bool = !var_525_bool; //@nz
	if(var_527_bool != 1) {
		if(var_4_int != 1)
			var_524_bool = false;
	}
	if(var_524_bool != 0) {
		@StopAsync();
		var_494_bool = false;
		return 8;
	}
	float var_529_float; int var_530_int;
	var_495_float = var_529_float;
	var_500_int = var_530_int;
	func_812(var_503_string, var_529_float, var_530_int);
	bool var_501_bool;
	@HasAnimation(var_501_bool, "all", ("attack_middle" + var_500_int));
	if(var_501_bool != 0) {
		@PlayAnimation("all", ("attack_middle" + var_500_int));
		@WaitForAnimEnd();
		func_1211(var_503_string);
		bool var_619_bool = true;
		bool var_620_bool;
		func_2939(var_620_bool, var_0_cvector);
		var_622_bool = !var_620_bool; //@nz
		if(var_622_bool != 1) {
			if(var_4_int != 1)
				var_619_bool = false;
		}
		if(var_619_bool != 0) {
			@StopAsync();
			var_494_bool = false;
			return 8;
		}
		float var_624_float; int var_625_int;
		var_495_float = var_624_float;
		func_812(var_503_string, var_624_float, var_625_int);
		var_502_int = 1;

		for(;;) {
			var_503_string = (("attack_middle" + var_625_int) + "_") + var_502_int;
			@HasAnimation(var_501_bool, "all", var_503_string);
			if(!var_501_bool) { //@nz
			} else {
				@PlayAnimation("all", var_503_string);
				@WaitForAnimEnd();
				func_1211(var_503_string);
				bool var_647_bool = true;
				bool var_648_bool;
				func_2939(var_648_bool, var_0_cvector);
				var_650_bool = !var_648_bool; //@nz
				if(var_650_bool != 1) {
					if(var_4_int != 1)
						var_647_bool = false;
				}
				if(var_647_bool != 0) {
					@StopAsync();
					var_494_bool = false;
					return 8;
				}
				float var_652_float; int var_653_int;
				var_495_float = var_652_float;
				var_500_int = var_653_int;
				func_812(var_503_string, var_652_float, var_653_int);
				var_502_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_500_int));
		bool var_636_bool;
		func_1223(var_636_bool);
		if(var_636_bool != 0) {
			bool var_637_bool;
			func_997(var_637_bool, 0.75);
			@StopAsync();
		}
		var_494_bool = true;
		return 8;

	}
}


void func_2903(bool var_216_bool, object var_217_object)
{
	if(var_217_object == null) {
		var_216_bool = false;
		return 4;
	}
	bool var_223_bool = false;
	var_226_bool = IsFuncExist(var_217_object, "IsDead", 1);
	if(var_226_bool != 0) {
		bool var_227_bool; object var_228_object;
		var_217_object = var_228_object;
		func_2898(var_227_bool, var_228_object);
		if(var_227_bool != 0)
			var_223_bool = true;
	}
	if(var_223_bool != 0) {
		var_216_bool = false;
		return 4;
	}
	object var_220_object;
	@GetScene(var_220_object);
	if(var_220_object == null) {
		var_216_bool = false;
		return 4;
	}
	object var_221_object;
	var_217_object->GetScene(var_221_object);
	if(var_220_object != var_221_object) {
		var_216_bool = false;
		return 4;
	}
	var_216_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_3431(bool var_21_bool, object var_22_object)
{
	bool var_23_bool = false;
	var_26_bool = IsFuncExist(var_22_object, "IsDead", 1);
	if(var_26_bool != 0) {
		bool var_27_bool; object var_28_object;
		var_22_object = var_28_object;
		func_2898(var_27_bool, var_28_object);
		if(var_27_bool != 0)
			var_23_bool = true;
	}
	if(var_23_bool != 0) {
		bool var_31_bool; object var_32_object;
		func_2813(var_31_bool, var_32_object, "b9q03_corpse");
		if(var_31_bool != 0) {
			var_21_bool = false;
			return 0;
		}
		var_32_object->SetProperty("b9q03_corpse", 1);
		bool var_42_bool; object var_43_object;
		var_22_object = var_43_object;
		func_3647(var_42_bool, var_43_object);
		var_42_bool = var_21_bool;
		return 0;
	EMIT "GOTO 0xda0";
	}
	bool var_50_bool; object var_51_object;
	var_22_object = var_51_object;
	func_2808(var_50_bool, var_51_object);
	if(var_50_bool != 0) {
		bool var_54_bool; object var_55_object;
		var_22_object = var_55_object;
		func_3701(var_54_bool, var_55_object);
		var_54_bool = var_21_bool;
		return 0;
	EMIT "GOTO 0xda0";
	}
	bool var_62_bool; object var_63_object;
	var_22_object = var_63_object;
	func_2813(var_62_bool, var_63_object, "b9q03");
	if(var_62_bool != 0) {
		bool var_65_bool; object var_66_object;
		var_22_object = var_66_object;
		func_3701(var_65_bool, var_66_object);
		var_65_bool = var_21_bool;
		return 0;
	}
	var_21_bool = false;
}


void func_1385(cvector var_0_cvector, cvector var_1_cvector, bool var_295_bool, object var_296_object, float var_297_float, float var_298_float, bool var_299_bool, bool var_300_bool)
{
	bool var_309_bool; object var_311_object; cvector var_312_cvector; cvector var_313_cvector; float var_315_float; object var_316_object;
	var_0_cvector = false;
	var_1_cvector = var_296_object;
	bool var_310_bool;
	var_300_bool = var_310_bool;
	
	for(;;) {
		bool var_317_bool; object var_318_object;
		var_296_object = var_318_object;
		func_1525(var_317_bool, var_318_object);
		if(!var_317_bool) { //@nz
			var_295_bool = false;
			return 16;
		}
		var_296_object->GetPosition(var_312_cvector);
		@GetPosition(var_313_cvector);
		var_315_float = (var_312_cvector - var_313_cvector) | (var_312_cvector - var_313_cvector);
		bool var_322_bool = false;
		if(var_298_float > 0) {
			if(var_315_float > (var_298_float * var_298_float))
				var_322_bool = true;
		}
		if(var_322_bool != 0) {
			@Stop();
			var_295_bool = false;
			return 16;
		}
		if(var_315_float > (var_297_float * var_297_float)) {
			var_296_object->GetPFPosition(var_312_cvector);
			@FindPathTo(var_316_object, var_312_cvector);
			if(var_316_object != null) {
				var_316_object = var_311_object;
				var_316_object = null;
			}
			if(var_311_object != null) {
				if(var_310_bool == 0) goto Label_1438;
				var_310_bool = false;
				@RotatePath(var_311_object, var_309_bool);
				if(!var_309_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_335_string;
						func_1532(var_335_string);
						string var_336_string;
						func_1534(var_336_string);
						@FollowPath(var_311_object, var_299_bool, var_309_bool, var_335_string, var_336_string);
						if(!var_309_bool) { //@nz
							if(var_0_cvector == 0) goto Label_1457;
							var_311_object = null;
						}
					EMIT "GOTO 0x5b2";

					Label_1457:
						} else {
					var_311_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_309_bool);
					if(!var_309_bool) { //@nz
						if(var_0_cvector != 0) {
							var_311_object = null;
							goto Label_1485;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1485;
		}
			var_316_object = null;
			goto Label_1483;

		Label_1483:
			var_311_object = null;

		}
	Label_1485:
		for(;;) {
			var_295_bool = !var_0_cvector;
			return 16;

			}
	}
	
}


void func_2939(bool var_212_bool, object var_213_object)
{
	object var_217_object;
	var_213_object = var_217_object;
	bool var_216_bool;
	func_2903(var_216_bool, var_217_object);
	if(!var_216_bool) { //@nz
		var_212_bool = false;
		return 2;
	}
	bool var_234_bool; object var_235_object;
	func_2813(var_234_bool, var_235_object, "noaccess");
	if(!var_234_bool) { //@nz
		var_212_bool = true;
		return 2;
	}
	int var_215_int;
	var_235_object->GetProperty("noaccess", var_215_int);
	var_212_bool = var_215_int == 0;
}


void func_1929(bool var_919_bool)
{
	var_919_bool = true;
}


void func_1931(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_1936(bool var_932_bool, cvector var_933_cvector, cvector var_934_cvector, bool var_935_bool)
{
	var_937_float = GetByIndex(var_933_cvector, 1);
	SetByIndex(var_933_cvector, 1) = (var_937_float + 30);
	bool var_939_bool; cvector var_940_cvector; cvector var_941_cvector; bool var_944_bool;
	var_933_cvector = var_940_cvector;
	var_934_cvector = var_941_cvector;
	func_2005(var_944_bool, var_939_bool, var_940_cvector, var_941_cvector, (float)100, (float)4000, var_944_bool, true);
	var_939_bool = var_932_bool;
}


void func_2963(object var_37_object)
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


void func_2455(string var_682_string)
{
	@WaitForAnimEnd();
	bool var_687_bool;
	func_3100(var_687_bool);
	if(!var_687_bool) //@nz
		return 4;
	bool var_685_bool;
	@HasAnimation(var_685_bool, "all", var_682_string);
	if(!var_685_bool) //@nz
		return 4;
	@PlayAnimation("all", var_682_string);
	bool var_686_bool;
	@WaitForAnimEnd(var_686_bool);
}


// @pe
void func_3490(bool var_21_bool, object var_22_object)
{
	object var_24_object;
	var_22_object = var_24_object;
	bool var_23_bool;
	func_2808(var_23_bool, var_24_object);
	if(var_23_bool != 0) {
		bool var_27_bool; object var_28_object;
		var_22_object = var_28_object;
		func_3683(var_27_bool, var_28_object);
		var_27_bool = var_21_bool;
		return 0;
	EMIT "GOTO 0xdbb";
	}
	bool var_35_bool; object var_36_object;
	var_22_object = var_36_object;
	func_2813(var_35_bool, var_36_object, "b9q03");
	if(var_35_bool != 0) {
		bool var_44_bool; object var_45_object;
		var_22_object = var_45_object;
		func_3683(var_44_bool, var_45_object);
		var_44_bool = var_21_bool;
		return 0;
	}
	var_21_bool = false;
}


void func_2476(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_2481(object var_21_object)
{
	var_23_int = GlobalVars[3];
	if(1 == var_23_int)
		func_3730(false);
	var_35_int = GlobalVars[3];
	if(3 == var_35_int)
		func_3755(false);
	object var_46_object;
	object var_50_object;
	func_3168(var_50_object);
	var_50_object = var_46_object;
	func_3116(var_46_object, "coffee", 1, 3);
	object var_61_object;
	object var_65_object;
	func_3168(var_65_object);
	var_65_object = var_61_object;
	func_3116(var_61_object, "tvirin", 1, 6);
	object var_66_object;
	object var_70_object;
	func_3168(var_70_object);
	var_70_object = var_66_object;
	func_3116(var_66_object, "silver_ring", 1, 9);
	object var_71_object;
	object var_75_object;
	func_3168(var_75_object);
	var_75_object = var_71_object;
	func_3116(var_71_object, "gold_ring", 1, 8);
	object var_76_object;
	object var_80_object;
	func_3168(var_80_object);
	var_80_object = var_76_object;
	func_3116(var_76_object, "bracelet", 1, 6);
	object var_81_object;
	object var_85_object;
	func_3168(var_85_object);
	var_85_object = var_81_object;
	func_3116(var_81_object, "watch", 1, 9);
	object var_86_object;
	object var_90_object;
	func_3168(var_90_object);
	var_90_object = var_86_object;
	func_3116(var_86_object, "beads", 1, 9);
	object var_91_object;
	object var_95_object;
	func_3168(var_95_object);
	var_95_object = var_91_object;
	func_3116(var_91_object, "ear_ring", 1, 9);
	object var_96_object;
	object var_100_object;
	func_3168(var_100_object);
	var_100_object = var_96_object;
	func_3116(var_96_object, "feromicin", 1, 10);
	func_3298();
	object var_121_object;
	var_21_object = var_121_object;
	func_2604(var_121_object);
}


// @pe
void func_445(float var_7_float, object var_141_object)
{
	var_7_float = var_141_object;
	@SetTimer(1, 1);
	object var_153_object;
	func_519(var_146_bool, var_147_bool, var_148_float, var_149_int, var_150_object, var_153_object, var_153_object, false, 150.0);
	@KillTimer(1);
}


void func_3517(bool var_42_bool)
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


void func_3007(object var_24_object, int var_25_int, float var_26_float)
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
		func_2801(var_54_cvector, var_55_object);
		var_54_cvector = var_53_cvector;
		func_3174(var_52_cvector, var_53_cvector);
		var_52_cvector = var_36_cvector;
		@CreateVectorVector(var_37_object);
		var_38_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_38_int), var_39_bool, var_40_cvector, var_41_cvector);
			if(!var_39_bool) { //@nz
				break;
			Label_3069:
				var_37_object = null;
	}
			object var_114_object;
			var_24_object = var_114_object;
			func_2963(var_114_object);
		}
		if((var_41_cvector | var_36_cvector) >= 0.70710677)
			var_37_object->add(var_40_cvector);
		var_38_int += 1;
	}
	int var_42_int;
	var_37_object->size(var_42_int);
	if(var_42_int == 0) goto Label_3069;
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
	func_3075(var_71_float, var_72_cvector, var_73_cvector);
}


// @pe
void func_461(float var_540_float)
{
	var_540_float = 0.1;
}


// @pe
void func_1487(cvector var_0_cvector, cvector var_1_cvector, int var_39_int)
{
	if(var_39_int != 0)
		return 0;
	bool var_42_bool;
	func_1525(var_42_bool, var_1_cvector);
	if(!var_42_bool) //@nz
		var_0_cvector = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_464(int var_547_int)
{
	var_547_int = 0;
}


void func_467(int var_608_int)
{
	int var_609_int;
	func_3808(var_609_int);
	var_609_int = var_608_int;
}


void func_2003(bool var_962_bool)
{
	var_962_bool = true;
}


void func_2005(cvector var_0_cvector, bool var_939_bool, cvector var_940_cvector, cvector var_941_cvector, float var_942_float, float var_943_float, bool var_944_bool, bool var_945_bool)
{
	bool var_954_bool; object var_956_object; cvector var_957_cvector; cvector var_958_cvector; float var_960_float; object var_961_object;
	var_0_cvector = false;
	bool var_955_bool;
	var_945_bool = var_955_bool;
	
	for(;;) {
		bool var_962_bool;
		func_2003(var_962_bool);
		if(!var_962_bool) { //@nz
			var_939_bool = false;
			return 16;
		}
		var_940_cvector = var_957_cvector;
		@GetPosition(var_958_cvector);
		var_960_float = (var_957_cvector - var_958_cvector) | (var_957_cvector - var_958_cvector);
		bool var_964_bool = false;
		if(var_943_float > 0) {
			if(var_960_float > (var_943_float * var_943_float))
				var_964_bool = true;
		}
		if(var_964_bool != 0) {
			@Stop();
			var_939_bool = false;
			return 16;
		}
		if(var_960_float > (var_942_float * var_942_float)) {
			@FindPathTo(var_961_object, var_957_cvector);
			if(var_961_object != null) {
				var_961_object = var_956_object;
				var_961_object = null;
			}
			if(var_956_object != null) {
				if(var_955_bool == 0) goto Label_2053;
				var_955_bool = false;
				@RotatePath(var_956_object, var_954_bool);
				if(!var_954_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_980_string;
						func_2145(var_980_string);
						string var_981_string;
						func_2147(var_981_string);
						@FollowPath(var_956_object, var_944_bool, var_954_bool, var_980_string, var_981_string);
						if(!var_954_bool) { //@nz
							if(var_0_cvector == 0) goto Label_2072;
							var_956_object = null;
						}
					EMIT "GOTO 0x819";

					Label_2072:
						} else {
					var_956_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_954_bool);
					if(!var_954_bool) { //@nz
						if(var_0_cvector != 0) {
							var_956_object = null;
							goto Label_2100;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_2100;
		}
			var_961_object = null;
			goto Label_2098;

		Label_2098:
			var_956_object = null;

		}
	Label_2100:
		for(;;) {
			if(!var_0_cvector) { //@nz
				var_976_float = GetByIndex(var_941_cvector, 0);
				var_977_float = GetByIndex(var_941_cvector, 2);
				@RotateAsync(var_976_float, var_977_float);
			}
			var_939_bool = !var_0_cvector;
			return 16;

			}
	}
	
}


void func_997(bool var_637_bool, float var_638_float)
{
	float var_641_float; bool var_642_bool;
	@rand(var_641_float);
	if(var_641_float < var_638_float) {

		for(;;) {
			@IsAnimationPlaying(var_642_bool);
			if(!var_642_bool) { //@nz
			} else {
				bool var_645_bool;
				func_1107(var_645_bool);
				if(var_645_bool != 0) {
					var_637_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_637_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_1211(var_642_bool);
}


void func_1509(cvector var_0_cvector)
{
	var_0_cvector = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_1525(bool var_317_bool, object var_318_object)
{
	object var_320_object;
	var_318_object = var_320_object;
	bool var_319_bool;
	func_2939(var_319_bool, var_320_object);
	var_319_bool = var_317_bool;
}


void func_1532(string var_335_string)
{
	var_335_string = "walk";
}


void func_1534(string var_336_string)
{
	var_336_string = "run";
}



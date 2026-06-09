event OnDraw 0;
event OnKeyDown 101;
event OnMessage 200;
event OnChar 100;
event OnKeyUp 102;

task t0
{
	var object tv0;
	var int tv1;
	var int tv2;
	var bool tv3;

	void init(string a0, bool a1)
	{
		tv3 = a1;
		@SetOwnerDraw(true);
		@ShowCursor(false);
		@CaptureKeyboard();
		@GetWindowSize(tv1, tv2);
		@LoadVideo(a0);
		@FindVideo(tv0, a0);
		tv0->Play(false);
		@ProcessEvents();
		@SetOwnerDraw(false);
		@ShowCursor(true);
		@ReleaseVideo(a0);
	}

	void OnDraw(void)
	{
		bool L0;
		tv0->IsLost(L0);
		if (L0) {
			bool L1;
			tv0->Restore(L1);
			if (!L1) {
				return;
			}
		}
		bool L2;
		tv0->IsPlaying(L2);
		if (L2) {
			tv0->StretchBlit(0, 0, tv1, tv2);
		} else {
			tv0->StretchBlit(0, 0, tv1, tv2);
			@StopEventProcessing();
		}
	}

	void OnKeyDown(int a0)
	{
		if (!tv3) {
			return;
		}
		if (a0 == 27 || a0 == 32 || a0 == 257 || a0 == 262) {
			@StopEventProcessing();
			tv0->Stop();
		}
	}
}

task t1
{
	var object tv0;

	void init(int a0)
	{
		@CreateWindow("intro.xml", false, tv0);
		@SendMessage(a0, "intro");
		@ProcessEvents();
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a1 == "intro") {
			tv0->DestroyWindow();
			@StopEventProcessing();
		}
	}
}

maintask t2
{
	var int tv0;
	var int tv1;
	var int tv2;
	var object tv3;
	var object tv4;
	var object tv5;
	var object tv6;
	var object tv7;
	var object tv8;
	var object tv9;
	var string tv10;
	var string tv11;
	var string tv12;
	var string tv13;
	var bool tv14;
	var object tv15;

	void init(void)
	{
		f_82_a1_v(true);
	}

	object f_72_a0_o(void)
	{
		object L0;
		@CreateWindow("game_buttons.xml", false, L0);
		return L0;
	}

	object f_7a_a0_o(void)
	{
		object L0;
		@CreateWindow("game_logo.xml", false, L0);
		return L0;
	}

	void f_82_a1_v(bool a0)
	{
		tv14 = a0;
		@CaptureKeyboard();
		tv2 = 0;
		@GetWindowSize(tv0, tv1);
		@SetCursor("default");
		@SetBackground("default");
		@PlaySound("menumusic");
		@ShowCursor(true);
		f_382_a1_v("");
		f_387_a1_v("");
		if (a0) {
			@CreateWindow("game_choose_pers.xml", false, tv5);
		} else {
			tv3 = f_72_a0_o();
			tv4 = f_7a_a0_o();
		}
		while (!tv2) {
			@ProcessEvents();
		}
		f_268_a0_v();
		if (tv2 == 1) {
			@PauseSound("menumusic");
			t1{1};
			t0{"intro_danko.wmv", true};
			@RemoveWorld();
			@UISync();
			@DestroyWindow();
			@NewGame("world_danko.xml", "player_danko.xml");
		} else {
			if (tv2 == 2) {
				@PauseSound("menumusic");
				t1{2};
				t0{"intro_burah.wmv", true};
				@RemoveWorld();
				@UISync();
				@DestroyWindow();
				@NewGame("world_burah.xml", "player_burah.xml");
			} else {
				if (tv2 == 3) {
					@PauseSound("menumusic");
					t1{3};
					t0{"intro_klara.wmv", true};
					@RemoveWorld();
					@UISync();
					@DestroyWindow();
					@NewGame("world_klara.xml", "player_klara.xml");
				} else {
					if (tv2 == 4) {
						bool L0;
						@PauseSound("menumusic");
						@Trace("Loading : " + tv10);
						@RemoveWorld();
						@UISync();
						@DestroyWindow();
						@LoadGame(L0, tv10);
					} else {
						if (tv2 == 5) {
							if (!tv9) {
								bool L1;
								@DestroyWindow();
								@SaveGame(L1);
							} else {
								bool L2;
								string L3;
								@DestroyWindow();
								tv9->GetFileName(L3);
								@SaveGame(L2, L3);
							}
						} else {
							if (tv2 == 7) {
								@RemoveWorld();
								@UISync();
								@DestroyWindow();
								@NewGame("world_intro.xml", "player_intro.xml");
							}
						}
					}
				}
			}
		}
	}

	void OnChar(int a0)
	{
		if (a0 == 27) {
			f_258_a0_v();
		}
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a1 == "newgame") {
			tv2 = 7;
			@StopEventProcessing();
		} else {
			if (a1 == "quitgame") {
				@UITrace("Quit game");
				@Quit();
				return;
			} else {
				if (a1 == "loadgame") {
					f_268_a0_v();
					@CreateWindow("load.xml", false, tv6);
					return;
				} else {
					if (a1 == "savegame") {
						f_268_a0_v();
						@CreateWindow("save.xml", false, tv7);
						return;
					} else {
						if (a1 == "gameoptions") {
							f_268_a0_v();
							@CreateWindow("options.xml", false, tv8);
							return;
						} else {
							if (a1 == "continue") {
								tv2 = 6;
								@StopEventProcessing();
								return;
							} else {
								if (a1 == "credits") {
									f_268_a0_v();
									t1{8};
									tv3 = f_72_a0_o();
									tv4 = f_7a_a0_o();
									@ShowCursor(true);
									@CaptureKeyboard();
									f_382_a1_v("");
								} else {
									if (a1 == "danko") {
										if (a0 == 0) {
											tv2 = 1;
											@StopEventProcessing();
										} else {
											if (a0 == 1) {
												@SendMessage(202, "player_name");
												@SendMessage(203, "player_desc");
											} else {
												if (a0 == 2) {
													@SendMessage(-1, "player_name");
													@SendMessage(-1, "player_desc");
												}
											}
										}
										return;
									} else {
										if (a1 == "burah") {
											if (a0 == 0) {
												tv2 = 2;
												@StopEventProcessing();
											} else {
												if (a0 == 1) {
													@SendMessage(205, "player_name");
													@SendMessage(206, "player_desc");
												} else {
													if (a0 == 2) {
														@SendMessage(-1, "player_name");
														@SendMessage(-1, "player_desc");
													}
												}
											}
											return;
										} else {
											if (a1 == "klara") {
												if (a0 == 0) {
													if (!f_45d_a0_b() && !f_455_a0_b()) {
														return;
													}
													tv2 = 3;
													@StopEventProcessing();
												} else {
													if (a0 == 1) {
														@SendMessage(208, "player_name");
														if (!f_45d_a0_b() && !f_455_a0_b()) {
															@SendMessage(213, "player_desc");
														} else {
															@SendMessage(209, "player_desc");
														}
													} else {
														if (a0 == 2) {
															@SendMessage(-1, "player_name");
															@SendMessage(-1, "player_desc");
														}
													}
												}
												return;
											} else {
												if (a1 == "load") {
													if (a0 == 0) {
														tv2 = 4;
														a2->GetFileName(tv10);
														@StopEventProcessing();
													} else {
														f_258_a0_v();
													}
													return;
												} else {
													if (a1 == "save") {
														if (a0 == 0) {
															tv2 = 5;
															tv9 = a2;
															@StopEventProcessing();
														} else {
															f_258_a0_v();
														}
														return;
													} else {
														if (a1 == "options") {
															f_258_a0_v();
															return;
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

	void f_258_a0_v(void)
	{
		f_382_a1_v("");
		f_268_a0_v();
		tv3 = f_72_a0_o();
		tv4 = f_7a_a0_o();
	}

	void f_268_a0_v(void)
	{
		if (tv3) {
			tv3->DestroyWindow();
		}
		if (tv4) {
			tv4->DestroyWindow();
		}
		if (tv5) {
			tv5->DestroyWindow();
		}
		if (tv6) {
			tv6->DestroyWindow();
		}
		if (tv7) {
			tv7->DestroyWindow();
		}
		if (tv8) {
			tv8->DestroyWindow();
		}
		@CaptureKeyboard();
	}

	void f_283_a0_v(void)
	{
		@SendMessage(0, "newgame");
		@SendMessage(0, "loadgame");
		@SendMessage(0, "gameoptions");
		@SendMessage(0, "credits");
		@SendMessage(0, "quitgame");
	}

	void f_298_a0_v(void)
	{
		@SendMessage(0, "danko");
		@SendMessage(0, "burah");
		@SendMessage(0, "klara");
	}

	void f_2a5_a0_v(void)
	{
		f_298_a0_v();
		if (f_385_a0_s() == "") {
			@SendMessage(1, "danko");
			f_387_a1_v("danko");
		} else {
			if (f_385_a0_s() == "danko") {
				@SendMessage(1, "burah");
				f_387_a1_v("burah");
			} else {
				if (f_385_a0_s() == "burah") {
					@SendMessage(1, "klara");
					f_387_a1_v("klara");
				} else {
					if (f_385_a0_s() == "klara") {
						@SendMessage(1, "danko");
						f_387_a1_v("danko");
					}
				}
			}
		}
	}

	void f_2e4_a0_v(void)
	{
		f_298_a0_v();
		if (f_385_a0_s() == "") {
			@SendMessage(1, "klara");
			f_387_a1_v("klara");
		} else {
			if (f_385_a0_s() == "klara") {
				@SendMessage(1, "burah");
				f_387_a1_v("burah");
			} else {
				if (f_385_a0_s() == "burah") {
					@SendMessage(1, "danko");
					f_387_a1_v("danko");
				} else {
					if (f_385_a0_s() == "danko") {
						@SendMessage(1, "klara");
						f_387_a1_v("klara");
					}
				}
			}
		}
	}

	void f_323_a0_v(void)
	{
		f_283_a0_v();
		if (f_380_a0_s() == "") {
			@SendMessage(1, "newgame");
			f_382_a1_v("newgame");
		} else {
			if (f_380_a0_s() == "newgame") {
				@SendMessage(1, "loadgame");
				f_382_a1_v("loadgame");
			} else {
				if (f_380_a0_s() == "loadgame") {
					@SendMessage(1, "gameoptions");
					f_382_a1_v("gameoptions");
				} else {
					if (f_380_a0_s() == "gameoptions") {
						@SendMessage(1, "credits");
						f_382_a1_v("credits");
					} else {
						if (f_380_a0_s() == "credits") {
							@SendMessage(1, "quitgame");
							f_382_a1_v("quitgame");
						} else {
							if (f_380_a0_s() == "quitgame") {
								@SendMessage(1, "newgame");
								f_382_a1_v("newgame");
							}
						}
					}
				}
			}
		}
	}

	string f_380_a0_s(void)
	{
		return tv11;
	}

	void f_382_a1_v(string a0)
	{
		tv11 = a0;
	}

	string f_385_a0_s(void)
	{
		return tv12;
	}

	void f_387_a1_v(string a0)
	{
		tv12 = a0;
	}

	void f_38a_a0_v(void)
	{
		f_283_a0_v();
		if (f_380_a0_s() == "") {
			@SendMessage(1, "quitgame");
			f_382_a1_v("quitgame");
		} else {
			if (f_380_a0_s() == "newgame") {
				@SendMessage(1, "quitgame");
				f_382_a1_v("quitgame");
			} else {
				if (f_380_a0_s() == "loadgame") {
					@SendMessage(1, "newgame");
					f_382_a1_v("newgame");
				} else {
					if (f_380_a0_s() == "gameoptions") {
						@SendMessage(1, "loadgame");
						f_382_a1_v("loadgame");
					} else {
						if (f_380_a0_s() == "credits") {
							@SendMessage(1, "gameoptions");
							f_382_a1_v("gameoptions");
						} else {
							if (f_380_a0_s() == "quitgame") {
								@SendMessage(1, "credits");
								f_382_a1_v("credits");
							}
						}
					}
				}
			}
		}
	}

	void OnKeyUp(int a0)
	{
		if (!tv14) {
			if (a0 == 272) {
				@HideCursor();
				f_38a_a0_v();
			} else {
				if (a0 == 274) {
					@HideCursor();
					f_323_a0_v();
				}
			}
		} else {
			if (a0 == 271) {
				@HideCursor();
				f_2a5_a0_v();
			} else {
				if (a0 == 273) {
					@HideCursor();
					f_2e4_a0_v();
				}
			}
		}
	}

	void OnKeyDown(int a0)
	{
		if (!tv14) {
			if (a0 == 267) {
				@HideCursor();
				f_38a_a0_v();
			} else {
				if (a0 == 268) {
					@HideCursor();
					f_323_a0_v();
				} else {
					if (a0 == 256) {
						if (f_380_a0_s() != "") {
							@SendMessage(2, f_380_a0_s());
						}
					}
				}
			}
		} else {
			if (a0 == 270) {
				@HideCursor();
				f_2a5_a0_v();
			} else {
				if (a0 == 269) {
					@HideCursor();
					f_2e4_a0_v();
				} else {
					if (a0 == 256) {
						if (f_385_a0_s() != "") {
							@SendMessage(2, f_385_a0_s());
						}
					}
				}
			}
		}
	}
}

bool f_455_a0_b(void)
{
	int L0;
	@GetRegistryData(L0, "BurahCompleted", 0);
	return L0 != 0;
}

bool f_45d_a0_b(void)
{
	int L0;
	@GetRegistryData(L0, "DankoCompleted", 0);
	return L0 != 0;
}


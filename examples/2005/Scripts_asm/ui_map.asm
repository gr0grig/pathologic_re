GlobalVarCount = 2
	G_VAR_0 float 
	G_VAR_1 float 

Strings:
	W:Map not found
	W:ui/ui_player.png
	A:GetSize
	A:GetMapParams
	A:ConvertToMapCoordinates
	W:map_chertez_force
	A:GetName
	W:pt_gmap_
	W:indoor map: pt_gmap_
	W:outdoor map
	W:default
	W:map_open
	W:map_chertez_state
	W:ui\ui_chertez_danko_bg.tex
	W:ui\ui_chertez_danko_
	W:ui\ui_chertez_burah_bg.tex
	W:ui\ui_chertez_burah_
	W:ui\ui_chertez_klara_bg.tex
	W:ui\ui_chertez_klara_
	A:clear
	A:GetMarkCount
	A:GetMark
	A:GetLocator
	A:add
	A:GetObjectFromPoint
	A:GetObjectID
	A:CreateObjectHighlight
	A:GetType
	W:quest_mark
	W:mainquest_mark
	W:info_mark
	A:Render
	A:Blit
	W:drag
	W:button_plus
	W:button_minus
	W:tavro
	A:ConvertToWorldCoordinates
	A:SetMapParams
	W:branch
	W:Region
	W:State
	W:Can't find main outdoor scene
	W:RMap
// @pool_raw:4d006100700020006e006f007400200066006f0075006e0064000000750069002f00750069005f0070006c0061007900650072002e0070006e006700000047657453697a65004765744d6170506172616d7300436f6e76657274546f4d6170436f6f7264696e61746573006d00610070005f006300680065007200740065007a005f0066006f0072006300650000004765744e616d6500700074005f0067006d00610070005f00000069006e0064006f006f00720020006d00610070003a002000700074005f0067006d00610070005f0000006f007500740064006f006f00720020006d00610070000000640065006600610075006c00740000006d00610070005f006f00700065006e0000006d00610070005f006300680065007200740065007a005f00730074006100740065000000750069005c00750069005f006300680065007200740065007a005f00640061006e006b006f005f00620067002e007400650078000000750069005c00750069005f006300680065007200740065007a005f00640061006e006b006f005f000000750069005c00750069005f006300680065007200740065007a005f00620075007200610068005f00620067002e007400650078000000750069005c00750069005f006300680065007200740065007a005f00620075007200610068005f000000750069005c00750069005f006300680065007200740065007a005f006b006c006100720061005f00620067002e007400650078000000750069005c00750069005f006300680065007200740065007a005f006b006c006100720061005f000000636c656172004765744d61726b436f756e74004765744d61726b004765744c6f6361746f7200616464004765744f626a65637446726f6d506f696e74004765744f626a6563744944004372656174654f626a656374486967686c69676874004765745479706500710075006500730074005f006d00610072006b0000006d00610069006e00710075006500730074005f006d00610072006b00000069006e0066006f005f006d00610072006b00000052656e64657200426c6974006400720061006700000062007500740074006f006e005f0070006c0075007300000062007500740074006f006e005f006d0069006e0075007300000074006100760072006f000000436f6e76657274546f576f726c64436f6f7264696e61746573005365744d6170506172616d73006200720061006e0063006800000052006500670069006f006e000000530074006100740065000000430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e006500000052004d00610070000000

Import:
	GetMap (1 args)
	Trace (1 args)
	CreatePolyImage (4 args)
	GetWindowSize (2 args)
	GetVariable (2 args)
	SetVariable (2 args)
	CreateObjectVector (1 args)
	GetMainOutdoorScene (1 args)
	GetActiveScene (1 args)
	GetPlayerMapPos (2 args)
	ShowCursor (0 args)
	SetCursor (1 args)
	SetOwnerDraw (1 args)
	SetNeedUpdate (1 args)
	SetBackground (1 args)
	EnableClipping (1 args)
	CaptureKeyboard (0 args)
	PlaySound (1 args)
	ProcessEvents (0 args)
	LoadImage (1 args)
	SetRegionColor (5 args)
	GetStringByID (2 args)
	SetTooltip (2 args)
	SetTooltip (3 args)
	Blit (3 args)
	ClientToScreen (2 args)
	RenderMap (8 args)
	RenderRegions (8 args)
	ScreenToClient (2 args)
	GetScreenSize (2 args)
	StretchBlit (6 args)
	GetPlayerMapAngle (1 args)
	SendMessage (2 args)
	DestroyWindow (0 args)
	GetGameTime (1 args)

RunOp = 0x11
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, int, int, int, int, int, int, int, int, int, int, int, float, float, float, bool, bool, bool, bool, bool, object, object, object, object, object, cvector, string) Params = 0
		EVENT_1 Op = 0x127 Vars = (float)
		EVENT_0 Op = 0x262 Vars = ()
		EVENT_11 Op = 0x297 Vars = (int, int)
		EVENT_12 Op = 0x2ac Vars = (int, int, bool)
		EVENT_8 Op = 0x2b2 Vars = (int, int)
		EVENT_10 Op = 0x2bf Vars = ()
		EVENT_15 Op = 0x2c1 Vars = (int, int, float)
		EVENT_200 Op = 0x301 Vars = (int, string, object)
		EVENT_101 Op = 0x325 Vars = (int)


0x0: PushEmpty(bool)
0x1: Stack[-1] = (bool) 0
0x2: Push((int) 2)
0x3: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x4: IF (Stack[-1] == 0) GOTO 0xc; Pop(1)

0x5: PushEmpty(int)
0x6: Call2 0x345

0x7: Pop(0)
0x8: Push((int) 8)
0x9: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xa: IF (Stack[-1] == 0) GOTO 0xc; Pop(1)

0xb: Stack[-1] = (bool) 1
0xc: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0xd: Stack[-1] = (bool) 1
0xe: Return(); Pop(0)

0xf: Stack[-1] = (bool) 0
0x10: Return(); Pop(0)

0x11: PushEmpty(float, float, int, object, string, int, int, int, int, float, float, int, object, string, int, int, int, int)
0x12: @ GetMap(Stack[-22]T)
0x13: Pop(0)
0x14: Pop(0); PushNull((bool) Stack[22 + Tasks[-1].StackPointer] == 0)
0x15: IF (Stack[-1] == 0) GOTO 0x1a; Pop(1)

0x16: Push("Map not found") // @poff=0
0x17: @ Trace(Stack[-1])
0x18: Pop(1)
0x19: Return(); Pop(18)

0x1a: Push((int) 16)
0x1b: Push((int) 16)
0x1c: Push("ui/ui_player.png") // @poff=28
0x1d: @ CreatePolyImage(Stack[-24]T, Stack[-3], Stack[-2], Stack[-1])
0x1e: Pop(3)
0x1f: @@@ GetSize(Stack[-1]T, Stack[-2]T); Obj=22 // @poff=62
0x20: Pop(0)
0x21: @@@ GetMapParams(Stack[-9], Stack[-8], Stack[-14]T); Obj=22 // @poff=70
0x22: Pop(0)
0x23: @@@ ConvertToMapCoordinates(Stack[-9], Stack[-8]); Obj=22 // @poff=83
0x24: Pop(0)
0x25: Stack[12 + Tasks[-1].StackPointer] = Stack[-9]
0x26: Stack[13 + Tasks[-1].StackPointer] = Stack[-8]
0x27: Stack[16 + Tasks[-1].StackPointer] = (bool)1
0x28: @ GetWindowSize(Stack[-3]T, Stack[-4]T)
0x29: Pop(0)
0x2a: Push(GlobalVars[0])
0x2b: Push((float)2048.0)
0x2c: Stack[-2] = Stack[3 + Tasks[-1].StackPointer] / Stack[-1]; Pop(1);
0x2d: GlobalVars[0] = Stack[-1]; Pop(1)
0x2e: Push(GlobalVars[1])
0x2f: Push(GlobalVars[0])
0x30: Stack[-1] = Stack[-2]
0x31: Pop(1)
0x32: GlobalVars[1] = Stack[-1]; Pop(1)
0x33: Stack[19 + Tasks[-1].StackPointer] = (bool)0
0x34: Push((int) 0)
0x35: Pop(1); Push((bool) Stack[14 + Tasks[-1].StackPointer] < Stack[-1])
0x36: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x37: Stack[18 + Tasks[-1].StackPointer] = (bool)1
0x38: PushEmpty()
0x39: Call2 0x99

0x3a: Pop(0)
0x3b: Stack[14 + Tasks[-1].StackPointer] = (int)2
0x3c: Push("map_chertez_force") // @poff=107
0x3d: @ GetVariable(Stack[-1], Stack[-8])
0x3e: Pop(1)
0x3f: Push(Stack[-7])
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: Stack[18 + Tasks[-1].StackPointer] = (bool)1
0x42: Push("map_chertez_force") // @poff=107
0x43: Push((int) 0)
0x44: @ SetVariable(Stack[-2], Stack[-1])
0x45: Pop(2)
0x46: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x47: Stack[5 + Tasks[-1].StackPointer] = (int)-1
0x48: Stack[6 + Tasks[-1].StackPointer] = (int)-1
0x49: Stack[15 + Tasks[-1].StackPointer] = (bool)0
0x4a: Stack[23 + Tasks[-1].StackPointer] = 0
0x4b: Stack[11 + Tasks[-1].StackPointer] = (int)-1
0x4c: @ CreateObjectVector(Stack[-20]T)
0x4d: Pop(0)
0x4e: @ GetMainOutdoorScene(Stack[-6])
0x4f: Pop(0)
0x50: @ GetActiveScene(Stack[-21]T)
0x51: Pop(0)
0x52: Pop(0); Push((bool) Stack[-6] != Stack[21 + Tasks[-1].StackPointer])
0x53: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x54: Stack[17 + Tasks[-1].StackPointer] = (bool)1
0x55: @@@ GetName(Stack[-5]); Obj=21 // @poff=143
0x56: Pop(0)
0x57: PushEmpty(cvector, string)
0x58: Push("pt_gmap_") // @poff=151
0x59: Stack[-2] = Stack[-1] + Stack[-8]; Pop(1);
0x5a: Call2 0x378

0x5b: Stack[25 + Tasks[-1].StackPointer] = Stack[-2]
0x5c: Pop(2)
0x5d: Push(CvectorIndex(Stack[25 + Tasks[-1].StackPointer], 0))
0x5e: Stack[-1] = Stack[-5]
0x5f: Pop(1)
0x60: Push(CvectorIndex(Stack[25 + Tasks[-1].StackPointer], 2))
0x61: Stack[-1] = Stack[-4]
0x62: Pop(1)
0x63: @@@ ConvertToMapCoordinates(Stack[-4], Stack[-3]); Obj=22 // @poff=83
0x64: Pop(0)
0x65: Push(CvectorIndex(Stack[25 + Tasks[-1].StackPointer], 0))
0x66: Stack[-5] = Stack[-1]
0x67: CvectorIndex(Stack[25 + Tasks[-1].StackPointer], 0) = Stack[-1];
0x68: Push(CvectorIndex(Stack[25 + Tasks[-1].StackPointer], 2))
0x69: Stack[-4] = Stack[-1]
0x6a: CvectorIndex(Stack[25 + Tasks[-1].StackPointer], 2) = Stack[-1];
0x6b: Push("indoor map: pt_gmap_") // @poff=169
0x6c: Pop(1); Push(Stack[-1] + Stack[-6]);
0x6d: @ Trace(Stack[-1])
0x6e: Pop(1)
0x6f: GOTO 0x7c

0x70: Push("outdoor map") // @poff=211
0x71: @ Trace(Stack[-1])
0x72: Pop(1)
0x73: Stack[17 + Tasks[-1].StackPointer] = (bool)0
0x74: @ GetPlayerMapPos(Stack[-2], Stack[-1])
0x75: Pop(0)
0x76: Push(CvectorIndex(Stack[25 + Tasks[-1].StackPointer], 0))
0x77: Stack[-3] = Stack[-1]
0x78: CvectorIndex(Stack[25 + Tasks[-1].StackPointer], 0) = Stack[-1];
0x79: Push(CvectorIndex(Stack[25 + Tasks[-1].StackPointer], 2))
0x7a: Stack[-2] = Stack[-1]
0x7b: CvectorIndex(Stack[25 + Tasks[-1].StackPointer], 2) = Stack[-1];
0x7c: PushEmpty()
0x7d: Call2 0xdf

0x7e: Pop(0)
0x7f: @ ShowCursor()
0x80: Pop(0)
0x81: Push("default") // @poff=235
0x82: @ SetCursor(Stack[-1])
0x83: Pop(1)
0x84: Push((bool) 1)
0x85: @ SetOwnerDraw(Stack[-1])
0x86: Pop(1)
0x87: Push((bool) 1)
0x88: @ SetNeedUpdate(Stack[-1])
0x89: Pop(1)
0x8a: Push("default") // @poff=235
0x8b: @ SetBackground(Stack[-1])
0x8c: Pop(1)
0x8d: Push((bool) 1)
0x8e: @ EnableClipping(Stack[-1])
0x8f: Pop(1)
0x90: @ CaptureKeyboard()
0x91: Pop(0)
0x92: Push("map_open") // @poff=251
0x93: @ PlaySound(Stack[-1])
0x94: Pop(1)
0x95: @ ProcessEvents()
0x96: Pop(0)
0x97: Return(); Pop(18)

0x98: Stack[-6] = 0
0x99: PushEmpty(int, int)
0x9a: Push( Stack[19 + Tasks[-1].StackPointer] )
0x9b: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x9c: Return(); Pop(2)

0x9d: Push("map_chertez_state") // @poff=269
0x9e: @ GetVariable(Stack[-1], Stack[-2])
0x9f: Pop(1)
0xa0: PushEmpty(int)
0xa1: Call2 0x33f

0xa2: Pop(0)
0xa3: Push((int) 0)
0xa4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa5: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xa6: Stack[26 + Tasks[-1].StackPointer] = "ui\ui_chertez_danko_bg.tex" // @poff=305
0xa7: PushEmpty(bool)
0xa8: Stack[-1] = (bool) 0
0xa9: Push((int) 1)
0xaa: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xab: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xac: Push((int) 6)
0xad: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xaf: Stack[-1] = (bool) 1
0xb0: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb1: Push("ui\ui_chertez_danko_") // @poff=359
0xb2: Pop(1); Push(Stack[-1] + Stack[-2]);
0xb3: Push(".tex") // @poff=349
0xb4: Stack[26 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(2);
0xb5: GOTO 0xdb

0xb6: PushEmpty(int)
0xb7: Call2 0x33f

0xb8: Pop(0)
0xb9: Push((int) 1)
0xba: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xbc: Stack[26 + Tasks[-1].StackPointer] = "ui\ui_chertez_burah_bg.tex" // @poff=401
0xbd: PushEmpty(bool)
0xbe: Stack[-1] = (bool) 0
0xbf: Push((int) 1)
0xc0: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xc1: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc2: Push((int) 6)
0xc3: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0xc4: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc5: Stack[-1] = (bool) 1
0xc6: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xc7: Push("ui\ui_chertez_burah_") // @poff=455
0xc8: Pop(1); Push(Stack[-1] + Stack[-2]);
0xc9: Push(".tex") // @poff=349
0xca: Stack[26 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(2);
0xcb: GOTO 0xdb

0xcc: Stack[26 + Tasks[-1].StackPointer] = "ui\ui_chertez_klara_bg.tex" // @poff=497
0xcd: PushEmpty(bool)
0xce: Stack[-1] = (bool) 0
0xcf: Push((int) 1)
0xd0: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xd1: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd2: Push((int) 6)
0xd3: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd5: Stack[-1] = (bool) 1
0xd6: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xd7: Push("ui\ui_chertez_klara_") // @poff=551
0xd8: Pop(1); Push(Stack[-1] + Stack[-2]);
0xd9: Push(".tex") // @poff=349
0xda: Stack[26 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(2);
0xdb: @ LoadImage(Stack[-26]T)
0xdc: Pop(0)
0xdd: Stack[19 + Tasks[-1].StackPointer] = (bool)1
0xde: Return(); Pop(2)

0xdf: PushEmpty(int, int)
0xe0: Stack[-1] = (int) 0
0xe1: Push((int) 16)
0xe2: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xe3: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0xe4: PushEmpty(bool, int)
0xe5: Stack[-3] = Stack[-1]
0xe6: Call2 0x354

0xe7: Pop(1)
0xe8: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xe9: Push((float)0.5)
0xea: Push((float)0.5)
0xeb: Push((float)0.5)
0xec: Push((float)0.0)
0xed: @ SetRegionColor(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xee: Pop(4)
0xef: GOTO 0x107

0xf0: PushEmpty(bool, int)
0xf1: Stack[-3] = Stack[-1]
0xf2: Call2 0x360

0xf3: Pop(1)
0xf4: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xf5: Push((float)0.5)
0xf6: Push((float)0.0)
0xf7: Push((float)0.0)
0xf8: Push((float)0.5)
0xf9: @ SetRegionColor(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xfa: Pop(4)
0xfb: GOTO 0x107

0xfc: PushEmpty(bool, int)
0xfd: Stack[-3] = Stack[-1]
0xfe: Call2 0x36c

0xff: Pop(1)
0x100: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x101: Push((float)0.0)
0x102: Push((float)0.0)
0x103: Push((float)0.0)
0x104: Push((float)0.5)
0x105: @ SetRegionColor(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x106: Pop(4)
0x107: Push((int) 1)
0x108: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x109: GOTO 0xe1

0x10a: Return(); Pop(2)

0x10b: PushEmpty()
0x10c: Push((int) 2)
0x10d: Pop(1); Push(Stack[3 + Tasks[-1].StackPointer] / Stack[-1]);
0x10e: Pop(1); Push(Stack[-2] - Stack[-1]);
0x10f: Pop(1); Push(Stack[-1] / Stack[14 + Tasks[-1].StackPointer]);
0x110: Stack[-3] = Stack[12 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x111: Return(); Pop(0)

0x112: PushEmpty()
0x113: Push((int) 2)
0x114: Pop(1); Push(Stack[4 + Tasks[-1].StackPointer] / Stack[-1]);
0x115: Pop(1); Push(Stack[-2] - Stack[-1]);
0x116: Pop(1); Push(Stack[-1] / Stack[14 + Tasks[-1].StackPointer]);
0x117: Stack[-3] = Stack[13 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x118: Return(); Pop(0)

0x119: PushEmpty()
0x11a: Pop(0); Push(Stack[-1] - Stack[12 + Tasks[-1].StackPointer]);
0x11b: Pop(1); Push(Stack[-1] * Stack[14 + Tasks[-1].StackPointer]);
0x11c: Push((int) 2)
0x11d: Pop(1); Push(Stack[3 + Tasks[-1].StackPointer] / Stack[-1]);
0x11e: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x11f: Return(); Pop(0)

0x120: PushEmpty()
0x121: Pop(0); Push(Stack[-1] - Stack[13 + Tasks[-1].StackPointer]);
0x122: Pop(1); Push(Stack[-1] * Stack[14 + Tasks[-1].StackPointer]);
0x123: Push((int) 2)
0x124: Pop(1); Push(Stack[4 + Tasks[-1].StackPointer] / Stack[-1]);
0x125: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x126: Return(); Pop(0)

0x127: PushEmpty(int, int, int, int, int, int, float, float, int, int, int, object, string, cvector, int, int, int, int, string, int, int, int, int, int, int, float, float, int, int, int, object, string, cvector, int, int, int, int, string)
0x128: Pop(0); Push(Stack[3 + Tasks[-1].StackPointer] / Stack[14 + Tasks[-1].StackPointer]);
0x129: Push((int) 2)
0x12a: Pop(2); Push(Stack[-2] / Stack[-1]);
0x12b: Stack[-20] = Stack[12 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x12c: Pop(0); Push(Stack[3 + Tasks[-1].StackPointer] / Stack[14 + Tasks[-1].StackPointer]);
0x12d: Push((int) 2)
0x12e: Pop(2); Push(Stack[-2] / Stack[-1]);
0x12f: Stack[-19] = Stack[12 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x130: Pop(0); Push(Stack[4 + Tasks[-1].StackPointer] / Stack[14 + Tasks[-1].StackPointer]);
0x131: Push((int) 2)
0x132: Pop(2); Push(Stack[-2] / Stack[-1]);
0x133: Stack[-18] = Stack[13 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x134: Pop(0); Push(Stack[4 + Tasks[-1].StackPointer] / Stack[14 + Tasks[-1].StackPointer]);
0x135: Push((int) 2)
0x136: Pop(2); Push(Stack[-2] / Stack[-1]);
0x137: Stack[-17] = Stack[13 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x138: Stack[-15] = (int) 0
0x139: Stack[-14] = (int) 0
0x13a: Push((int) 0)
0x13b: Pop(1); Push((bool) Stack[-20] < Stack[-1])
0x13c: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13d: Stack[-15] = -Stack[-19]; Pop(0);
0x13e: GOTO 0x144

0x13f: Push((int) 2048)
0x140: Pop(1); Push((bool) Stack[-19] > Stack[-1])
0x141: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x142: Push((int) 2048)
0x143: Stack[-16] = Stack[-1] - Stack[-19]; Pop(1);
0x144: Push((int) 0)
0x145: Pop(1); Push((bool) Stack[-18] < Stack[-1])
0x146: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x147: Stack[-14] = -Stack[-17]; Pop(0);
0x148: GOTO 0x14e

0x149: Push((int) 2048)
0x14a: Pop(1); Push((bool) Stack[-17] > Stack[-1])
0x14b: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x14c: Push((int) 2048)
0x14d: Stack[-15] = Stack[-1] - Stack[-17]; Pop(1);
0x14e: Stack[12 + Tasks[-1].StackPointer] = Stack[12 + Tasks[-1].StackPointer] + Stack[-15]; Pop(0);
0x14f: Stack[13 + Tasks[-1].StackPointer] = Stack[13 + Tasks[-1].StackPointer] + Stack[-14]; Pop(0);
0x150: PushEmpty(bool)
0x151: Stack[-1] = (bool) 0
0x152: PushEmpty(bool)
0x153: Call2 0x0

0x154: Pop(0)
0x155: Pop(1); Push((bool) Stack[-1] == 0)
0x156: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x157: Pop(0); Push((bool) Stack[18 + Tasks[-1].StackPointer] == 0)
0x158: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x159: Stack[-1] = (bool) 1
0x15a: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x15b: @@@ clear(); Obj=20 // @poff=593
0x15c: Pop(0)
0x15d: Stack[-10] = (int) 0
0x15e: @@@ GetMarkCount(Stack[-11]); Obj=22 // @poff=599
0x15f: Pop(0)
0x160: Stack[-9] = (int) 0
0x161: Pop(0); Push((bool) Stack[-9] < Stack[-11])
0x162: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x163: @@@ GetMark(Stack[-9], Stack[-8]); Obj=22 // @poff=612
0x164: Pop(0)
0x165: @@ GetLocator(Stack[-7]); Obj=8 // @poff=620
0x166: Pop(0)
0x167: PushEmpty(cvector, string)
0x168: Stack[-9] = Stack[-1]
0x169: Call2 0x378

0x16a: Stack[-2] = Stack[-8]
0x16b: Pop(2)
0x16c: Push(CvectorIndex(Stack[-6], 0))
0x16d: Stack[-1] = Stack[-14]
0x16e: Pop(1)
0x16f: Push(CvectorIndex(Stack[-6], 2))
0x170: Stack[-1] = Stack[-13]
0x171: Pop(1)
0x172: @@@ ConvertToMapCoordinates(Stack[-13], Stack[-12]); Obj=22 // @poff=83
0x173: Pop(0)
0x174: PushEmpty(int, int)
0x175: Stack[-15] = Stack[-1]
0x176: Call2 0x119

0x177: Stack[-2] = Stack[-15]
0x178: Pop(2)
0x179: PushEmpty(int, int)
0x17a: Stack[-14] = Stack[-1]
0x17b: Call2 0x120

0x17c: Stack[-2] = Stack[-14]
0x17d: Pop(2)
0x17e: Pop(0); Push(Stack[-13] - Stack[5 + Tasks[-1].StackPointer]);
0x17f: Pop(0); Push(Stack[-14] - Stack[5 + Tasks[-1].StackPointer]);
0x180: Pop(2); Push(Stack[-2] * Stack[-1]);
0x181: Pop(0); Push(Stack[-13] - Stack[6 + Tasks[-1].StackPointer]);
0x182: Pop(0); Push(Stack[-14] - Stack[6 + Tasks[-1].StackPointer]);
0x183: Pop(2); Push(Stack[-2] * Stack[-1]);
0x184: Pop(2); Push(Stack[-2] + Stack[-1]);
0x185: Push((int) 900)
0x186: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x187: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x188: @@@ add(Stack[-8]); Obj=20 // @poff=631
0x189: Pop(0)
0x18a: Push((int) 1)
0x18b: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0x18c: Stack[-8] = 0
0x18d: Push((int) 1)
0x18e: Stack[-10] = Stack[-10] + Stack[-1]; Pop(1);
0x18f: GOTO 0x161

0x190: Pop(0); Push((bool) Stack[-10] == 0)
0x191: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x192: PushEmpty(int, int)
0x193: Stack[-1] = Stack[5 + Tasks[-1].StackPointer]
0x194: Call2 0x10b

0x195: Stack[-2] = Stack[-5]
0x196: Pop(2)
0x197: PushEmpty(int, int)
0x198: Stack[-1] = Stack[6 + Tasks[-1].StackPointer]
0x199: Call2 0x112

0x19a: Stack[-2] = Stack[-4]
0x19b: Pop(2)
0x19c: @@@ GetObjectFromPoint(Stack[-5], Stack[-3], Stack[-2]); Obj=22 // @poff=635
0x19d: Pop(0)
0x19e: Push((int) 0)
0x19f: Pop(1); Push((bool) Stack[-6] >= Stack[-1])
0x1a0: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1a1: @@@ GetObjectID(Stack[-4], Stack[-5]); Obj=22 // @poff=654
0x1a2: Pop(0)
0x1a3: Push((int) 100000)
0x1a4: Pop(1); Push(Stack[-5] + Stack[-1]);
0x1a5: @ GetStringByID(Stack[-2], Stack[-1])
0x1a6: Pop(1)
0x1a7: Push((int) 5)
0x1a8: @ SetTooltip(Stack[-1], Stack[-2])
0x1a9: Pop(1)
0x1aa: Pop(0); Push((bool) Stack[11 + Tasks[-1].StackPointer] != Stack[-5])
0x1ab: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1ac: @@@ CreateObjectHighlight(Stack[-23]T, Stack[-5]); Obj=22 // @poff=666
0x1ad: Pop(0)
0x1ae: Stack[11 + Tasks[-1].StackPointer] = Stack[-5]
0x1af: GOTO 0x1b6

0x1b0: Push((int) -1)
0x1b1: Push("") // @poff=25
0x1b2: @ SetTooltip(Stack[-2], Stack[-1])
0x1b3: Pop(2)
0x1b4: Stack[23 + Tasks[-1].StackPointer] = 0
0x1b5: Stack[11 + Tasks[-1].StackPointer] = (int)-1
0x1b6: GOTO 0x1bd

0x1b7: Push((int) 2)
0x1b8: Push("") // @poff=25
0x1b9: @ SetTooltip(Stack[-2], Stack[-1], Stack[-20]T)
0x1ba: Pop(2)
0x1bb: Stack[23 + Tasks[-1].StackPointer] = 0
0x1bc: Stack[11 + Tasks[-1].StackPointer] = (int)-1
0x1bd: GOTO 0x1c4

0x1be: Push((int) -1)
0x1bf: Push("") // @poff=25
0x1c0: @ SetTooltip(Stack[-2], Stack[-1])
0x1c1: Pop(2)
0x1c2: Stack[11 + Tasks[-1].StackPointer] = (int)-1
0x1c3: Stack[23 + Tasks[-1].StackPointer] = 0
0x1c4: Return(); Pop(38)

0x1c5: PushEmpty(float, float, int, int, object, string, int, cvector, float, float, int, int, object, string, int, cvector)
0x1c6: @@ GetMarkCount(Stack[-6]); Obj=18 // @poff=599
0x1c7: Pop(0)
0x1c8: Stack[-5] = (int) 0
0x1c9: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0x1ca: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x1cb: @@ GetMark(Stack[-5], Stack[-4]); Obj=18 // @poff=612
0x1cc: Pop(0)
0x1cd: @@ GetLocator(Stack[-3]); Obj=4 // @poff=620
0x1ce: Pop(0)
0x1cf: @@ GetType(Stack[-2]); Obj=4 // @poff=688
0x1d0: Pop(0)
0x1d1: PushEmpty(cvector, string)
0x1d2: Stack[-5] = Stack[-1]
0x1d3: Call2 0x378

0x1d4: Stack[-2] = Stack[-3]
0x1d5: Pop(2)
0x1d6: Push(CvectorIndex(Stack[-1], 0))
0x1d7: Stack[-1] = Stack[-9]
0x1d8: Pop(1)
0x1d9: Push(CvectorIndex(Stack[-1], 2))
0x1da: Stack[-1] = Stack[-8]
0x1db: Pop(1)
0x1dc: @@ ConvertToMapCoordinates(Stack[-8], Stack[-7]); Obj=18 // @poff=83
0x1dd: Pop(0)
0x1de: PushEmpty(int, int)
0x1df: Stack[-10] = Stack[-1]
0x1e0: Call2 0x119

0x1e1: Stack[-2] = Stack[-10]
0x1e2: Pop(2)
0x1e3: PushEmpty(int, int)
0x1e4: Stack[-9] = Stack[-1]
0x1e5: Call2 0x120

0x1e6: Stack[-2] = Stack[-9]
0x1e7: Pop(2)
0x1e8: Pop(0); Push((bool) Stack[-2] == Stack[-17])
0x1e9: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x1ea: Push((int) 0)
0x1eb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ec: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1ed: Push("quest_mark") // @poff=696
0x1ee: Push((int) 16)
0x1ef: Pop(1); Push(Stack[-10] - Stack[-1]);
0x1f0: Push((int) 16)
0x1f1: Pop(1); Push(Stack[-10] - Stack[-1]);
0x1f2: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x1f3: Pop(3)
0x1f4: Push((int) 1)
0x1f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f6: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1f7: Push("mainquest_mark") // @poff=718
0x1f8: Push((int) 16)
0x1f9: Pop(1); Push(Stack[-10] - Stack[-1]);
0x1fa: Push((int) 16)
0x1fb: Pop(1); Push(Stack[-10] - Stack[-1]);
0x1fc: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x1fd: Pop(3)
0x1fe: Push((int) 3)
0x1ff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x200: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x201: Push("info_mark") // @poff=748
0x202: Push((int) 16)
0x203: Pop(1); Push(Stack[-10] - Stack[-1]);
0x204: Push((int) 16)
0x205: Pop(1); Push(Stack[-10] - Stack[-1]);
0x206: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x207: Pop(3)
0x208: Stack[-4] = 0
0x209: Push((int) 1)
0x20a: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x20b: GOTO 0x1c9

0x20c: Return(); Pop(16)

0x20d: PushEmpty(float, int, int, int, int, int, int, float, int, int, int, int, int, int)
0x20e: PushEmpty(bool)
0x20f: Call2 0x0

0x210: Pop(0)
0x211: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x212: Return(); Pop(14)

0x213: Stack[-7] = Stack[14 + Tasks[-1].StackPointer]
0x214: Push(GlobalVars[0])
0x215: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x216: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x217: Push(GlobalVars[0])
0x218: Stack[-1] = Stack[-8]
0x219: Pop(1)
0x21a: Pop(0); Push(Stack[3 + Tasks[-1].StackPointer] / Stack[-7]);
0x21b: Push((int) 2)
0x21c: Pop(2); Push(Stack[-2] / Stack[-1]);
0x21d: Stack[-7] = Stack[12 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x21e: Pop(0); Push(Stack[3 + Tasks[-1].StackPointer] / Stack[-7]);
0x21f: Push((int) 2)
0x220: Pop(2); Push(Stack[-2] / Stack[-1]);
0x221: Stack[-6] = Stack[12 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x222: Pop(0); Push(Stack[4 + Tasks[-1].StackPointer] / Stack[-7]);
0x223: Push((int) 2)
0x224: Pop(2); Push(Stack[-2] / Stack[-1]);
0x225: Stack[-5] = Stack[13 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x226: Pop(0); Push(Stack[4 + Tasks[-1].StackPointer] / Stack[-7]);
0x227: Push((int) 2)
0x228: Pop(2); Push(Stack[-2] / Stack[-1]);
0x229: Stack[-4] = Stack[13 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x22a: Stack[-2] = (int) 0
0x22b: Stack[-1] = (int) 0
0x22c: @ ClientToScreen(Stack[-2], Stack[-1])
0x22d: Pop(0)
0x22e: Pop(0); Push(Stack[3 + Tasks[-1].StackPointer] + Stack[-2]);
0x22f: Pop(0); Push(Stack[4 + Tasks[-1].StackPointer] + Stack[-2]);
0x230: @ RenderMap(Stack[-4], Stack[-3], Stack[-2], Stack[-1], Stack[-8], Stack[-6], Stack[-7], Stack[-5])
0x231: Pop(2)
0x232: PushEmpty(bool)
0x233: Call2 0x389

0x234: Pop(0)
0x235: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x236: Pop(0); Push(Stack[3 + Tasks[-1].StackPointer] + Stack[-2]);
0x237: Pop(0); Push(Stack[4 + Tasks[-1].StackPointer] + Stack[-2]);
0x238: @ RenderRegions(Stack[-4], Stack[-3], Stack[-2], Stack[-1], Stack[-8], Stack[-6], Stack[-7], Stack[-5])
0x239: Pop(2)
0x23a: Push( Stack[23 + Tasks[-1].StackPointer] )
0x23b: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23c: Pop(0); Push(Stack[3 + Tasks[-1].StackPointer] + Stack[-2]);
0x23d: Pop(0); Push(Stack[4 + Tasks[-1].StackPointer] + Stack[-2]);
0x23e: @@@ Render(Stack[-4], Stack[-3], Stack[-2], Stack[-1], Stack[-8], Stack[-6], Stack[-7], Stack[-5]); Obj=23 // @poff=768
0x23f: Pop(2)
0x240: PushEmpty(object, int)
0x241: Stack[-2] = Stack[22 + Tasks[-1].StackPointer]
0x242: Stack[-1] = (int) 3
0x243: Call2 0x1c5

0x244: Pop(2)
0x245: PushEmpty(object, int)
0x246: Stack[-2] = Stack[22 + Tasks[-1].StackPointer]
0x247: Stack[-1] = (int) 0
0x248: Call2 0x1c5

0x249: Pop(2)
0x24a: PushEmpty(object, int)
0x24b: Stack[-2] = Stack[22 + Tasks[-1].StackPointer]
0x24c: Stack[-1] = (int) 1
0x24d: Call2 0x1c5

0x24e: Pop(2)
0x24f: PushEmpty()
0x250: Call2 0x26c

0x251: Pop(0)
0x252: Return(); Pop(14)

0x253: PushEmpty(int, int, int, int, float, int, int, int, int, float)
0x254: Stack[-5] = (int) 0
0x255: Stack[-4] = (int) 0
0x256: @ ScreenToClient(Stack[-5], Stack[-4])
0x257: Pop(0)
0x258: @ GetScreenSize(Stack[-3], Stack[-2])
0x259: Pop(0)
0x25a: Push((float)768.0)
0x25b: Stack[-2] = Stack[-3] / Stack[-1]; Pop(1);
0x25c: Push((int) 1024)
0x25d: Pop(1); Push(Stack[-2] * Stack[-1]);
0x25e: Push((int) 1)
0x25f: @ StretchBlit(Stack[-26]T, Stack[-7], Stack[-6], Stack[-5], Stack[-2], Stack[-1])
0x260: Pop(2)
0x261: Return(); Pop(10)

0x262: Push( Stack[18 + Tasks[-1].StackPointer] )
0x263: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x264: PushEmpty()
0x265: Call2 0x253

0x266: Pop(0)
0x267: GOTO 0x26b

0x268: PushEmpty()
0x269: Call2 0x20d

0x26a: Pop(0)
0x26b: Return(); Pop(0)

0x26c: PushEmpty(int, int, float, int, int, float)
0x26d: Pop(0); Push((bool) Stack[17 + Tasks[-1].StackPointer] == 0)
0x26e: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x26f: @ GetPlayerMapAngle(Stack[-1])
0x270: Pop(0)
0x271: PushEmpty(int, int)
0x272: Push(CvectorIndex(Stack[25 + Tasks[-1].StackPointer], 0))
0x273: Stack[-1] = Stack[-2]
0x274: Pop(1)
0x275: Call2 0x119

0x276: Stack[-2] = Stack[-5]
0x277: Pop(2)
0x278: PushEmpty(int, int)
0x279: Push(CvectorIndex(Stack[25 + Tasks[-1].StackPointer], 2))
0x27a: Stack[-1] = Stack[-2]
0x27b: Pop(1)
0x27c: Call2 0x120

0x27d: Stack[-2] = Stack[-4]
0x27e: Pop(2)
0x27f: @ ClientToScreen(Stack[-3], Stack[-2])
0x280: Pop(0)
0x281: @@@ Blit(Stack[-3], Stack[-2], Stack[-1]); Obj=24 // @poff=775
0x282: Pop(0)
0x283: GOTO 0x296

0x284: PushEmpty(int, int)
0x285: Push(CvectorIndex(Stack[25 + Tasks[-1].StackPointer], 0))
0x286: Stack[-1] = Stack[-2]
0x287: Pop(1)
0x288: Call2 0x119

0x289: Stack[-2] = Stack[-5]
0x28a: Pop(2)
0x28b: PushEmpty(int, int)
0x28c: Push(CvectorIndex(Stack[25 + Tasks[-1].StackPointer], 2))
0x28d: Stack[-1] = Stack[-2]
0x28e: Pop(1)
0x28f: Call2 0x120

0x290: Stack[-2] = Stack[-4]
0x291: Pop(2)
0x292: @ ClientToScreen(Stack[-3], Stack[-2])
0x293: Pop(0)
0x294: @@@ Blit(Stack[-3], Stack[-2]); Obj=24 // @poff=775
0x295: Pop(0)
0x296: Return(); Pop(6)

0x297: PushEmpty()
0x298: PushEmpty(bool)
0x299: Stack[-1] = (bool) 1
0x29a: PushEmpty(bool)
0x29b: Call2 0x0

0x29c: Pop(0)
0x29d: IF (Stack[-1] == 1) GOTO 0x2a1; Pop(1)

0x29e: Push( Stack[18 + Tasks[-1].StackPointer] )
0x29f: IF (Stack[-1] == 1) GOTO 0x2a1; Pop(1)

0x2a0: Stack[-1] = (bool) 0
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x2a2: Return(); Pop(0)

0x2a3: Stack[15 + Tasks[-1].StackPointer] = (bool)1
0x2a4: Stack[7 + Tasks[-1].StackPointer] = Stack[-2]
0x2a5: Stack[8 + Tasks[-1].StackPointer] = Stack[-1]
0x2a6: Stack[9 + Tasks[-1].StackPointer] = Stack[12 + Tasks[-1].StackPointer]
0x2a7: Stack[10 + Tasks[-1].StackPointer] = Stack[13 + Tasks[-1].StackPointer]
0x2a8: Push("drag") // @poff=780
0x2a9: @ SetCursor(Stack[-1])
0x2aa: Pop(1)
0x2ab: Return(); Pop(0)

0x2ac: PushEmpty()
0x2ad: Stack[15 + Tasks[-1].StackPointer] = (bool)0
0x2ae: Push("default") // @poff=235
0x2af: @ SetCursor(Stack[-1])
0x2b0: Pop(1)
0x2b1: Return(); Pop(0)

0x2b2: PushEmpty()
0x2b3: Stack[5 + Tasks[-1].StackPointer] = Stack[-2]
0x2b4: Stack[6 + Tasks[-1].StackPointer] = Stack[-1]
0x2b5: Stack[16 + Tasks[-1].StackPointer] = (bool)0
0x2b6: Push( Stack[15 + Tasks[-1].StackPointer] )
0x2b7: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2b8: Pop(0); Push(Stack[7 + Tasks[-1].StackPointer] - Stack[-2]);
0x2b9: Pop(1); Push(Stack[-1] / Stack[14 + Tasks[-1].StackPointer]);
0x2ba: Stack[12 + Tasks[-1].StackPointer] = Stack[9 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x2bb: Pop(0); Push(Stack[8 + Tasks[-1].StackPointer] - Stack[-1]);
0x2bc: Pop(1); Push(Stack[-1] / Stack[14 + Tasks[-1].StackPointer]);
0x2bd: Stack[13 + Tasks[-1].StackPointer] = Stack[10 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x2be: Return(); Pop(0)

0x2bf: Stack[16 + Tasks[-1].StackPointer] = (bool)1
0x2c0: Return(); Pop(0)

0x2c1: PushEmpty(int, int, int, int)
0x2c2: Push( Stack[18 + Tasks[-1].StackPointer] )
0x2c3: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2c4: Return(); Pop(4)

0x2c5: Push((int) 0)
0x2c6: Pop(1); Push((bool) Stack[-6] > Stack[-1])
0x2c7: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2c8: Stack[-2] = (int) 0
0x2c9: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x2ca: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2cb: PushEmpty(float)
0x2cc: Stack[-1] = (float) 1.100000023841858
0x2cd: Call2 0x2df

0x2ce: Pop(1)
0x2cf: Push((int) 1)
0x2d0: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2d1: GOTO 0x2c9

0x2d2: GOTO 0x2de

0x2d3: Stack[-1] = (int) 0
0x2d4: Pop(0); Push(( -Stack[-5])
0x2d5: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2d6: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2d7: PushEmpty(float)
0x2d8: Stack[-1] = (float) 1.100000023841858
0x2d9: Call2 0x2ef

0x2da: Pop(1)
0x2db: Push((int) 1)
0x2dc: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x2dd: GOTO 0x2d4

0x2de: Return(); Pop(4)

0x2df: PushEmpty()
0x2e0: Push( Stack[18 + Tasks[-1].StackPointer] )
0x2e1: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2e2: Return(); Pop(0)

0x2e3: Stack[14 + Tasks[-1].StackPointer] = Stack[14 + Tasks[-1].StackPointer] * Stack[-1]; Pop(0);
0x2e4: Push((float)2.0)
0x2e5: Pop(1); Push((bool) Stack[14 + Tasks[-1].StackPointer] > Stack[-1])
0x2e6: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2e7: Stack[14 + Tasks[-1].StackPointer] = (float)2.0
0x2e8: Push((int) -1)
0x2e9: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x2ea: Push((int) 0)
0x2eb: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] < Stack[-1])
0x2ec: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2ed: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x2ee: Return(); Pop(0)

0x2ef: PushEmpty()
0x2f0: Push( Stack[18 + Tasks[-1].StackPointer] )
0x2f1: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2f2: Return(); Pop(0)

0x2f3: Stack[14 + Tasks[-1].StackPointer] = Stack[14 + Tasks[-1].StackPointer] / Stack[-1]; Pop(0);
0x2f4: Push(GlobalVars[0])
0x2f5: Pop(1); Push((bool) Stack[14 + Tasks[-1].StackPointer] < Stack[-1])
0x2f6: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2f7: Push(GlobalVars[0])
0x2f8: Stack[14 + Tasks[-1].StackPointer] = Stack[-1]
0x2f9: Pop(1)
0x2fa: Push((int) 1)
0x2fb: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x2fc: Push((int) 2)
0x2fd: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] > Stack[-1])
0x2fe: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2ff: Stack[0 + Tasks[-1].StackPointer] = (int)2
0x300: Return(); Pop(0)

0x301: PushEmpty()
0x302: Push("button_plus") // @poff=790
0x303: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x304: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x305: PushEmpty(float)
0x306: Stack[-1] = (float) 1.399999976158142
0x307: Call2 0x2df

0x308: Pop(1)
0x309: GOTO 0x324

0x30a: Push("button_minus") // @poff=814
0x30b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x30c: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x30d: PushEmpty(float)
0x30e: Stack[-1] = (float) 1.399999976158142
0x30f: Call2 0x2ef

0x310: Pop(1)
0x311: GOTO 0x324

0x312: Push("tavro") // @poff=840
0x313: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x314: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x315: Push((int) 0)
0x316: Stack[18 + Tasks[-1].StackPointer] = Stack[-4] == Stack[-1]; Pop(1);
0x317: Push( Stack[18 + Tasks[-1].StackPointer] )
0x318: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x319: Push((int) 1)
0x31a: GOTO 0x31c

0x31b: Push((int) 0)
0x31c: Push("tavro") // @poff=840
0x31d: @ SendMessage(Stack[-2], Stack[-1])
0x31e: Pop(2)
0x31f: Push( Stack[18 + Tasks[-1].StackPointer] )
0x320: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x321: PushEmpty()
0x322: Call2 0x99

0x323: Pop(0)
0x324: Return(); Pop(0)

0x325: PushEmpty(int, int, int, int)
0x326: Push((int) 107)
0x327: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x328: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x329: PushEmpty(float)
0x32a: Stack[-1] = (float) 1.399999976158142
0x32b: Call2 0x2df

0x32c: Pop(1)
0x32d: Return(); Pop(4)

0x32e: Push((int) 109)
0x32f: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x330: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

0x331: PushEmpty(float)
0x332: Stack[-1] = (float) 1.399999976158142
0x333: Call2 0x2ef

0x334: Pop(1)
0x335: Return(); Pop(4)

0x336: Stack[-2] = Stack[12 + Tasks[-1].StackPointer]
0x337: Stack[-1] = Stack[13 + Tasks[-1].StackPointer]
0x338: @@@ ConvertToWorldCoordinates(Stack[-2], Stack[-1]); Obj=22 // @poff=852
0x339: Pop(0)
0x33a: @@@ SetMapParams(Stack[-2], Stack[-1], Stack[-14]T); Obj=22 // @poff=878
0x33b: Pop(0)
0x33c: @ DestroyWindow()
0x33d: Pop(0)
0x33e: Return(); Pop(4)

0x33f: PushEmpty(int, int)
0x340: Push("branch") // @poff=891
0x341: @ GetVariable(Stack[-1], Stack[-2])
0x342: Pop(1)
0x343: Stack[-1] = Stack[-3]
0x344: Return(); Pop(2)

0x345: PushEmpty(float, float)
0x346: @ GetGameTime(Stack[-1])
0x347: Pop(0)
0x348: Push((int) 1)
0x349: PushEmpty(int)
0x34a: Push((int) 24)
0x34b: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x34c: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x34d: Return(); Pop(2)

0x34e: PushEmpty()
0x34f: Push("Region") // @poff=905
0x350: Pop(1); Push(Stack[-1] + Stack[-2]);
0x351: Push("State") // @poff=919
0x352: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x353: Return(); Pop(0)

0x354: PushEmpty(int, int)
0x355: PushEmpty(string, int)
0x356: Stack[-5] = Stack[-1]
0x357: Call2 0x34e

0x358: Pop(1)
0x359: @ GetVariable(Stack[-1], Stack[-2])
0x35a: Pop(1)
0x35b: Push((int) 3)
0x35c: Pop(1); Push(Stack[-2] & Stack[-1]);
0x35d: Push((int) 0)
0x35e: Stack[-6] = Stack[-2] == Stack[-1]; Pop(2);
0x35f: Return(); Pop(2)

0x360: PushEmpty(int, int)
0x361: PushEmpty(string, int)
0x362: Stack[-5] = Stack[-1]
0x363: Call2 0x34e

0x364: Pop(1)
0x365: @ GetVariable(Stack[-1], Stack[-2])
0x366: Pop(1)
0x367: Push((int) 3)
0x368: Pop(1); Push(Stack[-2] & Stack[-1]);
0x369: Push((int) 1)
0x36a: Stack[-6] = Stack[-2] == Stack[-1]; Pop(2);
0x36b: Return(); Pop(2)

0x36c: PushEmpty(int, int)
0x36d: PushEmpty(string, int)
0x36e: Stack[-5] = Stack[-1]
0x36f: Call2 0x34e

0x370: Pop(1)
0x371: @ GetVariable(Stack[-1], Stack[-2])
0x372: Pop(1)
0x373: Push((int) 3)
0x374: Pop(1); Push(Stack[-2] & Stack[-1]);
0x375: Push((int) 2)
0x376: Stack[-6] = Stack[-2] == Stack[-1]; Pop(2);
0x377: Return(); Pop(2)

0x378: PushEmpty(cvector, cvector, object, object, bool, cvector, cvector, object, object, bool)
0x379: @ GetMainOutdoorScene(Stack[-3])
0x37a: Pop(0)
0x37b: Pop(0); PushNull((bool) Stack[-3] == 0)
0x37c: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x37d: Push("Can't find main outdoor scene") // @poff=931
0x37e: @ Trace(Stack[-1])
0x37f: Pop(1)
0x380: Stack[-5] = [0.0, 0.0, 0.0]
0x381: Stack[-5] = Stack[-12]
0x382: Return(); Pop(10)

0x383: @@ GetLocator(Stack[-11], Stack[-1], Stack[-5], Stack[-4]); Obj=3 // @poff=620
0x384: Pop(0)
0x385: Stack[-5] = Stack[-12]
0x386: Return(); Pop(10)

0x387: Stack[-2] = 0
0x388: Stack[-3] = 0
0x389: PushEmpty(int, int, int, int)
0x38a: PushEmpty(int)
0x38b: Call2 0x345

0x38c: Stack[-1] = Stack[-3]
0x38d: Pop(1)
0x38e: Push("RMap") // @poff=991
0x38f: Pop(1); Push(Stack[-1] + Stack[-3]);
0x390: @ GetVariable(Stack[-1], Stack[-2])
0x391: Pop(1)
0x392: Push((int) 0)
0x393: Stack[-6] = Stack[-2] != Stack[-1]; Pop(1);
0x394: Return(); Pop(4)


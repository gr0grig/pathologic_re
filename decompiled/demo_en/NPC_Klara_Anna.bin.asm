GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 bool 

Strings:
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	Fear
	Rage
	Adoration
	Dream
	player
	GetPosition
	HasProperty
	HasProperty
	GetProperty
	SetProperty
	GetEyesHeight
	head
	voice_common
	c
	Can't find lsh animation : 
	add
	money
	Money
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	reputation
	ui/NPC_Anna.png
	ui/NPC_Anna_b.png
	pt_map_notkin
	ShowMap
	ook1Anna1
	ook1Anna2
	ook1Anna3
	k1q03
	k1q03AnnaGotoNotkin
	AddMark
	k2q04
	k2q04AnnaGotoGatherer1
	pt_map_gatherer1
	k2q04AnnaGotoGatherer2
	pt_map_gatherer2
	k2q04AnnaGotoGatherer3
	pt_map_gatherer3
	alpha_pills 5 is given
	alpha_pills
	beta_pills 5 is given
	beta_pills
	k3q01
	k3q01AnnaGotoMladVlad
	pt_map_mladvlad
	k3q01AnnaGotoKapella
	pt_map_kapella
	ook3Anna1
	k3q03
	k3q03AnnaGotoEva
	pt_map_eva
	ook6Anna1
	k11q01SoulCount
	ook11Anna1
	playsound
	givemoney
	giveitem
	money 1500 is given
	mapmark
	k1q01
	k1q01Healed
	k3q01KapellaAboutHan
	k6q01
	k6q01DankoPos
	k11q01
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
	branch

Import:
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	Hold (0 args)
	GetDirection (1 args)
	FindActor (2 args)
	RotateAsync (2 args)
	CanSee (2 args)
	rand (3 args)
	SetTimer (2 args)
	KillTimer (1 args)
	lshStopSpeech (0 args)
	StopAsync (0 args)
	StopGroup0 (0 args)
	Sleep (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	Rotate (3 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	UnlookAsync (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	self (1 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemByName (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0xfb6
RunTask = 16

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb5 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2ea Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x6b8 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x7b6 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x8ec Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xad8 Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xe2a Vars = (int, int)
	GTASK_14 Vars = (object) Params = 2
	GTASK_15 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xf8c Vars = (int, int)
	GTASK_16 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x1002 Vars = (int)
		EVENT_6 Op = 0x1028 Vars = ()
		EVENT_5 Op = 0x1037 Vars = ()
		EVENT_45 Op = 0x1044 Vars = (bool)
		EVENT_0 Op = 0x1050 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1102

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x12d0

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x12ce

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x12d2

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x12d4

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x1630

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1])
0x25: Pop(1)
0x26: Stack[-2] = (int) -1
0x27: @ IsOverrideActive(Stack[-3])
0x28: Pop(0)
0x29: Push(Stack[-3])
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[-10] = (int) -2
0x2c: Return(); Pop(8)

0x2d: @ DoDialog(Stack[-4])
0x2e: Pop(0)
0x2f: PushEmpty(bool, object)
0x30: PushEmpty(object)
0x31: Call2 0x1216

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x1157

0x35: Pop(2)
0x36: PushEmpty(object, object)
0x37: Stack[-2] = Stack[-11]
0x38: Stack[-1] = Stack[-6]
0x39: Push(-2, 4); TaskCall(1)
0x3a: Call2 0x51

0x3b: Pop(-2, 4); TaskReturn
0x3c: Pop(2)
0x3d: @@ IsDialogEnd(Stack[-1])
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: @ sync()
0x42: Pop(0)
0x43: @@ IsDialogEnd(Stack[-1])
0x44: Pop(0)
0x45: GOTO 0x3f

0x46: PushEmpty(object)
0x47: Stack[-1] = Stack[-10]
0x48: Call2 0x1146

0x49: Pop(1)
0x4a: @ StopDialog(Stack[-4])
0x4b: Pop(0)
0x4c: @@ GetReturnValue(Stack[-2])
0x4d: Pop(0)
0x4e: Stack[-10] = Stack[-2]
0x4f: Return(); Pop(8)

0x50: Stack[-4] = 0
0x51: PushEmpty()
0x52: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x53: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x54: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x55: Push((int) 1)
0x56: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0x9f

0x5a: Pop(1)
0x5b: Push((int) 525346)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x1469

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x65: Push((int) 525348)
0x66: Push((int) 44408)
0x67: Push((int) 26716)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: PushEmpty(bool, object)
0x6b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6c: Call2 0x1475

0x6d: Pop(1)
0x6e: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x6f: Push((int) 541760)
0x70: Push((int) 43964)
0x71: Push((int) 43963)
0x72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(3)
0x74: Push((int) 525347)
0x75: Push((int) -1)
0x76: Push((int) 26715)
0x77: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78: Pop(3)
0x79: Push((int) 529145)
0x7a: Push((int) -1)
0x7b: Push((int) 30591)
0x7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d: Pop(3)
0x7e: GOTO 0x81

0x7f: Return(); Pop(0)

0x80: GOTO 0x55

0x81: PushEmpty(bool)
0x82: Call2 0x12d6

0x83: Pop(0)
0x84: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x85: @ lshWaitForAnimEnd()
0x86: Pop(0)
0x87: Push( Stack[3 + Tasks[-1].StackPointer] )
0x88: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x89: GOTO 0x8f

0x8a: PushEmpty(string)
0x8b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8c: Call2 0x11e1

0x8d: Pop(1)
0x8e: GOTO 0x85

0x8f: GOTO 0x9e

0x90: Push("all")
0x91: Push("idle")
0x92: @ PlayAnimation(Stack[-2], Stack[-1])
0x93: Pop(2)
0x94: @ WaitForAnimEnd()
0x95: Pop(0)
0x96: Push( Stack[3 + Tasks[-1].StackPointer] )
0x97: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x98: GOTO 0x9e

0x99: Push("all")
0x9a: Push("idle")
0x9b: @ PlayAnimation(Stack[-2], Stack[-1])
0x9c: Pop(2)
0x9d: GOTO 0x94

0x9e: Return(); Pop(0)

0x9f: PushEmpty()
0xa0: PushEmpty(bool)
0xa1: Call2 0x12d6

0xa2: Pop(0)
0xa3: Pop(1); Push((bool) Stack[-1] == 0)
0xa4: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa5: Return(); Pop(0)

0xa6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa7: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa8: Return(); Pop(0)

0xa9: PushEmpty(string, bool)
0xaa: Stack[-2] = Stack[-3]
0xab: Push("")
0xac: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xad: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xae: Stack[-1] = (bool) 0
0xaf: GOTO 0xb1

0xb0: Stack[-1] = (bool) 1
0xb1: Call2 0x11f1

0xb2: Pop(2)
0xb3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb4: Return(); Pop(0)

0xb5: PushEmpty()
0xb6: Push((int) 1)
0xb7: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0xb8: PushEmpty()
0xb9: Call2 0x120f

0xba: Pop(0)
0xbb: Push((int) 26722)
0xbc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbd: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xbe: PushEmpty(object, object)
0xbf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc1: Call2 0x1324

0xc2: Pop(2)
0xc3: Push((int) 26725)
0xc4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc5: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xc6: PushEmpty(object, object)
0xc7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc9: Call2 0x134d

0xca: Pop(2)
0xcb: PushEmpty(object, object)
0xcc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xce: Call2 0x1356

0xcf: Pop(2)
0xd0: PushEmpty(object, object)
0xd1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd3: Call2 0x1361

0xd4: Pop(2)
0xd5: PushEmpty(object, object)
0xd6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8: Call2 0x13ff

0xd9: Pop(2)
0xda: Push((int) 43965)
0xdb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xdd: PushEmpty(object, object)
0xde: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe0: Call2 0x134d

0xe1: Pop(2)
0xe2: PushEmpty(object, object)
0xe3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe5: Call2 0x1356

0xe6: Pop(2)
0xe7: PushEmpty(object, object)
0xe8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xea: Call2 0x1361

0xeb: Pop(2)
0xec: PushEmpty(object, object)
0xed: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xee: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xef: Call2 0x13ff

0xf0: Pop(2)
0xf1: Push((int) 43966)
0xf2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf3: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0xf4: PushEmpty(object, object)
0xf5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf7: Call2 0x134d

0xf8: Pop(2)
0xf9: PushEmpty(object, object)
0xfa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfc: Call2 0x1356

0xfd: Pop(2)
0xfe: PushEmpty(object, object)
0xff: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x100: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x101: Call2 0x1361

0x102: Pop(2)
0x103: PushEmpty(object, object)
0x104: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x105: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x106: Call2 0x13ff

0x107: Pop(2)
0x108: Push((int) 26714)
0x109: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10a: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x10b: PushEmpty(string)
0x10c: Stack[-1] = "Neutral"
0x10d: Call2 0x9f

0x10e: Pop(1)
0x10f: Push((int) 525346)
0x110: @@ SetMessage(Stack[-1])
0x111: Pop(1)
0x112: @@ ClearReplies()
0x113: Pop(0)
0x114: PushEmpty(bool, object)
0x115: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x116: Call2 0x1469

0x117: Pop(1)
0x118: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x119: Push((int) 525348)
0x11a: Push((int) 44408)
0x11b: Push((int) 26716)
0x11c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11d: Pop(3)
0x11e: PushEmpty(bool, object)
0x11f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x120: Call2 0x1475

0x121: Pop(1)
0x122: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x123: Push((int) 541760)
0x124: Push((int) 43964)
0x125: Push((int) 43963)
0x126: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x127: Pop(3)
0x128: Push((int) 525347)
0x129: Push((int) -1)
0x12a: Push((int) 26715)
0x12b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12c: Pop(3)
0x12d: Push((int) 529145)
0x12e: Push((int) -1)
0x12f: Push((int) 30591)
0x130: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x131: Pop(3)
0x132: Return(); Pop(0)

0x133: Push((int) 43964)
0x134: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x135: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x136: PushEmpty(string)
0x137: Stack[-1] = "Fear"
0x138: Call2 0x9f

0x139: Pop(1)
0x13a: Push((int) 541761)
0x13b: @@ SetMessage(Stack[-1])
0x13c: Pop(1)
0x13d: @@ ClearReplies()
0x13e: Pop(0)
0x13f: Push((int) 541762)
0x140: Push((int) -1)
0x141: Push((int) 43965)
0x142: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x143: Pop(3)
0x144: Push((int) 541763)
0x145: Push((int) -1)
0x146: Push((int) 43966)
0x147: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x148: Pop(3)
0x149: Return(); Pop(0)

0x14a: Push((int) 44408)
0x14b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14c: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x14d: PushEmpty(string)
0x14e: Stack[-1] = "Rage"
0x14f: Call2 0x9f

0x150: Pop(1)
0x151: Push((int) 542106)
0x152: @@ SetMessage(Stack[-1])
0x153: Pop(1)
0x154: @@ ClearReplies()
0x155: Pop(0)
0x156: Push((int) 542107)
0x157: Push((int) 44410)
0x158: Push((int) 44409)
0x159: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15a: Pop(3)
0x15b: Push((int) 542110)
0x15c: Push((int) 30593)
0x15d: Push((int) 44412)
0x15e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15f: Pop(3)
0x160: Return(); Pop(0)

0x161: Push((int) 44410)
0x162: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x163: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x164: PushEmpty(string)
0x165: Stack[-1] = "Rage"
0x166: Call2 0x9f

0x167: Pop(1)
0x168: Push((int) 542108)
0x169: @@ SetMessage(Stack[-1])
0x16a: Pop(1)
0x16b: @@ ClearReplies()
0x16c: Pop(0)
0x16d: Push((int) 542109)
0x16e: Push((int) 26717)
0x16f: Push((int) 44411)
0x170: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x171: Pop(3)
0x172: Push((int) 542111)
0x173: Push((int) 30593)
0x174: Push((int) 44414)
0x175: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x176: Pop(3)
0x177: Return(); Pop(0)

0x178: Push((int) 26717)
0x179: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17a: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x17b: PushEmpty(string)
0x17c: Stack[-1] = "Neutral"
0x17d: Call2 0x9f

0x17e: Pop(1)
0x17f: Push((int) 525349)
0x180: @@ SetMessage(Stack[-1])
0x181: Pop(1)
0x182: @@ ClearReplies()
0x183: Pop(0)
0x184: Push((int) 529146)
0x185: Push((int) 30593)
0x186: Push((int) 30592)
0x187: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x188: Pop(3)
0x189: Push((int) 529150)
0x18a: Push((int) 30593)
0x18b: Push((int) 30596)
0x18c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18d: Pop(3)
0x18e: Return(); Pop(0)

0x18f: Push((int) 30593)
0x190: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x191: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x192: PushEmpty(string)
0x193: Stack[-1] = "Neutral"
0x194: Call2 0x9f

0x195: Pop(1)
0x196: Push((int) 529147)
0x197: @@ SetMessage(Stack[-1])
0x198: Pop(1)
0x199: @@ ClearReplies()
0x19a: Pop(0)
0x19b: Push((int) 529148)
0x19c: Push((int) 30595)
0x19d: Push((int) 30594)
0x19e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19f: Pop(3)
0x1a0: Return(); Pop(0)

0x1a1: Push((int) 30595)
0x1a2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a3: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1a4: PushEmpty(string)
0x1a5: Stack[-1] = "Adoration"
0x1a6: Call2 0x9f

0x1a7: Pop(1)
0x1a8: Push((int) 529149)
0x1a9: @@ SetMessage(Stack[-1])
0x1aa: Pop(1)
0x1ab: @@ ClearReplies()
0x1ac: Pop(0)
0x1ad: Push((int) 525350)
0x1ae: Push((int) 26719)
0x1af: Push((int) 26718)
0x1b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b1: Pop(3)
0x1b2: Push((int) 542112)
0x1b3: Push((int) 26721)
0x1b4: Push((int) 44416)
0x1b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b6: Pop(3)
0x1b7: Return(); Pop(0)

0x1b8: Push((int) 26719)
0x1b9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ba: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1bb: PushEmpty(string)
0x1bc: Stack[-1] = "Neutral"
0x1bd: Call2 0x9f

0x1be: Pop(1)
0x1bf: Push((int) 525351)
0x1c0: @@ SetMessage(Stack[-1])
0x1c1: Pop(1)
0x1c2: @@ ClearReplies()
0x1c3: Pop(0)
0x1c4: Push((int) 525352)
0x1c5: Push((int) 26721)
0x1c6: Push((int) 26720)
0x1c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c8: Pop(3)
0x1c9: Push((int) 525355)
0x1ca: Push((int) 26724)
0x1cb: Push((int) 26723)
0x1cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cd: Pop(3)
0x1ce: Return(); Pop(0)

0x1cf: Push((int) 26724)
0x1d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d1: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1d2: PushEmpty(string)
0x1d3: Stack[-1] = "Neutral"
0x1d4: Call2 0x9f

0x1d5: Pop(1)
0x1d6: Push((int) 525356)
0x1d7: @@ SetMessage(Stack[-1])
0x1d8: Pop(1)
0x1d9: @@ ClearReplies()
0x1da: Pop(0)
0x1db: Push((int) 525357)
0x1dc: Push((int) -1)
0x1dd: Push((int) 26725)
0x1de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1df: Pop(3)
0x1e0: Return(); Pop(0)

0x1e1: Push((int) 26721)
0x1e2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e3: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1e4: PushEmpty(string)
0x1e5: Stack[-1] = "Neutral"
0x1e6: Call2 0x9f

0x1e7: Pop(1)
0x1e8: Push((int) 525353)
0x1e9: @@ SetMessage(Stack[-1])
0x1ea: Pop(1)
0x1eb: @@ ClearReplies()
0x1ec: Pop(0)
0x1ed: Push((int) 525354)
0x1ee: Push((int) -1)
0x1ef: Push((int) 26722)
0x1f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f1: Pop(3)
0x1f2: Return(); Pop(0)

0x1f3: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1f4: PushEmpty(bool)
0x1f5: Call2 0x12d6

0x1f6: Pop(0)
0x1f7: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f8: @ lshStopAnimation()
0x1f9: Pop(0)
0x1fa: GOTO 0x1fd

0x1fb: @ StopAnimation()
0x1fc: Pop(0)
0x1fd: Return(); Pop(0)

0x1fe: GOTO 0xb6

0x1ff: Return(); Pop(0)

0x200: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x201: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x202: PushEmpty(bool, object, float)
0x203: Stack[-2] = Stack[-12]
0x204: Stack[-1] = (float) 70.0
0x205: Call2 0x1102

0x206: Pop(2)
0x207: Pop(1); Push((bool) Stack[-1] == 0)
0x208: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x209: Stack[-10] = (int) -2
0x20a: Return(); Pop(8)

0x20b: @ CreateDialog(Stack[-4])
0x20c: Pop(0)
0x20d: PushEmpty(int)
0x20e: Call2 0x12d0

0x20f: Pop(0)
0x210: @@ SetNPCName(Stack[-1])
0x211: Pop(1)
0x212: PushEmpty(int)
0x213: Call2 0x12ce

0x214: Pop(0)
0x215: @@ SetNPCDescription(Stack[-1])
0x216: Pop(1)
0x217: PushEmpty(string)
0x218: Call2 0x12d2

0x219: Pop(0)
0x21a: @@ SetPhoto(Stack[-1])
0x21b: Pop(1)
0x21c: PushEmpty(string)
0x21d: Call2 0x12d4

0x21e: Pop(0)
0x21f: @@ SetPhoto2(Stack[-1])
0x220: Pop(1)
0x221: PushEmpty(int)
0x222: Call2 0x1630

0x223: Pop(0)
0x224: @@ SetPlayerName(Stack[-1])
0x225: Pop(1)
0x226: Stack[-2] = (int) -1
0x227: @ IsOverrideActive(Stack[-3])
0x228: Pop(0)
0x229: Push(Stack[-3])
0x22a: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x22b: Stack[-10] = (int) -2
0x22c: Return(); Pop(8)

0x22d: @ DoDialog(Stack[-4])
0x22e: Pop(0)
0x22f: PushEmpty(bool, object)
0x230: PushEmpty(object)
0x231: Call2 0x1216

0x232: Stack[-2] = Stack[-1]
0x233: Pop(1)
0x234: Call2 0x1157

0x235: Pop(2)
0x236: PushEmpty(object, object)
0x237: Stack[-2] = Stack[-11]
0x238: Stack[-1] = Stack[-6]
0x239: Push(-2, 4); TaskCall(3)
0x23a: Call2 0x251

0x23b: Pop(-2, 4); TaskReturn
0x23c: Pop(2)
0x23d: @@ IsDialogEnd(Stack[-1])
0x23e: Pop(0)
0x23f: Pop(0); Push((bool) Stack[-1] == 0)
0x240: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x241: @ sync()
0x242: Pop(0)
0x243: @@ IsDialogEnd(Stack[-1])
0x244: Pop(0)
0x245: GOTO 0x23f

0x246: PushEmpty(object)
0x247: Stack[-1] = Stack[-10]
0x248: Call2 0x1146

0x249: Pop(1)
0x24a: @ StopDialog(Stack[-4])
0x24b: Pop(0)
0x24c: @@ GetReturnValue(Stack[-2])
0x24d: Pop(0)
0x24e: Stack[-10] = Stack[-2]
0x24f: Return(); Pop(8)

0x250: Stack[-4] = 0
0x251: PushEmpty()
0x252: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x253: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x254: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x255: Push((int) 1)
0x256: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x257: PushEmpty(bool, object)
0x258: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x259: Call2 0x14a5

0x25a: Pop(1)
0x25b: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x25c: PushEmpty(string)
0x25d: Stack[-1] = "Neutral"
0x25e: Call2 0x2d4

0x25f: Pop(1)
0x260: Push((int) 525442)
0x261: @@ SetMessage(Stack[-1])
0x262: Pop(1)
0x263: @@ ClearReplies()
0x264: Pop(0)
0x265: Push((int) 525443)
0x266: Push((int) -1)
0x267: Push((int) 26811)
0x268: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x269: Pop(3)
0x26a: Push((int) 529337)
0x26b: Push((int) -1)
0x26c: Push((int) 30792)
0x26d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26e: Pop(3)
0x26f: GOTO 0x2b6

0x270: PushEmpty(string)
0x271: Stack[-1] = "Neutral"
0x272: Call2 0x2d4

0x273: Pop(1)
0x274: Push((int) 525406)
0x275: @@ SetMessage(Stack[-1])
0x276: Pop(1)
0x277: @@ ClearReplies()
0x278: Pop(0)
0x279: PushEmpty(bool, object)
0x27a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x27b: Call2 0x1481

0x27c: Pop(1)
0x27d: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x27e: Push((int) 525407)
0x27f: Push((int) 26776)
0x280: Push((int) 26775)
0x281: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x282: Pop(3)
0x283: PushEmpty(bool)
0x284: Stack[-1] = (bool) 0
0x285: PushEmpty(bool, object)
0x286: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x287: Call2 0x1499

0x288: Pop(1)
0x289: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x28a: PushEmpty(bool, object)
0x28b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x28c: Call2 0x148d

0x28d: Pop(1)
0x28e: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x28f: Stack[-1] = (bool) 1
0x290: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x291: Push((int) 525425)
0x292: Push((int) 40970)
0x293: Push((int) 26793)
0x294: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x295: Pop(3)
0x296: PushEmpty(bool)
0x297: Stack[-1] = (bool) 0
0x298: PushEmpty(bool, object)
0x299: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x29a: Call2 0x14bd

0x29b: Pop(1)
0x29c: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x29d: PushEmpty(bool, object)
0x29e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x29f: Call2 0x14b1

0x2a0: Pop(1)
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x2a2: Stack[-1] = (bool) 1
0x2a3: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x2a4: Push((int) 525575)
0x2a5: Push((int) 26923)
0x2a6: Push((int) 26922)
0x2a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a8: Pop(3)
0x2a9: Push((int) 525412)
0x2aa: Push((int) -1)
0x2ab: Push((int) 26780)
0x2ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ad: Pop(3)
0x2ae: Push((int) 538971)
0x2af: Push((int) -1)
0x2b0: Push((int) 40909)
0x2b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b2: Pop(3)
0x2b3: GOTO 0x2b6

0x2b4: Return(); Pop(0)

0x2b5: GOTO 0x255

0x2b6: PushEmpty(bool)
0x2b7: Call2 0x12d6

0x2b8: Pop(0)
0x2b9: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2ba: @ lshWaitForAnimEnd()
0x2bb: Pop(0)
0x2bc: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2bd: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2be: GOTO 0x2c4

0x2bf: PushEmpty(string)
0x2c0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x2c1: Call2 0x11e1

0x2c2: Pop(1)
0x2c3: GOTO 0x2ba

0x2c4: GOTO 0x2d3

0x2c5: Push("all")
0x2c6: Push("idle")
0x2c7: @ PlayAnimation(Stack[-2], Stack[-1])
0x2c8: Pop(2)
0x2c9: @ WaitForAnimEnd()
0x2ca: Pop(0)
0x2cb: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2cc: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2cd: GOTO 0x2d3

0x2ce: Push("all")
0x2cf: Push("idle")
0x2d0: @ PlayAnimation(Stack[-2], Stack[-1])
0x2d1: Pop(2)
0x2d2: GOTO 0x2c9

0x2d3: Return(); Pop(0)

0x2d4: PushEmpty()
0x2d5: PushEmpty(bool)
0x2d6: Call2 0x12d6

0x2d7: Pop(0)
0x2d8: Pop(1); Push((bool) Stack[-1] == 0)
0x2d9: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2da: Return(); Pop(0)

0x2db: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2dc: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2dd: Return(); Pop(0)

0x2de: PushEmpty(string, bool)
0x2df: Stack[-2] = Stack[-3]
0x2e0: Push("")
0x2e1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2e3: Stack[-1] = (bool) 0
0x2e4: GOTO 0x2e6

0x2e5: Stack[-1] = (bool) 1
0x2e6: Call2 0x11f1

0x2e7: Pop(2)
0x2e8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2e9: Return(); Pop(0)

0x2ea: PushEmpty()
0x2eb: Push((int) 1)
0x2ec: IF (Stack[-1] == 0) GOTO 0x616; Pop(1)

0x2ed: PushEmpty()
0x2ee: Call2 0x120f

0x2ef: Pop(0)
0x2f0: Push((int) 26779)
0x2f1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f2: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2f3: PushEmpty(object, object)
0x2f4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2f5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2f6: Call2 0x136c

0x2f7: Pop(2)
0x2f8: PushEmpty(object, object)
0x2f9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2fa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2fb: Call2 0x140f

0x2fc: Pop(2)
0x2fd: Push((int) 40921)
0x2fe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ff: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x300: PushEmpty(object, object)
0x301: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x302: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x303: Call2 0x136c

0x304: Pop(2)
0x305: PushEmpty(object, object)
0x306: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x307: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x308: Call2 0x140f

0x309: Pop(2)
0x30a: Push((int) 26801)
0x30b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x30c: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x30d: PushEmpty(object, object)
0x30e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x30f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x310: Call2 0x138c

0x311: Pop(2)
0x312: PushEmpty(object, object)
0x313: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x314: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x315: Call2 0x140f

0x316: Pop(2)
0x317: Push((int) 26922)
0x318: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x319: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x31a: PushEmpty(object, object)
0x31b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x31c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x31d: Call2 0x1395

0x31e: Pop(2)
0x31f: Push((int) 26924)
0x320: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x321: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x322: PushEmpty(object, object)
0x323: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x324: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x325: Call2 0x139b

0x326: Pop(2)
0x327: Push((int) 26810)
0x328: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x329: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x32a: PushEmpty(bool, object)
0x32b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x32c: Call2 0x14a5

0x32d: Pop(1)
0x32e: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x32f: PushEmpty(string)
0x330: Stack[-1] = "Neutral"
0x331: Call2 0x2d4

0x332: Pop(1)
0x333: Push((int) 525442)
0x334: @@ SetMessage(Stack[-1])
0x335: Pop(1)
0x336: @@ ClearReplies()
0x337: Pop(0)
0x338: Push((int) 525443)
0x339: Push((int) -1)
0x33a: Push((int) 26811)
0x33b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33c: Pop(3)
0x33d: Push((int) 529337)
0x33e: Push((int) -1)
0x33f: Push((int) 30792)
0x340: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x341: Pop(3)
0x342: Return(); Pop(0)

0x343: PushEmpty(string)
0x344: Stack[-1] = "Neutral"
0x345: Call2 0x2d4

0x346: Pop(1)
0x347: Push((int) 525406)
0x348: @@ SetMessage(Stack[-1])
0x349: Pop(1)
0x34a: @@ ClearReplies()
0x34b: Pop(0)
0x34c: PushEmpty(bool, object)
0x34d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x34e: Call2 0x1481

0x34f: Pop(1)
0x350: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x351: Push((int) 525407)
0x352: Push((int) 26776)
0x353: Push((int) 26775)
0x354: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x355: Pop(3)
0x356: PushEmpty(bool)
0x357: Stack[-1] = (bool) 0
0x358: PushEmpty(bool, object)
0x359: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x35a: Call2 0x1499

0x35b: Pop(1)
0x35c: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x35d: PushEmpty(bool, object)
0x35e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x35f: Call2 0x148d

0x360: Pop(1)
0x361: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x362: Stack[-1] = (bool) 1
0x363: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x364: Push((int) 525425)
0x365: Push((int) 40970)
0x366: Push((int) 26793)
0x367: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x368: Pop(3)
0x369: PushEmpty(bool)
0x36a: Stack[-1] = (bool) 0
0x36b: PushEmpty(bool, object)
0x36c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x36d: Call2 0x14bd

0x36e: Pop(1)
0x36f: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x370: PushEmpty(bool, object)
0x371: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x372: Call2 0x14b1

0x373: Pop(1)
0x374: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x375: Stack[-1] = (bool) 1
0x376: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x377: Push((int) 525575)
0x378: Push((int) 26923)
0x379: Push((int) 26922)
0x37a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37b: Pop(3)
0x37c: Push((int) 525412)
0x37d: Push((int) -1)
0x37e: Push((int) 26780)
0x37f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x380: Pop(3)
0x381: Push((int) 538971)
0x382: Push((int) -1)
0x383: Push((int) 40909)
0x384: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x385: Pop(3)
0x386: Return(); Pop(0)

0x387: Push((int) 26923)
0x388: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x389: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x38a: PushEmpty(string)
0x38b: Stack[-1] = "Adoration"
0x38c: Call2 0x2d4

0x38d: Pop(1)
0x38e: Push((int) 525576)
0x38f: @@ SetMessage(Stack[-1])
0x390: Pop(1)
0x391: @@ ClearReplies()
0x392: Pop(0)
0x393: Push((int) 538918)
0x394: Push((int) 40872)
0x395: Push((int) 40871)
0x396: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x397: Pop(3)
0x398: Push((int) 538922)
0x399: Push((int) 40872)
0x39a: Push((int) 40875)
0x39b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39c: Pop(3)
0x39d: Return(); Pop(0)

0x39e: Push((int) 40872)
0x39f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a0: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3a1: PushEmpty(string)
0x3a2: Stack[-1] = "Dream"
0x3a3: Call2 0x2d4

0x3a4: Pop(1)
0x3a5: Push((int) 538919)
0x3a6: @@ SetMessage(Stack[-1])
0x3a7: Pop(1)
0x3a8: @@ ClearReplies()
0x3a9: Pop(0)
0x3aa: Push((int) 538920)
0x3ab: Push((int) 40874)
0x3ac: Push((int) 40873)
0x3ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ae: Pop(3)
0x3af: Return(); Pop(0)

0x3b0: Push((int) 40874)
0x3b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b2: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3b3: PushEmpty(string)
0x3b4: Stack[-1] = "Neutral"
0x3b5: Call2 0x2d4

0x3b6: Pop(1)
0x3b7: Push((int) 538921)
0x3b8: @@ SetMessage(Stack[-1])
0x3b9: Pop(1)
0x3ba: @@ ClearReplies()
0x3bb: Pop(0)
0x3bc: Push((int) 539033)
0x3bd: Push((int) 40975)
0x3be: Push((int) 40974)
0x3bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c0: Pop(3)
0x3c1: Push((int) 539035)
0x3c2: Push((int) 40975)
0x3c3: Push((int) 40976)
0x3c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c5: Pop(3)
0x3c6: Return(); Pop(0)

0x3c7: Push((int) 40975)
0x3c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c9: IF (Stack[-1] == 0) GOTO 0x3de; Pop(1)

0x3ca: PushEmpty(string)
0x3cb: Stack[-1] = "Dream"
0x3cc: Call2 0x2d4

0x3cd: Pop(1)
0x3ce: Push((int) 539034)
0x3cf: @@ SetMessage(Stack[-1])
0x3d0: Pop(1)
0x3d1: @@ ClearReplies()
0x3d2: Pop(0)
0x3d3: Push((int) 538923)
0x3d4: Push((int) 40878)
0x3d5: Push((int) 40877)
0x3d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d7: Pop(3)
0x3d8: Push((int) 538925)
0x3d9: Push((int) 40878)
0x3da: Push((int) 40879)
0x3db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3dc: Pop(3)
0x3dd: Return(); Pop(0)

0x3de: Push((int) 40878)
0x3df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e0: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3e1: PushEmpty(string)
0x3e2: Stack[-1] = "Dream"
0x3e3: Call2 0x2d4

0x3e4: Pop(1)
0x3e5: Push((int) 538924)
0x3e6: @@ SetMessage(Stack[-1])
0x3e7: Pop(1)
0x3e8: @@ ClearReplies()
0x3e9: Pop(0)
0x3ea: Push((int) 525577)
0x3eb: Push((int) -1)
0x3ec: Push((int) 26924)
0x3ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ee: Pop(3)
0x3ef: Push((int) 525614)
0x3f0: Push((int) -1)
0x3f1: Push((int) 26961)
0x3f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f3: Pop(3)
0x3f4: Return(); Pop(0)

0x3f5: Push((int) 40970)
0x3f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f7: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x3f8: PushEmpty(string)
0x3f9: Stack[-1] = "Rage"
0x3fa: Call2 0x2d4

0x3fb: Pop(1)
0x3fc: Push((int) 539029)
0x3fd: @@ SetMessage(Stack[-1])
0x3fe: Pop(1)
0x3ff: @@ ClearReplies()
0x400: Pop(0)
0x401: Push((int) 539030)
0x402: Push((int) 26794)
0x403: Push((int) 40971)
0x404: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x405: Pop(3)
0x406: Push((int) 539031)
0x407: Push((int) 26794)
0x408: Push((int) 40972)
0x409: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40a: Pop(3)
0x40b: Return(); Pop(0)

0x40c: Push((int) 26794)
0x40d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x40e: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x40f: PushEmpty(string)
0x410: Stack[-1] = "Fear"
0x411: Call2 0x2d4

0x412: Pop(1)
0x413: Push((int) 525426)
0x414: @@ SetMessage(Stack[-1])
0x415: Pop(1)
0x416: @@ ClearReplies()
0x417: Pop(0)
0x418: Push((int) 525427)
0x419: Push((int) 40979)
0x41a: Push((int) 26795)
0x41b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41c: Pop(3)
0x41d: Return(); Pop(0)

0x41e: Push((int) 40979)
0x41f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x420: IF (Stack[-1] == 0) GOTO 0x435; Pop(1)

0x421: PushEmpty(string)
0x422: Stack[-1] = "Neutral"
0x423: Call2 0x2d4

0x424: Pop(1)
0x425: Push((int) 539036)
0x426: @@ SetMessage(Stack[-1])
0x427: Pop(1)
0x428: @@ ClearReplies()
0x429: Pop(0)
0x42a: Push((int) 539037)
0x42b: Push((int) 40982)
0x42c: Push((int) 40980)
0x42d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42e: Pop(3)
0x42f: Push((int) 539038)
0x430: Push((int) 40983)
0x431: Push((int) 40981)
0x432: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x433: Pop(3)
0x434: Return(); Pop(0)

0x435: Push((int) 40983)
0x436: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x437: IF (Stack[-1] == 0) GOTO 0x44c; Pop(1)

0x438: PushEmpty(string)
0x439: Stack[-1] = "Rage"
0x43a: Call2 0x2d4

0x43b: Pop(1)
0x43c: Push((int) 539040)
0x43d: @@ SetMessage(Stack[-1])
0x43e: Pop(1)
0x43f: @@ ClearReplies()
0x440: Pop(0)
0x441: Push((int) 539046)
0x442: Push((int) 40991)
0x443: Push((int) 40990)
0x444: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x445: Pop(3)
0x446: Push((int) 539048)
0x447: Push((int) 40996)
0x448: Push((int) 40992)
0x449: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x44a: Pop(3)
0x44b: Return(); Pop(0)

0x44c: Push((int) 40991)
0x44d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x44e: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x44f: PushEmpty(string)
0x450: Stack[-1] = "Rage"
0x451: Call2 0x2d4

0x452: Pop(1)
0x453: Push((int) 539047)
0x454: @@ SetMessage(Stack[-1])
0x455: Pop(1)
0x456: @@ ClearReplies()
0x457: Pop(0)
0x458: Push((int) 539041)
0x459: Push((int) 40996)
0x45a: Push((int) 40984)
0x45b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45c: Pop(3)
0x45d: Return(); Pop(0)

0x45e: Push((int) 40996)
0x45f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x460: IF (Stack[-1] == 0) GOTO 0x470; Pop(1)

0x461: PushEmpty(string)
0x462: Stack[-1] = "Dream"
0x463: Call2 0x2d4

0x464: Pop(1)
0x465: Push((int) 539051)
0x466: @@ SetMessage(Stack[-1])
0x467: Pop(1)
0x468: @@ ClearReplies()
0x469: Pop(0)
0x46a: Push((int) 539052)
0x46b: Push((int) 40999)
0x46c: Push((int) 40998)
0x46d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46e: Pop(3)
0x46f: Return(); Pop(0)

0x470: Push((int) 40999)
0x471: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x472: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x473: PushEmpty(string)
0x474: Stack[-1] = "Dream"
0x475: Call2 0x2d4

0x476: Pop(1)
0x477: Push((int) 539053)
0x478: @@ SetMessage(Stack[-1])
0x479: Pop(1)
0x47a: @@ ClearReplies()
0x47b: Pop(0)
0x47c: Push((int) 539054)
0x47d: Push((int) 26796)
0x47e: Push((int) 41000)
0x47f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x480: Pop(3)
0x481: Push((int) 539056)
0x482: Push((int) 26798)
0x483: Push((int) 41003)
0x484: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x485: Pop(3)
0x486: Return(); Pop(0)

0x487: Push((int) 40982)
0x488: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x489: IF (Stack[-1] == 0) GOTO 0x499; Pop(1)

0x48a: PushEmpty(string)
0x48b: Stack[-1] = "Dream"
0x48c: Call2 0x2d4

0x48d: Pop(1)
0x48e: Push((int) 539039)
0x48f: @@ SetMessage(Stack[-1])
0x490: Pop(1)
0x491: @@ ClearReplies()
0x492: Pop(0)
0x493: Push((int) 539044)
0x494: Push((int) 40988)
0x495: Push((int) 40987)
0x496: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x497: Pop(3)
0x498: Return(); Pop(0)

0x499: Push((int) 40988)
0x49a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x49b: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x49c: PushEmpty(string)
0x49d: Stack[-1] = "Rage"
0x49e: Call2 0x2d4

0x49f: Pop(1)
0x4a0: Push((int) 539045)
0x4a1: @@ SetMessage(Stack[-1])
0x4a2: Pop(1)
0x4a3: @@ ClearReplies()
0x4a4: Pop(0)
0x4a5: Push((int) 539049)
0x4a6: Push((int) 40983)
0x4a7: Push((int) 40993)
0x4a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a9: Pop(3)
0x4aa: Push((int) 539050)
0x4ab: Push((int) 26796)
0x4ac: Push((int) 40994)
0x4ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ae: Pop(3)
0x4af: Return(); Pop(0)

0x4b0: Push((int) 26796)
0x4b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4b2: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4b3: PushEmpty(string)
0x4b4: Stack[-1] = "Dream"
0x4b5: Call2 0x2d4

0x4b6: Pop(1)
0x4b7: Push((int) 525428)
0x4b8: @@ SetMessage(Stack[-1])
0x4b9: Pop(1)
0x4ba: @@ ClearReplies()
0x4bb: Pop(0)
0x4bc: Push((int) 525429)
0x4bd: Push((int) 26798)
0x4be: Push((int) 26797)
0x4bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c0: Pop(3)
0x4c1: Push((int) 539071)
0x4c2: Push((int) 41020)
0x4c3: Push((int) 41019)
0x4c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c5: Pop(3)
0x4c6: Return(); Pop(0)

0x4c7: Push((int) 41020)
0x4c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c9: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4ca: PushEmpty(string)
0x4cb: Stack[-1] = "Dream"
0x4cc: Call2 0x2d4

0x4cd: Pop(1)
0x4ce: Push((int) 539072)
0x4cf: @@ SetMessage(Stack[-1])
0x4d0: Pop(1)
0x4d1: @@ ClearReplies()
0x4d2: Pop(0)
0x4d3: Push((int) 539073)
0x4d4: Push((int) 26798)
0x4d5: Push((int) 41021)
0x4d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d7: Pop(3)
0x4d8: Return(); Pop(0)

0x4d9: Push((int) 26798)
0x4da: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4db: IF (Stack[-1] == 0) GOTO 0x4eb; Pop(1)

0x4dc: PushEmpty(string)
0x4dd: Stack[-1] = "Dream"
0x4de: Call2 0x2d4

0x4df: Pop(1)
0x4e0: Push((int) 525430)
0x4e1: @@ SetMessage(Stack[-1])
0x4e2: Pop(1)
0x4e3: @@ ClearReplies()
0x4e4: Pop(0)
0x4e5: Push((int) 525431)
0x4e6: Push((int) 26800)
0x4e7: Push((int) 26799)
0x4e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e9: Pop(3)
0x4ea: Return(); Pop(0)

0x4eb: Push((int) 26800)
0x4ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ed: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x4ee: PushEmpty(string)
0x4ef: Stack[-1] = "Fear"
0x4f0: Call2 0x2d4

0x4f1: Pop(1)
0x4f2: Push((int) 525432)
0x4f3: @@ SetMessage(Stack[-1])
0x4f4: Pop(1)
0x4f5: @@ ClearReplies()
0x4f6: Pop(0)
0x4f7: Push((int) 538913)
0x4f8: Push((int) 40867)
0x4f9: Push((int) 40866)
0x4fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4fb: Pop(3)
0x4fc: Push((int) 539074)
0x4fd: Push((int) 41024)
0x4fe: Push((int) 41023)
0x4ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x500: Pop(3)
0x501: Return(); Pop(0)

0x502: Push((int) 41024)
0x503: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x504: IF (Stack[-1] == 0) GOTO 0x514; Pop(1)

0x505: PushEmpty(string)
0x506: Stack[-1] = "Neutral"
0x507: Call2 0x2d4

0x508: Pop(1)
0x509: Push((int) 539075)
0x50a: @@ SetMessage(Stack[-1])
0x50b: Pop(1)
0x50c: @@ ClearReplies()
0x50d: Pop(0)
0x50e: Push((int) 539076)
0x50f: Push((int) 41026)
0x510: Push((int) 41025)
0x511: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x512: Pop(3)
0x513: Return(); Pop(0)

0x514: Push((int) 41026)
0x515: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x516: IF (Stack[-1] == 0) GOTO 0x526; Pop(1)

0x517: PushEmpty(string)
0x518: Stack[-1] = "Neutral"
0x519: Call2 0x2d4

0x51a: Pop(1)
0x51b: Push((int) 539077)
0x51c: @@ SetMessage(Stack[-1])
0x51d: Pop(1)
0x51e: @@ ClearReplies()
0x51f: Pop(0)
0x520: Push((int) 539078)
0x521: Push((int) 41029)
0x522: Push((int) 41027)
0x523: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x524: Pop(3)
0x525: Return(); Pop(0)

0x526: Push((int) 41029)
0x527: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x528: IF (Stack[-1] == 0) GOTO 0x538; Pop(1)

0x529: PushEmpty(string)
0x52a: Stack[-1] = "Neutral"
0x52b: Call2 0x2d4

0x52c: Pop(1)
0x52d: Push((int) 539080)
0x52e: @@ SetMessage(Stack[-1])
0x52f: Pop(1)
0x530: @@ ClearReplies()
0x531: Pop(0)
0x532: Push((int) 539081)
0x533: Push((int) 41028)
0x534: Push((int) 41030)
0x535: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x536: Pop(3)
0x537: Return(); Pop(0)

0x538: Push((int) 40867)
0x539: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x53a: IF (Stack[-1] == 0) GOTO 0x54f; Pop(1)

0x53b: PushEmpty(string)
0x53c: Stack[-1] = "Fear"
0x53d: Call2 0x2d4

0x53e: Pop(1)
0x53f: Push((int) 538914)
0x540: @@ SetMessage(Stack[-1])
0x541: Pop(1)
0x542: @@ ClearReplies()
0x543: Pop(0)
0x544: Push((int) 525434)
0x545: Push((int) 41028)
0x546: Push((int) 26802)
0x547: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x548: Pop(3)
0x549: Push((int) 538915)
0x54a: Push((int) 41028)
0x54b: Push((int) 40868)
0x54c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54d: Pop(3)
0x54e: Return(); Pop(0)

0x54f: Push((int) 41028)
0x550: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x551: IF (Stack[-1] == 0) GOTO 0x56b; Pop(1)

0x552: PushEmpty(string)
0x553: Stack[-1] = "Fear"
0x554: Call2 0x2d4

0x555: Pop(1)
0x556: Push((int) 539079)
0x557: @@ SetMessage(Stack[-1])
0x558: Pop(1)
0x559: @@ ClearReplies()
0x55a: Pop(0)
0x55b: Push((int) 525433)
0x55c: Push((int) -1)
0x55d: Push((int) 26801)
0x55e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55f: Pop(3)
0x560: PushEmpty(bool, object)
0x561: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x562: Call2 0x14a5

0x563: Pop(1)
0x564: IF (Stack[-1] == 0) GOTO 0x56a; Pop(1)

0x565: Push((int) 538917)
0x566: Push((int) -1)
0x567: Push((int) 40870)
0x568: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x569: Pop(3)
0x56a: Return(); Pop(0)

0x56b: Push((int) 26776)
0x56c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x56d: IF (Stack[-1] == 0) GOTO 0x57d; Pop(1)

0x56e: PushEmpty(string)
0x56f: Stack[-1] = "Fear"
0x570: Call2 0x2d4

0x571: Pop(1)
0x572: Push((int) 525408)
0x573: @@ SetMessage(Stack[-1])
0x574: Pop(1)
0x575: @@ ClearReplies()
0x576: Pop(0)
0x577: Push((int) 525409)
0x578: Push((int) 40903)
0x579: Push((int) 26777)
0x57a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57b: Pop(3)
0x57c: Return(); Pop(0)

0x57d: Push((int) 40903)
0x57e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x57f: IF (Stack[-1] == 0) GOTO 0x594; Pop(1)

0x580: PushEmpty(string)
0x581: Stack[-1] = "Fear"
0x582: Call2 0x2d4

0x583: Pop(1)
0x584: Push((int) 538965)
0x585: @@ SetMessage(Stack[-1])
0x586: Pop(1)
0x587: @@ ClearReplies()
0x588: Pop(0)
0x589: Push((int) 538966)
0x58a: Push((int) 40905)
0x58b: Push((int) 40904)
0x58c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x58d: Pop(3)
0x58e: Push((int) 538972)
0x58f: Push((int) 40905)
0x590: Push((int) 40910)
0x591: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x592: Pop(3)
0x593: Return(); Pop(0)

0x594: Push((int) 40905)
0x595: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x596: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x597: PushEmpty(string)
0x598: Stack[-1] = "Dream"
0x599: Call2 0x2d4

0x59a: Pop(1)
0x59b: Push((int) 538967)
0x59c: @@ SetMessage(Stack[-1])
0x59d: Pop(1)
0x59e: @@ ClearReplies()
0x59f: Pop(0)
0x5a0: Push((int) 538968)
0x5a1: Push((int) 40907)
0x5a2: Push((int) 40906)
0x5a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a4: Pop(3)
0x5a5: Return(); Pop(0)

0x5a6: Push((int) 40907)
0x5a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5a8: IF (Stack[-1] == 0) GOTO 0x5b8; Pop(1)

0x5a9: PushEmpty(string)
0x5aa: Stack[-1] = "Dream"
0x5ab: Call2 0x2d4

0x5ac: Pop(1)
0x5ad: Push((int) 538969)
0x5ae: @@ SetMessage(Stack[-1])
0x5af: Pop(1)
0x5b0: @@ ClearReplies()
0x5b1: Pop(0)
0x5b2: Push((int) 538970)
0x5b3: Push((int) 40912)
0x5b4: Push((int) 40908)
0x5b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b6: Pop(3)
0x5b7: Return(); Pop(0)

0x5b8: Push((int) 40912)
0x5b9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ba: IF (Stack[-1] == 0) GOTO 0x5cf; Pop(1)

0x5bb: PushEmpty(string)
0x5bc: Stack[-1] = "Neutral"
0x5bd: Call2 0x2d4

0x5be: Pop(1)
0x5bf: Push((int) 538973)
0x5c0: @@ SetMessage(Stack[-1])
0x5c1: Pop(1)
0x5c2: @@ ClearReplies()
0x5c3: Pop(0)
0x5c4: Push((int) 538974)
0x5c5: Push((int) 40914)
0x5c6: Push((int) 40913)
0x5c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c8: Pop(3)
0x5c9: Push((int) 538977)
0x5ca: Push((int) 40917)
0x5cb: Push((int) 40916)
0x5cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5cd: Pop(3)
0x5ce: Return(); Pop(0)

0x5cf: Push((int) 40917)
0x5d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5d1: IF (Stack[-1] == 0) GOTO 0x5e1; Pop(1)

0x5d2: PushEmpty(string)
0x5d3: Stack[-1] = "Fear"
0x5d4: Call2 0x2d4

0x5d5: Pop(1)
0x5d6: Push((int) 538978)
0x5d7: @@ SetMessage(Stack[-1])
0x5d8: Pop(1)
0x5d9: @@ ClearReplies()
0x5da: Pop(0)
0x5db: Push((int) 538979)
0x5dc: Push((int) 40914)
0x5dd: Push((int) 40918)
0x5de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5df: Pop(3)
0x5e0: Return(); Pop(0)

0x5e1: Push((int) 40914)
0x5e2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5e3: IF (Stack[-1] == 0) GOTO 0x5f8; Pop(1)

0x5e4: PushEmpty(string)
0x5e5: Stack[-1] = "Neutral"
0x5e6: Call2 0x2d4

0x5e7: Pop(1)
0x5e8: Push((int) 538975)
0x5e9: @@ SetMessage(Stack[-1])
0x5ea: Pop(1)
0x5eb: @@ ClearReplies()
0x5ec: Pop(0)
0x5ed: Push((int) 525411)
0x5ee: Push((int) -1)
0x5ef: Push((int) 26779)
0x5f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f1: Pop(3)
0x5f2: Push((int) 538980)
0x5f3: Push((int) 26778)
0x5f4: Push((int) 40920)
0x5f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f6: Pop(3)
0x5f7: Return(); Pop(0)

0x5f8: Push((int) 26778)
0x5f9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5fa: IF (Stack[-1] == 0) GOTO 0x60a; Pop(1)

0x5fb: PushEmpty(string)
0x5fc: Stack[-1] = "Neutral"
0x5fd: Call2 0x2d4

0x5fe: Pop(1)
0x5ff: Push((int) 525410)
0x600: @@ SetMessage(Stack[-1])
0x601: Pop(1)
0x602: @@ ClearReplies()
0x603: Pop(0)
0x604: Push((int) 538981)
0x605: Push((int) -1)
0x606: Push((int) 40921)
0x607: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x608: Pop(3)
0x609: Return(); Pop(0)

0x60a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x60b: PushEmpty(bool)
0x60c: Call2 0x12d6

0x60d: Pop(0)
0x60e: IF (Stack[-1] == 0) GOTO 0x612; Pop(1)

0x60f: @ lshStopAnimation()
0x610: Pop(0)
0x611: GOTO 0x614

0x612: @ StopAnimation()
0x613: Pop(0)
0x614: Return(); Pop(0)

0x615: GOTO 0x2eb

0x616: Return(); Pop(0)

0x617: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x618: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x619: PushEmpty(bool, object, float)
0x61a: Stack[-2] = Stack[-12]
0x61b: Stack[-1] = (float) 70.0
0x61c: Call2 0x1102

0x61d: Pop(2)
0x61e: Pop(1); Push((bool) Stack[-1] == 0)
0x61f: IF (Stack[-1] == 0) GOTO 0x622; Pop(1)

0x620: Stack[-10] = (int) -2
0x621: Return(); Pop(8)

0x622: @ CreateDialog(Stack[-4])
0x623: Pop(0)
0x624: PushEmpty(int)
0x625: Call2 0x12d0

0x626: Pop(0)
0x627: @@ SetNPCName(Stack[-1])
0x628: Pop(1)
0x629: PushEmpty(int)
0x62a: Call2 0x12ce

0x62b: Pop(0)
0x62c: @@ SetNPCDescription(Stack[-1])
0x62d: Pop(1)
0x62e: PushEmpty(string)
0x62f: Call2 0x12d2

0x630: Pop(0)
0x631: @@ SetPhoto(Stack[-1])
0x632: Pop(1)
0x633: PushEmpty(string)
0x634: Call2 0x12d4

0x635: Pop(0)
0x636: @@ SetPhoto2(Stack[-1])
0x637: Pop(1)
0x638: PushEmpty(int)
0x639: Call2 0x1630

0x63a: Pop(0)
0x63b: @@ SetPlayerName(Stack[-1])
0x63c: Pop(1)
0x63d: Stack[-2] = (int) -1
0x63e: @ IsOverrideActive(Stack[-3])
0x63f: Pop(0)
0x640: Push(Stack[-3])
0x641: IF (Stack[-1] == 0) GOTO 0x644; Pop(1)

0x642: Stack[-10] = (int) -2
0x643: Return(); Pop(8)

0x644: @ DoDialog(Stack[-4])
0x645: Pop(0)
0x646: PushEmpty(bool, object)
0x647: PushEmpty(object)
0x648: Call2 0x1216

0x649: Stack[-2] = Stack[-1]
0x64a: Pop(1)
0x64b: Call2 0x1157

0x64c: Pop(2)
0x64d: PushEmpty(object, object)
0x64e: Stack[-2] = Stack[-11]
0x64f: Stack[-1] = Stack[-6]
0x650: Push(-2, 4); TaskCall(5)
0x651: Call2 0x668

0x652: Pop(-2, 4); TaskReturn
0x653: Pop(2)
0x654: @@ IsDialogEnd(Stack[-1])
0x655: Pop(0)
0x656: Pop(0); Push((bool) Stack[-1] == 0)
0x657: IF (Stack[-1] == 0) GOTO 0x65d; Pop(1)

0x658: @ sync()
0x659: Pop(0)
0x65a: @@ IsDialogEnd(Stack[-1])
0x65b: Pop(0)
0x65c: GOTO 0x656

0x65d: PushEmpty(object)
0x65e: Stack[-1] = Stack[-10]
0x65f: Call2 0x1146

0x660: Pop(1)
0x661: @ StopDialog(Stack[-4])
0x662: Pop(0)
0x663: @@ GetReturnValue(Stack[-2])
0x664: Pop(0)
0x665: Stack[-10] = Stack[-2]
0x666: Return(); Pop(8)

0x667: Stack[-4] = 0
0x668: PushEmpty()
0x669: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x66a: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x66b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x66c: Push((int) 1)
0x66d: IF (Stack[-1] == 0) GOTO 0x684; Pop(1)

0x66e: PushEmpty(string)
0x66f: Stack[-1] = "Neutral"
0x670: Call2 0x6a2

0x671: Pop(1)
0x672: Push((int) 525465)
0x673: @@ SetMessage(Stack[-1])
0x674: Pop(1)
0x675: @@ ClearReplies()
0x676: Pop(0)
0x677: Push((int) 526257)
0x678: Push((int) 27533)
0x679: Push((int) 27531)
0x67a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67b: Pop(3)
0x67c: Push((int) 525466)
0x67d: Push((int) -1)
0x67e: Push((int) 26822)
0x67f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x680: Pop(3)
0x681: GOTO 0x684

0x682: Return(); Pop(0)

0x683: GOTO 0x66c

0x684: PushEmpty(bool)
0x685: Call2 0x12d6

0x686: Pop(0)
0x687: IF (Stack[-1] == 0) GOTO 0x693; Pop(1)

0x688: @ lshWaitForAnimEnd()
0x689: Pop(0)
0x68a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x68b: IF (Stack[-1] == 0) GOTO 0x68d; Pop(1)

0x68c: GOTO 0x692

0x68d: PushEmpty(string)
0x68e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x68f: Call2 0x11e1

0x690: Pop(1)
0x691: GOTO 0x688

0x692: GOTO 0x6a1

0x693: Push("all")
0x694: Push("idle")
0x695: @ PlayAnimation(Stack[-2], Stack[-1])
0x696: Pop(2)
0x697: @ WaitForAnimEnd()
0x698: Pop(0)
0x699: Push( Stack[3 + Tasks[-1].StackPointer] )
0x69a: IF (Stack[-1] == 0) GOTO 0x69c; Pop(1)

0x69b: GOTO 0x6a1

0x69c: Push("all")
0x69d: Push("idle")
0x69e: @ PlayAnimation(Stack[-2], Stack[-1])
0x69f: Pop(2)
0x6a0: GOTO 0x697

0x6a1: Return(); Pop(0)

0x6a2: PushEmpty()
0x6a3: PushEmpty(bool)
0x6a4: Call2 0x12d6

0x6a5: Pop(0)
0x6a6: Pop(1); Push((bool) Stack[-1] == 0)
0x6a7: IF (Stack[-1] == 0) GOTO 0x6a9; Pop(1)

0x6a8: Return(); Pop(0)

0x6a9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x6aa: IF (Stack[-1] == 0) GOTO 0x6ac; Pop(1)

0x6ab: Return(); Pop(0)

0x6ac: PushEmpty(string, bool)
0x6ad: Stack[-2] = Stack[-3]
0x6ae: Push("")
0x6af: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6b0: IF (Stack[-1] == 0) GOTO 0x6b3; Pop(1)

0x6b1: Stack[-1] = (bool) 0
0x6b2: GOTO 0x6b4

0x6b3: Stack[-1] = (bool) 1
0x6b4: Call2 0x11f1

0x6b5: Pop(2)
0x6b6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x6b7: Return(); Pop(0)

0x6b8: PushEmpty()
0x6b9: Push((int) 1)
0x6ba: IF (Stack[-1] == 0) GOTO 0x6f8; Pop(1)

0x6bb: PushEmpty()
0x6bc: Call2 0x120f

0x6bd: Pop(0)
0x6be: Push((int) 26821)
0x6bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6c0: IF (Stack[-1] == 0) GOTO 0x6d5; Pop(1)

0x6c1: PushEmpty(string)
0x6c2: Stack[-1] = "Neutral"
0x6c3: Call2 0x6a2

0x6c4: Pop(1)
0x6c5: Push((int) 525465)
0x6c6: @@ SetMessage(Stack[-1])
0x6c7: Pop(1)
0x6c8: @@ ClearReplies()
0x6c9: Pop(0)
0x6ca: Push((int) 526257)
0x6cb: Push((int) 27533)
0x6cc: Push((int) 27531)
0x6cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ce: Pop(3)
0x6cf: Push((int) 525466)
0x6d0: Push((int) -1)
0x6d1: Push((int) 26822)
0x6d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d3: Pop(3)
0x6d4: Return(); Pop(0)

0x6d5: Push((int) 27533)
0x6d6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d7: IF (Stack[-1] == 0) GOTO 0x6ec; Pop(1)

0x6d8: PushEmpty(string)
0x6d9: Stack[-1] = "Neutral"
0x6da: Call2 0x6a2

0x6db: Pop(1)
0x6dc: Push((int) 526259)
0x6dd: @@ SetMessage(Stack[-1])
0x6de: Pop(1)
0x6df: @@ ClearReplies()
0x6e0: Pop(0)
0x6e1: Push((int) 526260)
0x6e2: Push((int) -1)
0x6e3: Push((int) 27534)
0x6e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e5: Pop(3)
0x6e6: Push((int) 526261)
0x6e7: Push((int) -1)
0x6e8: Push((int) 27535)
0x6e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ea: Pop(3)
0x6eb: Return(); Pop(0)

0x6ec: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x6ed: PushEmpty(bool)
0x6ee: Call2 0x12d6

0x6ef: Pop(0)
0x6f0: IF (Stack[-1] == 0) GOTO 0x6f4; Pop(1)

0x6f1: @ lshStopAnimation()
0x6f2: Pop(0)
0x6f3: GOTO 0x6f6

0x6f4: @ StopAnimation()
0x6f5: Pop(0)
0x6f6: Return(); Pop(0)

0x6f7: GOTO 0x6b9

0x6f8: Return(); Pop(0)

0x6f9: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x6fa: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x6fb: PushEmpty(bool, object, float)
0x6fc: Stack[-2] = Stack[-12]
0x6fd: Stack[-1] = (float) 70.0
0x6fe: Call2 0x1102

0x6ff: Pop(2)
0x700: Pop(1); Push((bool) Stack[-1] == 0)
0x701: IF (Stack[-1] == 0) GOTO 0x704; Pop(1)

0x702: Stack[-10] = (int) -2
0x703: Return(); Pop(8)

0x704: @ CreateDialog(Stack[-4])
0x705: Pop(0)
0x706: PushEmpty(int)
0x707: Call2 0x12d0

0x708: Pop(0)
0x709: @@ SetNPCName(Stack[-1])
0x70a: Pop(1)
0x70b: PushEmpty(int)
0x70c: Call2 0x12ce

0x70d: Pop(0)
0x70e: @@ SetNPCDescription(Stack[-1])
0x70f: Pop(1)
0x710: PushEmpty(string)
0x711: Call2 0x12d2

0x712: Pop(0)
0x713: @@ SetPhoto(Stack[-1])
0x714: Pop(1)
0x715: PushEmpty(string)
0x716: Call2 0x12d4

0x717: Pop(0)
0x718: @@ SetPhoto2(Stack[-1])
0x719: Pop(1)
0x71a: PushEmpty(int)
0x71b: Call2 0x1630

0x71c: Pop(0)
0x71d: @@ SetPlayerName(Stack[-1])
0x71e: Pop(1)
0x71f: Stack[-2] = (int) -1
0x720: @ IsOverrideActive(Stack[-3])
0x721: Pop(0)
0x722: Push(Stack[-3])
0x723: IF (Stack[-1] == 0) GOTO 0x726; Pop(1)

0x724: Stack[-10] = (int) -2
0x725: Return(); Pop(8)

0x726: @ DoDialog(Stack[-4])
0x727: Pop(0)
0x728: PushEmpty(bool, object)
0x729: PushEmpty(object)
0x72a: Call2 0x1216

0x72b: Stack[-2] = Stack[-1]
0x72c: Pop(1)
0x72d: Call2 0x1157

0x72e: Pop(2)
0x72f: PushEmpty(object, object)
0x730: Stack[-2] = Stack[-11]
0x731: Stack[-1] = Stack[-6]
0x732: Push(-2, 4); TaskCall(7)
0x733: Call2 0x74a

0x734: Pop(-2, 4); TaskReturn
0x735: Pop(2)
0x736: @@ IsDialogEnd(Stack[-1])
0x737: Pop(0)
0x738: Pop(0); Push((bool) Stack[-1] == 0)
0x739: IF (Stack[-1] == 0) GOTO 0x73f; Pop(1)

0x73a: @ sync()
0x73b: Pop(0)
0x73c: @@ IsDialogEnd(Stack[-1])
0x73d: Pop(0)
0x73e: GOTO 0x738

0x73f: PushEmpty(object)
0x740: Stack[-1] = Stack[-10]
0x741: Call2 0x1146

0x742: Pop(1)
0x743: @ StopDialog(Stack[-4])
0x744: Pop(0)
0x745: @@ GetReturnValue(Stack[-2])
0x746: Pop(0)
0x747: Stack[-10] = Stack[-2]
0x748: Return(); Pop(8)

0x749: Stack[-4] = 0
0x74a: PushEmpty()
0x74b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x74c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x74d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x74e: Push((int) 1)
0x74f: IF (Stack[-1] == 0) GOTO 0x782; Pop(1)

0x750: PushEmpty(string)
0x751: Stack[-1] = "Fear"
0x752: Call2 0x7a0

0x753: Pop(1)
0x754: Push((int) 526085)
0x755: @@ SetMessage(Stack[-1])
0x756: Pop(1)
0x757: @@ ClearReplies()
0x758: Pop(0)
0x759: PushEmpty(bool)
0x75a: Stack[-1] = (bool) 0
0x75b: PushEmpty(bool)
0x75c: Stack[-1] = (bool) 0
0x75d: PushEmpty(bool, object)
0x75e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x75f: Call2 0x14c9

0x760: Pop(1)
0x761: IF (Stack[-1] == 0) GOTO 0x768; Pop(1)

0x762: PushEmpty(bool, object)
0x763: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x764: Call2 0x14d5

0x765: Pop(1)
0x766: IF (Stack[-1] == 0) GOTO 0x768; Pop(1)

0x767: Stack[-1] = (bool) 1
0x768: IF (Stack[-1] == 0) GOTO 0x76f; Pop(1)

0x769: PushEmpty(bool, object)
0x76a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x76b: Call2 0x14e1

0x76c: Pop(1)
0x76d: IF (Stack[-1] == 0) GOTO 0x76f; Pop(1)

0x76e: Stack[-1] = (bool) 1
0x76f: IF (Stack[-1] == 0) GOTO 0x775; Pop(1)

0x770: Push((int) 526086)
0x771: Push((int) 27373)
0x772: Push((int) 27372)
0x773: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x774: Pop(3)
0x775: Push((int) 526089)
0x776: Push((int) -1)
0x777: Push((int) 27375)
0x778: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x779: Pop(3)
0x77a: Push((int) 528861)
0x77b: Push((int) -1)
0x77c: Push((int) 30283)
0x77d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77e: Pop(3)
0x77f: GOTO 0x782

0x780: Return(); Pop(0)

0x781: GOTO 0x74e

0x782: PushEmpty(bool)
0x783: Call2 0x12d6

0x784: Pop(0)
0x785: IF (Stack[-1] == 0) GOTO 0x791; Pop(1)

0x786: @ lshWaitForAnimEnd()
0x787: Pop(0)
0x788: Push( Stack[3 + Tasks[-1].StackPointer] )
0x789: IF (Stack[-1] == 0) GOTO 0x78b; Pop(1)

0x78a: GOTO 0x790

0x78b: PushEmpty(string)
0x78c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x78d: Call2 0x11e1

0x78e: Pop(1)
0x78f: GOTO 0x786

0x790: GOTO 0x79f

0x791: Push("all")
0x792: Push("idle")
0x793: @ PlayAnimation(Stack[-2], Stack[-1])
0x794: Pop(2)
0x795: @ WaitForAnimEnd()
0x796: Pop(0)
0x797: Push( Stack[3 + Tasks[-1].StackPointer] )
0x798: IF (Stack[-1] == 0) GOTO 0x79a; Pop(1)

0x799: GOTO 0x79f

0x79a: Push("all")
0x79b: Push("idle")
0x79c: @ PlayAnimation(Stack[-2], Stack[-1])
0x79d: Pop(2)
0x79e: GOTO 0x795

0x79f: Return(); Pop(0)

0x7a0: PushEmpty()
0x7a1: PushEmpty(bool)
0x7a2: Call2 0x12d6

0x7a3: Pop(0)
0x7a4: Pop(1); Push((bool) Stack[-1] == 0)
0x7a5: IF (Stack[-1] == 0) GOTO 0x7a7; Pop(1)

0x7a6: Return(); Pop(0)

0x7a7: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x7a8: IF (Stack[-1] == 0) GOTO 0x7aa; Pop(1)

0x7a9: Return(); Pop(0)

0x7aa: PushEmpty(string, bool)
0x7ab: Stack[-2] = Stack[-3]
0x7ac: Push("")
0x7ad: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7ae: IF (Stack[-1] == 0) GOTO 0x7b1; Pop(1)

0x7af: Stack[-1] = (bool) 0
0x7b0: GOTO 0x7b2

0x7b1: Stack[-1] = (bool) 1
0x7b2: Call2 0x11f1

0x7b3: Pop(2)
0x7b4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x7b5: Return(); Pop(0)

0x7b6: PushEmpty()
0x7b7: Push((int) 1)
0x7b8: IF (Stack[-1] == 0) GOTO 0x83c; Pop(1)

0x7b9: PushEmpty()
0x7ba: Call2 0x120f

0x7bb: Pop(0)
0x7bc: Push((int) 27372)
0x7bd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7be: IF (Stack[-1] == 0) GOTO 0x7c4; Pop(1)

0x7bf: PushEmpty(object, object)
0x7c0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7c1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7c2: Call2 0x13b5

0x7c3: Pop(2)
0x7c4: Push((int) 27374)
0x7c5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7c6: IF (Stack[-1] == 0) GOTO 0x7cc; Pop(1)

0x7c7: PushEmpty(object, object)
0x7c8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7c9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7ca: Call2 0x13bb

0x7cb: Pop(2)
0x7cc: Push((int) 43967)
0x7cd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7ce: IF (Stack[-1] == 0) GOTO 0x7d4; Pop(1)

0x7cf: PushEmpty(object, object)
0x7d0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7d1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7d2: Call2 0x13bb

0x7d3: Pop(2)
0x7d4: Push((int) 27371)
0x7d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7d6: IF (Stack[-1] == 0) GOTO 0x807; Pop(1)

0x7d7: PushEmpty(string)
0x7d8: Stack[-1] = "Fear"
0x7d9: Call2 0x7a0

0x7da: Pop(1)
0x7db: Push((int) 526085)
0x7dc: @@ SetMessage(Stack[-1])
0x7dd: Pop(1)
0x7de: @@ ClearReplies()
0x7df: Pop(0)
0x7e0: PushEmpty(bool)
0x7e1: Stack[-1] = (bool) 0
0x7e2: PushEmpty(bool)
0x7e3: Stack[-1] = (bool) 0
0x7e4: PushEmpty(bool, object)
0x7e5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7e6: Call2 0x14c9

0x7e7: Pop(1)
0x7e8: IF (Stack[-1] == 0) GOTO 0x7ef; Pop(1)

0x7e9: PushEmpty(bool, object)
0x7ea: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7eb: Call2 0x14d5

0x7ec: Pop(1)
0x7ed: IF (Stack[-1] == 0) GOTO 0x7ef; Pop(1)

0x7ee: Stack[-1] = (bool) 1
0x7ef: IF (Stack[-1] == 0) GOTO 0x7f6; Pop(1)

0x7f0: PushEmpty(bool, object)
0x7f1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7f2: Call2 0x14e1

0x7f3: Pop(1)
0x7f4: IF (Stack[-1] == 0) GOTO 0x7f6; Pop(1)

0x7f5: Stack[-1] = (bool) 1
0x7f6: IF (Stack[-1] == 0) GOTO 0x7fc; Pop(1)

0x7f7: Push((int) 526086)
0x7f8: Push((int) 27373)
0x7f9: Push((int) 27372)
0x7fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7fb: Pop(3)
0x7fc: Push((int) 526089)
0x7fd: Push((int) -1)
0x7fe: Push((int) 27375)
0x7ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x800: Pop(3)
0x801: Push((int) 528861)
0x802: Push((int) -1)
0x803: Push((int) 30283)
0x804: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x805: Pop(3)
0x806: Return(); Pop(0)

0x807: Push((int) 27373)
0x808: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x809: IF (Stack[-1] == 0) GOTO 0x819; Pop(1)

0x80a: PushEmpty(string)
0x80b: Stack[-1] = "Fear"
0x80c: Call2 0x7a0

0x80d: Pop(1)
0x80e: Push((int) 526087)
0x80f: @@ SetMessage(Stack[-1])
0x810: Pop(1)
0x811: @@ ClearReplies()
0x812: Pop(0)
0x813: Push((int) 528862)
0x814: Push((int) 30285)
0x815: Push((int) 30284)
0x816: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x817: Pop(3)
0x818: Return(); Pop(0)

0x819: Push((int) 30285)
0x81a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x81b: IF (Stack[-1] == 0) GOTO 0x830; Pop(1)

0x81c: PushEmpty(string)
0x81d: Stack[-1] = "Dream"
0x81e: Call2 0x7a0

0x81f: Pop(1)
0x820: Push((int) 528863)
0x821: @@ SetMessage(Stack[-1])
0x822: Pop(1)
0x823: @@ ClearReplies()
0x824: Pop(0)
0x825: Push((int) 526088)
0x826: Push((int) -1)
0x827: Push((int) 27374)
0x828: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x829: Pop(3)
0x82a: Push((int) 541764)
0x82b: Push((int) -1)
0x82c: Push((int) 43967)
0x82d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82e: Pop(3)
0x82f: Return(); Pop(0)

0x830: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x831: PushEmpty(bool)
0x832: Call2 0x12d6

0x833: Pop(0)
0x834: IF (Stack[-1] == 0) GOTO 0x838; Pop(1)

0x835: @ lshStopAnimation()
0x836: Pop(0)
0x837: GOTO 0x83a

0x838: @ StopAnimation()
0x839: Pop(0)
0x83a: Return(); Pop(0)

0x83b: GOTO 0x7b7

0x83c: Return(); Pop(0)

0x83d: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x83e: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x83f: PushEmpty(bool, object, float)
0x840: Stack[-2] = Stack[-12]
0x841: Stack[-1] = (float) 70.0
0x842: Call2 0x1102

0x843: Pop(2)
0x844: Pop(1); Push((bool) Stack[-1] == 0)
0x845: IF (Stack[-1] == 0) GOTO 0x848; Pop(1)

0x846: Stack[-10] = (int) -2
0x847: Return(); Pop(8)

0x848: @ CreateDialog(Stack[-4])
0x849: Pop(0)
0x84a: PushEmpty(int)
0x84b: Call2 0x12d0

0x84c: Pop(0)
0x84d: @@ SetNPCName(Stack[-1])
0x84e: Pop(1)
0x84f: PushEmpty(int)
0x850: Call2 0x12ce

0x851: Pop(0)
0x852: @@ SetNPCDescription(Stack[-1])
0x853: Pop(1)
0x854: PushEmpty(string)
0x855: Call2 0x12d2

0x856: Pop(0)
0x857: @@ SetPhoto(Stack[-1])
0x858: Pop(1)
0x859: PushEmpty(string)
0x85a: Call2 0x12d4

0x85b: Pop(0)
0x85c: @@ SetPhoto2(Stack[-1])
0x85d: Pop(1)
0x85e: PushEmpty(int)
0x85f: Call2 0x1630

0x860: Pop(0)
0x861: @@ SetPlayerName(Stack[-1])
0x862: Pop(1)
0x863: Stack[-2] = (int) -1
0x864: @ IsOverrideActive(Stack[-3])
0x865: Pop(0)
0x866: Push(Stack[-3])
0x867: IF (Stack[-1] == 0) GOTO 0x86a; Pop(1)

0x868: Stack[-10] = (int) -2
0x869: Return(); Pop(8)

0x86a: @ DoDialog(Stack[-4])
0x86b: Pop(0)
0x86c: PushEmpty(bool, object)
0x86d: PushEmpty(object)
0x86e: Call2 0x1216

0x86f: Stack[-2] = Stack[-1]
0x870: Pop(1)
0x871: Call2 0x1157

0x872: Pop(2)
0x873: PushEmpty(object, object)
0x874: Stack[-2] = Stack[-11]
0x875: Stack[-1] = Stack[-6]
0x876: Push(-2, 4); TaskCall(9)
0x877: Call2 0x88e

0x878: Pop(-2, 4); TaskReturn
0x879: Pop(2)
0x87a: @@ IsDialogEnd(Stack[-1])
0x87b: Pop(0)
0x87c: Pop(0); Push((bool) Stack[-1] == 0)
0x87d: IF (Stack[-1] == 0) GOTO 0x883; Pop(1)

0x87e: @ sync()
0x87f: Pop(0)
0x880: @@ IsDialogEnd(Stack[-1])
0x881: Pop(0)
0x882: GOTO 0x87c

0x883: PushEmpty(object)
0x884: Stack[-1] = Stack[-10]
0x885: Call2 0x1146

0x886: Pop(1)
0x887: @ StopDialog(Stack[-4])
0x888: Pop(0)
0x889: @@ GetReturnValue(Stack[-2])
0x88a: Pop(0)
0x88b: Stack[-10] = Stack[-2]
0x88c: Return(); Pop(8)

0x88d: Stack[-4] = 0
0x88e: PushEmpty()
0x88f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x890: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x891: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x892: Push((int) 1)
0x893: IF (Stack[-1] == 0) GOTO 0x8b8; Pop(1)

0x894: PushEmpty(string)
0x895: Stack[-1] = "Neutral"
0x896: Call2 0x8d6

0x897: Pop(1)
0x898: Push((int) 527548)
0x899: @@ SetMessage(Stack[-1])
0x89a: Pop(1)
0x89b: @@ ClearReplies()
0x89c: Pop(0)
0x89d: PushEmpty(bool)
0x89e: Stack[-1] = (bool) 0
0x89f: PushEmpty(bool, object)
0x8a0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8a1: Call2 0x14ed

0x8a2: Pop(1)
0x8a3: IF (Stack[-1] == 0) GOTO 0x8aa; Pop(1)

0x8a4: PushEmpty(bool, object)
0x8a5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8a6: Call2 0x14f9

0x8a7: Pop(1)
0x8a8: IF (Stack[-1] == 0) GOTO 0x8aa; Pop(1)

0x8a9: Stack[-1] = (bool) 1
0x8aa: IF (Stack[-1] == 0) GOTO 0x8b0; Pop(1)

0x8ab: Push((int) 527551)
0x8ac: Push((int) 28893)
0x8ad: Push((int) 28892)
0x8ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8af: Pop(3)
0x8b0: Push((int) 527550)
0x8b1: Push((int) -1)
0x8b2: Push((int) 28891)
0x8b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b4: Pop(3)
0x8b5: GOTO 0x8b8

0x8b6: Return(); Pop(0)

0x8b7: GOTO 0x892

0x8b8: PushEmpty(bool)
0x8b9: Call2 0x12d6

0x8ba: Pop(0)
0x8bb: IF (Stack[-1] == 0) GOTO 0x8c7; Pop(1)

0x8bc: @ lshWaitForAnimEnd()
0x8bd: Pop(0)
0x8be: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8bf: IF (Stack[-1] == 0) GOTO 0x8c1; Pop(1)

0x8c0: GOTO 0x8c6

0x8c1: PushEmpty(string)
0x8c2: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8c3: Call2 0x11e1

0x8c4: Pop(1)
0x8c5: GOTO 0x8bc

0x8c6: GOTO 0x8d5

0x8c7: Push("all")
0x8c8: Push("idle")
0x8c9: @ PlayAnimation(Stack[-2], Stack[-1])
0x8ca: Pop(2)
0x8cb: @ WaitForAnimEnd()
0x8cc: Pop(0)
0x8cd: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8ce: IF (Stack[-1] == 0) GOTO 0x8d0; Pop(1)

0x8cf: GOTO 0x8d5

0x8d0: Push("all")
0x8d1: Push("idle")
0x8d2: @ PlayAnimation(Stack[-2], Stack[-1])
0x8d3: Pop(2)
0x8d4: GOTO 0x8cb

0x8d5: Return(); Pop(0)

0x8d6: PushEmpty()
0x8d7: PushEmpty(bool)
0x8d8: Call2 0x12d6

0x8d9: Pop(0)
0x8da: Pop(1); Push((bool) Stack[-1] == 0)
0x8db: IF (Stack[-1] == 0) GOTO 0x8dd; Pop(1)

0x8dc: Return(); Pop(0)

0x8dd: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8de: IF (Stack[-1] == 0) GOTO 0x8e0; Pop(1)

0x8df: Return(); Pop(0)

0x8e0: PushEmpty(string, bool)
0x8e1: Stack[-2] = Stack[-3]
0x8e2: Push("")
0x8e3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8e4: IF (Stack[-1] == 0) GOTO 0x8e7; Pop(1)

0x8e5: Stack[-1] = (bool) 0
0x8e6: GOTO 0x8e8

0x8e7: Stack[-1] = (bool) 1
0x8e8: Call2 0x11f1

0x8e9: Pop(2)
0x8ea: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x8eb: Return(); Pop(0)

0x8ec: PushEmpty()
0x8ed: Push((int) 1)
0x8ee: IF (Stack[-1] == 0) GOTO 0x9b6; Pop(1)

0x8ef: PushEmpty()
0x8f0: Call2 0x120f

0x8f1: Pop(0)
0x8f2: Push((int) 28892)
0x8f3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8f4: IF (Stack[-1] == 0) GOTO 0x8fa; Pop(1)

0x8f5: PushEmpty(object, object)
0x8f6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8f7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8f8: Call2 0x13f3

0x8f9: Pop(2)
0x8fa: Push((int) 28904)
0x8fb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8fc: IF (Stack[-1] == 0) GOTO 0x902; Pop(1)

0x8fd: PushEmpty(object, object)
0x8fe: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8ff: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x900: Call2 0x13c0

0x901: Pop(2)
0x902: Push((int) 28889)
0x903: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x904: IF (Stack[-1] == 0) GOTO 0x927; Pop(1)

0x905: PushEmpty(string)
0x906: Stack[-1] = "Neutral"
0x907: Call2 0x8d6

0x908: Pop(1)
0x909: Push((int) 527548)
0x90a: @@ SetMessage(Stack[-1])
0x90b: Pop(1)
0x90c: @@ ClearReplies()
0x90d: Pop(0)
0x90e: PushEmpty(bool)
0x90f: Stack[-1] = (bool) 0
0x910: PushEmpty(bool, object)
0x911: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x912: Call2 0x14ed

0x913: Pop(1)
0x914: IF (Stack[-1] == 0) GOTO 0x91b; Pop(1)

0x915: PushEmpty(bool, object)
0x916: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x917: Call2 0x14f9

0x918: Pop(1)
0x919: IF (Stack[-1] == 0) GOTO 0x91b; Pop(1)

0x91a: Stack[-1] = (bool) 1
0x91b: IF (Stack[-1] == 0) GOTO 0x921; Pop(1)

0x91c: Push((int) 527551)
0x91d: Push((int) 28893)
0x91e: Push((int) 28892)
0x91f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x920: Pop(3)
0x921: Push((int) 527550)
0x922: Push((int) -1)
0x923: Push((int) 28891)
0x924: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x925: Pop(3)
0x926: Return(); Pop(0)

0x927: Push((int) 28893)
0x928: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x929: IF (Stack[-1] == 0) GOTO 0x93e; Pop(1)

0x92a: PushEmpty(string)
0x92b: Stack[-1] = "Dream"
0x92c: Call2 0x8d6

0x92d: Pop(1)
0x92e: Push((int) 527552)
0x92f: @@ SetMessage(Stack[-1])
0x930: Pop(1)
0x931: @@ ClearReplies()
0x932: Pop(0)
0x933: Push((int) 527553)
0x934: Push((int) 28895)
0x935: Push((int) 28894)
0x936: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x937: Pop(3)
0x938: Push((int) 527564)
0x939: Push((int) 28906)
0x93a: Push((int) 28905)
0x93b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x93c: Pop(3)
0x93d: Return(); Pop(0)

0x93e: Push((int) 28906)
0x93f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x940: IF (Stack[-1] == 0) GOTO 0x950; Pop(1)

0x941: PushEmpty(string)
0x942: Stack[-1] = "Dream"
0x943: Call2 0x8d6

0x944: Pop(1)
0x945: Push((int) 527565)
0x946: @@ SetMessage(Stack[-1])
0x947: Pop(1)
0x948: @@ ClearReplies()
0x949: Pop(0)
0x94a: Push((int) 527566)
0x94b: Push((int) 28897)
0x94c: Push((int) 28907)
0x94d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94e: Pop(3)
0x94f: Return(); Pop(0)

0x950: Push((int) 28895)
0x951: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x952: IF (Stack[-1] == 0) GOTO 0x962; Pop(1)

0x953: PushEmpty(string)
0x954: Stack[-1] = "Rage"
0x955: Call2 0x8d6

0x956: Pop(1)
0x957: Push((int) 527554)
0x958: @@ SetMessage(Stack[-1])
0x959: Pop(1)
0x95a: @@ ClearReplies()
0x95b: Pop(0)
0x95c: Push((int) 527555)
0x95d: Push((int) 28897)
0x95e: Push((int) 28896)
0x95f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x960: Pop(3)
0x961: Return(); Pop(0)

0x962: Push((int) 28897)
0x963: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x964: IF (Stack[-1] == 0) GOTO 0x974; Pop(1)

0x965: PushEmpty(string)
0x966: Stack[-1] = "Neutral"
0x967: Call2 0x8d6

0x968: Pop(1)
0x969: Push((int) 527556)
0x96a: @@ SetMessage(Stack[-1])
0x96b: Pop(1)
0x96c: @@ ClearReplies()
0x96d: Pop(0)
0x96e: Push((int) 527557)
0x96f: Push((int) 28899)
0x970: Push((int) 28898)
0x971: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x972: Pop(3)
0x973: Return(); Pop(0)

0x974: Push((int) 28899)
0x975: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x976: IF (Stack[-1] == 0) GOTO 0x986; Pop(1)

0x977: PushEmpty(string)
0x978: Stack[-1] = "Neutral"
0x979: Call2 0x8d6

0x97a: Pop(1)
0x97b: Push((int) 527558)
0x97c: @@ SetMessage(Stack[-1])
0x97d: Pop(1)
0x97e: @@ ClearReplies()
0x97f: Pop(0)
0x980: Push((int) 527559)
0x981: Push((int) 28901)
0x982: Push((int) 28900)
0x983: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x984: Pop(3)
0x985: Return(); Pop(0)

0x986: Push((int) 28901)
0x987: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x988: IF (Stack[-1] == 0) GOTO 0x998; Pop(1)

0x989: PushEmpty(string)
0x98a: Stack[-1] = "Adoration"
0x98b: Call2 0x8d6

0x98c: Pop(1)
0x98d: Push((int) 527560)
0x98e: @@ SetMessage(Stack[-1])
0x98f: Pop(1)
0x990: @@ ClearReplies()
0x991: Pop(0)
0x992: Push((int) 527561)
0x993: Push((int) 28903)
0x994: Push((int) 28902)
0x995: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x996: Pop(3)
0x997: Return(); Pop(0)

0x998: Push((int) 28903)
0x999: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x99a: IF (Stack[-1] == 0) GOTO 0x9aa; Pop(1)

0x99b: PushEmpty(string)
0x99c: Stack[-1] = "Adoration"
0x99d: Call2 0x8d6

0x99e: Pop(1)
0x99f: Push((int) 527562)
0x9a0: @@ SetMessage(Stack[-1])
0x9a1: Pop(1)
0x9a2: @@ ClearReplies()
0x9a3: Pop(0)
0x9a4: Push((int) 527563)
0x9a5: Push((int) -1)
0x9a6: Push((int) 28904)
0x9a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a8: Pop(3)
0x9a9: Return(); Pop(0)

0x9aa: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x9ab: PushEmpty(bool)
0x9ac: Call2 0x12d6

0x9ad: Pop(0)
0x9ae: IF (Stack[-1] == 0) GOTO 0x9b2; Pop(1)

0x9af: @ lshStopAnimation()
0x9b0: Pop(0)
0x9b1: GOTO 0x9b4

0x9b2: @ StopAnimation()
0x9b3: Pop(0)
0x9b4: Return(); Pop(0)

0x9b5: GOTO 0x8ed

0x9b6: Return(); Pop(0)

0x9b7: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x9b8: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x9b9: PushEmpty(bool, object, float)
0x9ba: Stack[-2] = Stack[-12]
0x9bb: Stack[-1] = (float) 70.0
0x9bc: Call2 0x1102

0x9bd: Pop(2)
0x9be: Pop(1); Push((bool) Stack[-1] == 0)
0x9bf: IF (Stack[-1] == 0) GOTO 0x9c2; Pop(1)

0x9c0: Stack[-10] = (int) -2
0x9c1: Return(); Pop(8)

0x9c2: @ CreateDialog(Stack[-4])
0x9c3: Pop(0)
0x9c4: PushEmpty(int)
0x9c5: Call2 0x12d0

0x9c6: Pop(0)
0x9c7: @@ SetNPCName(Stack[-1])
0x9c8: Pop(1)
0x9c9: PushEmpty(int)
0x9ca: Call2 0x12ce

0x9cb: Pop(0)
0x9cc: @@ SetNPCDescription(Stack[-1])
0x9cd: Pop(1)
0x9ce: PushEmpty(string)
0x9cf: Call2 0x12d2

0x9d0: Pop(0)
0x9d1: @@ SetPhoto(Stack[-1])
0x9d2: Pop(1)
0x9d3: PushEmpty(string)
0x9d4: Call2 0x12d4

0x9d5: Pop(0)
0x9d6: @@ SetPhoto2(Stack[-1])
0x9d7: Pop(1)
0x9d8: PushEmpty(int)
0x9d9: Call2 0x1630

0x9da: Pop(0)
0x9db: @@ SetPlayerName(Stack[-1])
0x9dc: Pop(1)
0x9dd: Stack[-2] = (int) -1
0x9de: @ IsOverrideActive(Stack[-3])
0x9df: Pop(0)
0x9e0: Push(Stack[-3])
0x9e1: IF (Stack[-1] == 0) GOTO 0x9e4; Pop(1)

0x9e2: Stack[-10] = (int) -2
0x9e3: Return(); Pop(8)

0x9e4: @ DoDialog(Stack[-4])
0x9e5: Pop(0)
0x9e6: PushEmpty(bool, object)
0x9e7: PushEmpty(object)
0x9e8: Call2 0x1216

0x9e9: Stack[-2] = Stack[-1]
0x9ea: Pop(1)
0x9eb: Call2 0x1157

0x9ec: Pop(2)
0x9ed: PushEmpty(object, object)
0x9ee: Stack[-2] = Stack[-11]
0x9ef: Stack[-1] = Stack[-6]
0x9f0: Push(-2, 4); TaskCall(11)
0x9f1: Call2 0xa08

0x9f2: Pop(-2, 4); TaskReturn
0x9f3: Pop(2)
0x9f4: @@ IsDialogEnd(Stack[-1])
0x9f5: Pop(0)
0x9f6: Pop(0); Push((bool) Stack[-1] == 0)
0x9f7: IF (Stack[-1] == 0) GOTO 0x9fd; Pop(1)

0x9f8: @ sync()
0x9f9: Pop(0)
0x9fa: @@ IsDialogEnd(Stack[-1])
0x9fb: Pop(0)
0x9fc: GOTO 0x9f6

0x9fd: PushEmpty(object)
0x9fe: Stack[-1] = Stack[-10]
0x9ff: Call2 0x1146

0xa00: Pop(1)
0xa01: @ StopDialog(Stack[-4])
0xa02: Pop(0)
0xa03: @@ GetReturnValue(Stack[-2])
0xa04: Pop(0)
0xa05: Stack[-10] = Stack[-2]
0xa06: Return(); Pop(8)

0xa07: Stack[-4] = 0
0xa08: PushEmpty()
0xa09: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xa0a: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xa0b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xa0c: Push((int) 1)
0xa0d: IF (Stack[-1] == 0) GOTO 0xaa4; Pop(1)

0xa0e: PushEmpty(bool)
0xa0f: Stack[-1] = (bool) 0
0xa10: PushEmpty(bool, object)
0xa11: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa12: Call2 0x1415

0xa13: Pop(1)
0xa14: IF (Stack[-1] == 0) GOTO 0xa1b; Pop(1)

0xa15: PushEmpty(bool, object)
0xa16: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa17: Call2 0x1421

0xa18: Pop(1)
0xa19: IF (Stack[-1] == 0) GOTO 0xa1b; Pop(1)

0xa1a: Stack[-1] = (bool) 1
0xa1b: IF (Stack[-1] == 0) GOTO 0xa30; Pop(1)

0xa1c: PushEmpty(object, object)
0xa1d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa1e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa1f: Call2 0x12ef

0xa20: Pop(2)
0xa21: PushEmpty(string)
0xa22: Stack[-1] = "Fear"
0xa23: Call2 0xac2

0xa24: Pop(1)
0xa25: Push((int) 524690)
0xa26: @@ SetMessage(Stack[-1])
0xa27: Pop(1)
0xa28: @@ ClearReplies()
0xa29: Pop(0)
0xa2a: Push((int) 524691)
0xa2b: Push((int) 28130)
0xa2c: Push((int) 26030)
0xa2d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa2e: Pop(3)
0xa2f: GOTO 0xaa4

0xa30: PushEmpty(bool)
0xa31: Stack[-1] = (bool) 0
0xa32: PushEmpty(bool, object)
0xa33: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa34: Call2 0x142d

0xa35: Pop(1)
0xa36: IF (Stack[-1] == 0) GOTO 0xa3d; Pop(1)

0xa37: PushEmpty(bool, object)
0xa38: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa39: Call2 0x1439

0xa3a: Pop(1)
0xa3b: IF (Stack[-1] == 0) GOTO 0xa3d; Pop(1)

0xa3c: Stack[-1] = (bool) 1
0xa3d: IF (Stack[-1] == 0) GOTO 0xa57; Pop(1)

0xa3e: PushEmpty(object, object)
0xa3f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa40: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa41: Call2 0x12f5

0xa42: Pop(2)
0xa43: PushEmpty(string)
0xa44: Stack[-1] = "Neutral"
0xa45: Call2 0xac2

0xa46: Pop(1)
0xa47: Push((int) 524707)
0xa48: @@ SetMessage(Stack[-1])
0xa49: Pop(1)
0xa4a: @@ ClearReplies()
0xa4b: Pop(0)
0xa4c: Push((int) 524708)
0xa4d: Push((int) 28139)
0xa4e: Push((int) 26047)
0xa4f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa50: Pop(3)
0xa51: Push((int) 542053)
0xa52: Push((int) 28139)
0xa53: Push((int) 44336)
0xa54: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa55: Pop(3)
0xa56: GOTO 0xaa4

0xa57: PushEmpty(bool, object)
0xa58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa59: Call2 0x1445

0xa5a: Pop(1)
0xa5b: IF (Stack[-1] == 0) GOTO 0xa75; Pop(1)

0xa5c: PushEmpty(object, object)
0xa5d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa5e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa5f: Call2 0x12fb

0xa60: Pop(2)
0xa61: PushEmpty(string)
0xa62: Stack[-1] = "Fear"
0xa63: Call2 0xac2

0xa64: Pop(1)
0xa65: Push((int) 524780)
0xa66: @@ SetMessage(Stack[-1])
0xa67: Pop(1)
0xa68: @@ ClearReplies()
0xa69: Pop(0)
0xa6a: Push((int) 526860)
0xa6b: Push((int) 28146)
0xa6c: Push((int) 28145)
0xa6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa6e: Pop(3)
0xa6f: Push((int) 542054)
0xa70: Push((int) 28146)
0xa71: Push((int) 44338)
0xa72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa73: Pop(3)
0xa74: GOTO 0xaa4

0xa75: PushEmpty(string)
0xa76: Stack[-1] = "Dream"
0xa77: Call2 0xac2

0xa78: Pop(1)
0xa79: Push((int) 524709)
0xa7a: @@ SetMessage(Stack[-1])
0xa7b: Pop(1)
0xa7c: @@ ClearReplies()
0xa7d: Pop(0)
0xa7e: PushEmpty(bool)
0xa7f: Stack[-1] = (bool) 0
0xa80: PushEmpty(bool, object)
0xa81: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa82: Call2 0x1451

0xa83: Pop(1)
0xa84: IF (Stack[-1] == 0) GOTO 0xa8c; Pop(1)

0xa85: PushEmpty(bool, object)
0xa86: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa87: Call2 0x1445

0xa88: Pop(1)
0xa89: Pop(1); Push((bool) Stack[-1] == 0)
0xa8a: IF (Stack[-1] == 0) GOTO 0xa8c; Pop(1)

0xa8b: Stack[-1] = (bool) 1
0xa8c: IF (Stack[-1] == 0) GOTO 0xa92; Pop(1)

0xa8d: Push((int) 524787)
0xa8e: Push((int) 26103)
0xa8f: Push((int) 26102)
0xa90: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa91: Pop(3)
0xa92: PushEmpty(bool, object)
0xa93: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa94: Call2 0x145d

0xa95: Pop(1)
0xa96: IF (Stack[-1] == 0) GOTO 0xa9c; Pop(1)

0xa97: Push((int) 524796)
0xa98: Push((int) 28156)
0xa99: Push((int) 26111)
0xa9a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa9b: Pop(3)
0xa9c: Push((int) 524710)
0xa9d: Push((int) -1)
0xa9e: Push((int) 26049)
0xa9f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa0: Pop(3)
0xaa1: GOTO 0xaa4

0xaa2: Return(); Pop(0)

0xaa3: GOTO 0xa0c

0xaa4: PushEmpty(bool)
0xaa5: Call2 0x12d6

0xaa6: Pop(0)
0xaa7: IF (Stack[-1] == 0) GOTO 0xab3; Pop(1)

0xaa8: @ lshWaitForAnimEnd()
0xaa9: Pop(0)
0xaaa: Push( Stack[3 + Tasks[-1].StackPointer] )
0xaab: IF (Stack[-1] == 0) GOTO 0xaad; Pop(1)

0xaac: GOTO 0xab2

0xaad: PushEmpty(string)
0xaae: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xaaf: Call2 0x11e1

0xab0: Pop(1)
0xab1: GOTO 0xaa8

0xab2: GOTO 0xac1

0xab3: Push("all")
0xab4: Push("idle")
0xab5: @ PlayAnimation(Stack[-2], Stack[-1])
0xab6: Pop(2)
0xab7: @ WaitForAnimEnd()
0xab8: Pop(0)
0xab9: Push( Stack[3 + Tasks[-1].StackPointer] )
0xaba: IF (Stack[-1] == 0) GOTO 0xabc; Pop(1)

0xabb: GOTO 0xac1

0xabc: Push("all")
0xabd: Push("idle")
0xabe: @ PlayAnimation(Stack[-2], Stack[-1])
0xabf: Pop(2)
0xac0: GOTO 0xab7

0xac1: Return(); Pop(0)

0xac2: PushEmpty()
0xac3: PushEmpty(bool)
0xac4: Call2 0x12d6

0xac5: Pop(0)
0xac6: Pop(1); Push((bool) Stack[-1] == 0)
0xac7: IF (Stack[-1] == 0) GOTO 0xac9; Pop(1)

0xac8: Return(); Pop(0)

0xac9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xaca: IF (Stack[-1] == 0) GOTO 0xacc; Pop(1)

0xacb: Return(); Pop(0)

0xacc: PushEmpty(string, bool)
0xacd: Stack[-2] = Stack[-3]
0xace: Push("")
0xacf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xad0: IF (Stack[-1] == 0) GOTO 0xad3; Pop(1)

0xad1: Stack[-1] = (bool) 0
0xad2: GOTO 0xad4

0xad3: Stack[-1] = (bool) 1
0xad4: Call2 0x11f1

0xad5: Pop(2)
0xad6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xad7: Return(); Pop(0)

0xad8: PushEmpty()
0xad9: Push((int) 1)
0xada: IF (Stack[-1] == 0) GOTO 0xd83; Pop(1)

0xadb: PushEmpty()
0xadc: Call2 0x120f

0xadd: Pop(0)
0xade: Push((int) 26100)
0xadf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xae0: IF (Stack[-1] == 0) GOTO 0xaeb; Pop(1)

0xae1: PushEmpty(object, object)
0xae2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xae3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xae4: Call2 0x1301

0xae5: Pop(2)
0xae6: PushEmpty(object, object)
0xae7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xae8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xae9: Call2 0x12d8

0xaea: Pop(2)
0xaeb: Push((int) 26104)
0xaec: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaed: IF (Stack[-1] == 0) GOTO 0xaf8; Pop(1)

0xaee: PushEmpty(object, object)
0xaef: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaf0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xaf1: Call2 0x1301

0xaf2: Pop(2)
0xaf3: PushEmpty(object, object)
0xaf4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaf5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xaf6: Call2 0x12d8

0xaf7: Pop(2)
0xaf8: Push((int) 44350)
0xaf9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xafa: IF (Stack[-1] == 0) GOTO 0xb05; Pop(1)

0xafb: PushEmpty(object, object)
0xafc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xafd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xafe: Call2 0x131b

0xaff: Pop(2)
0xb00: PushEmpty(object, object)
0xb01: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb02: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb03: Call2 0x12e8

0xb04: Pop(2)
0xb05: Push((int) 26113)
0xb06: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb07: IF (Stack[-1] == 0) GOTO 0xb17; Pop(1)

0xb08: PushEmpty(object, object)
0xb09: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb0a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb0b: Call2 0x131b

0xb0c: Pop(2)
0xb0d: PushEmpty(object, object)
0xb0e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb0f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb10: Call2 0x1405

0xb11: Pop(2)
0xb12: PushEmpty(object, object)
0xb13: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb14: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb15: Call2 0x13f9

0xb16: Pop(2)
0xb17: Push((int) 26029)
0xb18: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb19: IF (Stack[-1] == 0) GOTO 0xbae; Pop(1)

0xb1a: PushEmpty(bool)
0xb1b: Stack[-1] = (bool) 0
0xb1c: PushEmpty(bool, object)
0xb1d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb1e: Call2 0x1415

0xb1f: Pop(1)
0xb20: IF (Stack[-1] == 0) GOTO 0xb27; Pop(1)

0xb21: PushEmpty(bool, object)
0xb22: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb23: Call2 0x1421

0xb24: Pop(1)
0xb25: IF (Stack[-1] == 0) GOTO 0xb27; Pop(1)

0xb26: Stack[-1] = (bool) 1
0xb27: IF (Stack[-1] == 0) GOTO 0xb3c; Pop(1)

0xb28: PushEmpty(object, object)
0xb29: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb2a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb2b: Call2 0x12ef

0xb2c: Pop(2)
0xb2d: PushEmpty(string)
0xb2e: Stack[-1] = "Fear"
0xb2f: Call2 0xac2

0xb30: Pop(1)
0xb31: Push((int) 524690)
0xb32: @@ SetMessage(Stack[-1])
0xb33: Pop(1)
0xb34: @@ ClearReplies()
0xb35: Pop(0)
0xb36: Push((int) 524691)
0xb37: Push((int) 28130)
0xb38: Push((int) 26030)
0xb39: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb3a: Pop(3)
0xb3b: Return(); Pop(0)

0xb3c: PushEmpty(bool)
0xb3d: Stack[-1] = (bool) 0
0xb3e: PushEmpty(bool, object)
0xb3f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb40: Call2 0x142d

0xb41: Pop(1)
0xb42: IF (Stack[-1] == 0) GOTO 0xb49; Pop(1)

0xb43: PushEmpty(bool, object)
0xb44: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb45: Call2 0x1439

0xb46: Pop(1)
0xb47: IF (Stack[-1] == 0) GOTO 0xb49; Pop(1)

0xb48: Stack[-1] = (bool) 1
0xb49: IF (Stack[-1] == 0) GOTO 0xb63; Pop(1)

0xb4a: PushEmpty(object, object)
0xb4b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb4c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb4d: Call2 0x12f5

0xb4e: Pop(2)
0xb4f: PushEmpty(string)
0xb50: Stack[-1] = "Neutral"
0xb51: Call2 0xac2

0xb52: Pop(1)
0xb53: Push((int) 524707)
0xb54: @@ SetMessage(Stack[-1])
0xb55: Pop(1)
0xb56: @@ ClearReplies()
0xb57: Pop(0)
0xb58: Push((int) 524708)
0xb59: Push((int) 28139)
0xb5a: Push((int) 26047)
0xb5b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5c: Pop(3)
0xb5d: Push((int) 542053)
0xb5e: Push((int) 28139)
0xb5f: Push((int) 44336)
0xb60: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb61: Pop(3)
0xb62: Return(); Pop(0)

0xb63: PushEmpty(bool, object)
0xb64: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb65: Call2 0x1445

0xb66: Pop(1)
0xb67: IF (Stack[-1] == 0) GOTO 0xb81; Pop(1)

0xb68: PushEmpty(object, object)
0xb69: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb6a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb6b: Call2 0x12fb

0xb6c: Pop(2)
0xb6d: PushEmpty(string)
0xb6e: Stack[-1] = "Fear"
0xb6f: Call2 0xac2

0xb70: Pop(1)
0xb71: Push((int) 524780)
0xb72: @@ SetMessage(Stack[-1])
0xb73: Pop(1)
0xb74: @@ ClearReplies()
0xb75: Pop(0)
0xb76: Push((int) 526860)
0xb77: Push((int) 28146)
0xb78: Push((int) 28145)
0xb79: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7a: Pop(3)
0xb7b: Push((int) 542054)
0xb7c: Push((int) 28146)
0xb7d: Push((int) 44338)
0xb7e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7f: Pop(3)
0xb80: Return(); Pop(0)

0xb81: PushEmpty(string)
0xb82: Stack[-1] = "Dream"
0xb83: Call2 0xac2

0xb84: Pop(1)
0xb85: Push((int) 524709)
0xb86: @@ SetMessage(Stack[-1])
0xb87: Pop(1)
0xb88: @@ ClearReplies()
0xb89: Pop(0)
0xb8a: PushEmpty(bool)
0xb8b: Stack[-1] = (bool) 0
0xb8c: PushEmpty(bool, object)
0xb8d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb8e: Call2 0x1451

0xb8f: Pop(1)
0xb90: IF (Stack[-1] == 0) GOTO 0xb98; Pop(1)

0xb91: PushEmpty(bool, object)
0xb92: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb93: Call2 0x1445

0xb94: Pop(1)
0xb95: Pop(1); Push((bool) Stack[-1] == 0)
0xb96: IF (Stack[-1] == 0) GOTO 0xb98; Pop(1)

0xb97: Stack[-1] = (bool) 1
0xb98: IF (Stack[-1] == 0) GOTO 0xb9e; Pop(1)

0xb99: Push((int) 524787)
0xb9a: Push((int) 26103)
0xb9b: Push((int) 26102)
0xb9c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb9d: Pop(3)
0xb9e: PushEmpty(bool, object)
0xb9f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xba0: Call2 0x145d

0xba1: Pop(1)
0xba2: IF (Stack[-1] == 0) GOTO 0xba8; Pop(1)

0xba3: Push((int) 524796)
0xba4: Push((int) 28156)
0xba5: Push((int) 26111)
0xba6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xba7: Pop(3)
0xba8: Push((int) 524710)
0xba9: Push((int) -1)
0xbaa: Push((int) 26049)
0xbab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbac: Pop(3)
0xbad: Return(); Pop(0)

0xbae: Push((int) 28156)
0xbaf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbb0: IF (Stack[-1] == 0) GOTO 0xbca; Pop(1)

0xbb1: PushEmpty(string)
0xbb2: Stack[-1] = "Adoration"
0xbb3: Call2 0xac2

0xbb4: Pop(1)
0xbb5: Push((int) 526870)
0xbb6: @@ SetMessage(Stack[-1])
0xbb7: Pop(1)
0xbb8: @@ ClearReplies()
0xbb9: Pop(0)
0xbba: Push((int) 526871)
0xbbb: Push((int) 44381)
0xbbc: Push((int) 28157)
0xbbd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbbe: Pop(3)
0xbbf: Push((int) 542072)
0xbc0: Push((int) 44363)
0xbc1: Push((int) 44362)
0xbc2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc3: Pop(3)
0xbc4: Push((int) 526872)
0xbc5: Push((int) 28155)
0xbc6: Push((int) 28158)
0xbc7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc8: Pop(3)
0xbc9: Return(); Pop(0)

0xbca: Push((int) 44363)
0xbcb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbcc: IF (Stack[-1] == 0) GOTO 0xbe1; Pop(1)

0xbcd: PushEmpty(string)
0xbce: Stack[-1] = "Adoration"
0xbcf: Call2 0xac2

0xbd0: Pop(1)
0xbd1: Push((int) 542073)
0xbd2: @@ SetMessage(Stack[-1])
0xbd3: Pop(1)
0xbd4: @@ ClearReplies()
0xbd5: Pop(0)
0xbd6: Push((int) 542077)
0xbd7: Push((int) 26112)
0xbd8: Push((int) 44367)
0xbd9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbda: Pop(3)
0xbdb: Push((int) 542078)
0xbdc: Push((int) 26112)
0xbdd: Push((int) 44368)
0xbde: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbdf: Pop(3)
0xbe0: Return(); Pop(0)

0xbe1: Push((int) 44381)
0xbe2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbe3: IF (Stack[-1] == 0) GOTO 0xbf4; Pop(1)

0xbe4: Push((int) 542087)
0xbe5: @@ SetMessage(Stack[-1])
0xbe6: Pop(1)
0xbe7: @@ ClearReplies()
0xbe8: Pop(0)
0xbe9: Push((int) 542088)
0xbea: Push((int) 26112)
0xbeb: Push((int) 44382)
0xbec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbed: Pop(3)
0xbee: Push((int) 542090)
0xbef: Push((int) 26112)
0xbf0: Push((int) 44384)
0xbf1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbf2: Pop(3)
0xbf3: Return(); Pop(0)

0xbf4: Push((int) 26112)
0xbf5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbf6: IF (Stack[-1] == 0) GOTO 0xc06; Pop(1)

0xbf7: PushEmpty(string)
0xbf8: Stack[-1] = "Rage"
0xbf9: Call2 0xac2

0xbfa: Pop(1)
0xbfb: Push((int) 524797)
0xbfc: @@ SetMessage(Stack[-1])
0xbfd: Pop(1)
0xbfe: @@ ClearReplies()
0xbff: Pop(0)
0xc00: Push((int) 526868)
0xc01: Push((int) 28155)
0xc02: Push((int) 28154)
0xc03: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc04: Pop(3)
0xc05: Return(); Pop(0)

0xc06: Push((int) 28155)
0xc07: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc08: IF (Stack[-1] == 0) GOTO 0xc1d; Pop(1)

0xc09: PushEmpty(string)
0xc0a: Stack[-1] = "Neutral"
0xc0b: Call2 0xac2

0xc0c: Pop(1)
0xc0d: Push((int) 526869)
0xc0e: @@ SetMessage(Stack[-1])
0xc0f: Pop(1)
0xc10: @@ ClearReplies()
0xc11: Pop(0)
0xc12: Push((int) 542062)
0xc13: Push((int) -1)
0xc14: Push((int) 44350)
0xc15: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc16: Pop(3)
0xc17: Push((int) 542091)
0xc18: Push((int) 44390)
0xc19: Push((int) 44389)
0xc1a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1b: Pop(3)
0xc1c: Return(); Pop(0)

0xc1d: Push((int) 44390)
0xc1e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc1f: IF (Stack[-1] == 0) GOTO 0xc2f; Pop(1)

0xc20: PushEmpty(string)
0xc21: Stack[-1] = "Adoration"
0xc22: Call2 0xac2

0xc23: Pop(1)
0xc24: Push((int) 542092)
0xc25: @@ SetMessage(Stack[-1])
0xc26: Pop(1)
0xc27: @@ ClearReplies()
0xc28: Pop(0)
0xc29: Push((int) 524798)
0xc2a: Push((int) -1)
0xc2b: Push((int) 26113)
0xc2c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc2d: Pop(3)
0xc2e: Return(); Pop(0)

0xc2f: Push((int) 26103)
0xc30: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc31: IF (Stack[-1] == 0) GOTO 0xc41; Pop(1)

0xc32: PushEmpty(string)
0xc33: Stack[-1] = "Adoration"
0xc34: Call2 0xac2

0xc35: Pop(1)
0xc36: Push((int) 524788)
0xc37: @@ SetMessage(Stack[-1])
0xc38: Pop(1)
0xc39: @@ ClearReplies()
0xc3a: Pop(0)
0xc3b: Push((int) 524789)
0xc3c: Push((int) -1)
0xc3d: Push((int) 26104)
0xc3e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc3f: Pop(3)
0xc40: Return(); Pop(0)

0xc41: Push((int) 28146)
0xc42: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc43: IF (Stack[-1] == 0) GOTO 0xc5d; Pop(1)

0xc44: PushEmpty(string)
0xc45: Stack[-1] = "Fear"
0xc46: Call2 0xac2

0xc47: Pop(1)
0xc48: Push((int) 526861)
0xc49: @@ SetMessage(Stack[-1])
0xc4a: Pop(1)
0xc4b: @@ ClearReplies()
0xc4c: Pop(0)
0xc4d: Push((int) 542064)
0xc4e: Push((int) 44355)
0xc4f: Push((int) 44352)
0xc50: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc51: Pop(3)
0xc52: Push((int) 542069)
0xc53: Push((int) 44355)
0xc54: Push((int) 44357)
0xc55: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc56: Pop(3)
0xc57: Push((int) 542070)
0xc58: Push((int) 44364)
0xc59: Push((int) 44358)
0xc5a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc5b: Pop(3)
0xc5c: Return(); Pop(0)

0xc5d: Push((int) 44364)
0xc5e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc5f: IF (Stack[-1] == 0) GOTO 0xc74; Pop(1)

0xc60: PushEmpty(string)
0xc61: Stack[-1] = "Dream"
0xc62: Call2 0xac2

0xc63: Pop(1)
0xc64: Push((int) 542074)
0xc65: @@ SetMessage(Stack[-1])
0xc66: Pop(1)
0xc67: @@ ClearReplies()
0xc68: Pop(0)
0xc69: Push((int) 542075)
0xc6a: Push((int) -1)
0xc6b: Push((int) 44365)
0xc6c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc6d: Pop(3)
0xc6e: Push((int) 542076)
0xc6f: Push((int) -1)
0xc70: Push((int) 44366)
0xc71: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc72: Pop(3)
0xc73: Return(); Pop(0)

0xc74: Push((int) 44355)
0xc75: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc76: IF (Stack[-1] == 0) GOTO 0xc8b; Pop(1)

0xc77: PushEmpty(string)
0xc78: Stack[-1] = "Rage"
0xc79: Call2 0xac2

0xc7a: Pop(1)
0xc7b: Push((int) 542067)
0xc7c: @@ SetMessage(Stack[-1])
0xc7d: Pop(1)
0xc7e: @@ ClearReplies()
0xc7f: Pop(0)
0xc80: Push((int) 542068)
0xc81: Push((int) 44353)
0xc82: Push((int) 44356)
0xc83: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc84: Pop(3)
0xc85: Push((int) 542071)
0xc86: Push((int) 44353)
0xc87: Push((int) 44359)
0xc88: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc89: Pop(3)
0xc8a: Return(); Pop(0)

0xc8b: Push((int) 44353)
0xc8c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc8d: IF (Stack[-1] == 0) GOTO 0xca2; Pop(1)

0xc8e: PushEmpty(string)
0xc8f: Stack[-1] = "Rage"
0xc90: Call2 0xac2

0xc91: Pop(1)
0xc92: Push((int) 542065)
0xc93: @@ SetMessage(Stack[-1])
0xc94: Pop(1)
0xc95: @@ ClearReplies()
0xc96: Pop(0)
0xc97: Push((int) 526862)
0xc98: Push((int) 28148)
0xc99: Push((int) 28147)
0xc9a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc9b: Pop(3)
0xc9c: Push((int) 526865)
0xc9d: Push((int) 28148)
0xc9e: Push((int) 28150)
0xc9f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xca0: Pop(3)
0xca1: Return(); Pop(0)

0xca2: Push((int) 28148)
0xca3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca4: IF (Stack[-1] == 0) GOTO 0xcb9; Pop(1)

0xca5: PushEmpty(string)
0xca6: Stack[-1] = "Neutral"
0xca7: Call2 0xac2

0xca8: Pop(1)
0xca9: Push((int) 526863)
0xcaa: @@ SetMessage(Stack[-1])
0xcab: Pop(1)
0xcac: @@ ClearReplies()
0xcad: Pop(0)
0xcae: Push((int) 524783)
0xcaf: Push((int) 26099)
0xcb0: Push((int) 26098)
0xcb1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcb2: Pop(3)
0xcb3: Push((int) 542056)
0xcb4: Push((int) 26099)
0xcb5: Push((int) 44341)
0xcb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcb7: Pop(3)
0xcb8: Return(); Pop(0)

0xcb9: Push((int) 26099)
0xcba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcbb: IF (Stack[-1] == 0) GOTO 0xcd0; Pop(1)

0xcbc: PushEmpty(string)
0xcbd: Stack[-1] = "Neutral"
0xcbe: Call2 0xac2

0xcbf: Pop(1)
0xcc0: Push((int) 524784)
0xcc1: @@ SetMessage(Stack[-1])
0xcc2: Pop(1)
0xcc3: @@ ClearReplies()
0xcc4: Pop(0)
0xcc5: Push((int) 524785)
0xcc6: Push((int) -1)
0xcc7: Push((int) 26100)
0xcc8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc9: Pop(3)
0xcca: Push((int) 524786)
0xccb: Push((int) -1)
0xccc: Push((int) 26101)
0xccd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcce: Pop(3)
0xccf: Return(); Pop(0)

0xcd0: Push((int) 28139)
0xcd1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcd2: IF (Stack[-1] == 0) GOTO 0xce7; Pop(1)

0xcd3: PushEmpty(string)
0xcd4: Stack[-1] = "Adoration"
0xcd5: Call2 0xac2

0xcd6: Pop(1)
0xcd7: Push((int) 526854)
0xcd8: @@ SetMessage(Stack[-1])
0xcd9: Pop(1)
0xcda: @@ ClearReplies()
0xcdb: Pop(0)
0xcdc: Push((int) 526855)
0xcdd: Push((int) 28142)
0xcde: Push((int) 28140)
0xcdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce0: Pop(3)
0xce1: Push((int) 526856)
0xce2: Push((int) -1)
0xce3: Push((int) 28141)
0xce4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce5: Pop(3)
0xce6: Return(); Pop(0)

0xce7: Push((int) 28142)
0xce8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xce9: IF (Stack[-1] == 0) GOTO 0xcfe; Pop(1)

0xcea: PushEmpty(string)
0xceb: Stack[-1] = "Adoration"
0xcec: Call2 0xac2

0xced: Pop(1)
0xcee: Push((int) 526857)
0xcef: @@ SetMessage(Stack[-1])
0xcf0: Pop(1)
0xcf1: @@ ClearReplies()
0xcf2: Pop(0)
0xcf3: Push((int) 526858)
0xcf4: Push((int) -1)
0xcf5: Push((int) 28143)
0xcf6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf7: Pop(3)
0xcf8: Push((int) 526859)
0xcf9: Push((int) -1)
0xcfa: Push((int) 28144)
0xcfb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcfc: Pop(3)
0xcfd: Return(); Pop(0)

0xcfe: Push((int) 44323)
0xcff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd00: IF (Stack[-1] == 0) GOTO 0xd01; Pop(1)

0xd01: Push((int) 28130)
0xd02: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd03: IF (Stack[-1] == 0) GOTO 0xd18; Pop(1)

0xd04: PushEmpty(string)
0xd05: Stack[-1] = "Rage"
0xd06: Call2 0xac2

0xd07: Pop(1)
0xd08: Push((int) 526845)
0xd09: @@ SetMessage(Stack[-1])
0xd0a: Pop(1)
0xd0b: @@ ClearReplies()
0xd0c: Pop(0)
0xd0d: Push((int) 526846)
0xd0e: Push((int) 28132)
0xd0f: Push((int) 28131)
0xd10: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd11: Pop(3)
0xd12: Push((int) 542047)
0xd13: Push((int) 44327)
0xd14: Push((int) 44326)
0xd15: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd16: Pop(3)
0xd17: Return(); Pop(0)

0xd18: Push((int) 44327)
0xd19: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd1a: IF (Stack[-1] == 0) GOTO 0xd2a; Pop(1)

0xd1b: PushEmpty(string)
0xd1c: Stack[-1] = "Dream"
0xd1d: Call2 0xac2

0xd1e: Pop(1)
0xd1f: Push((int) 542048)
0xd20: @@ SetMessage(Stack[-1])
0xd21: Pop(1)
0xd22: @@ ClearReplies()
0xd23: Pop(0)
0xd24: Push((int) 542050)
0xd25: Push((int) 44333)
0xd26: Push((int) 44331)
0xd27: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd28: Pop(3)
0xd29: Return(); Pop(0)

0xd2a: Push((int) 44333)
0xd2b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd2c: IF (Stack[-1] == 0) GOTO 0xd3c; Pop(1)

0xd2d: PushEmpty(string)
0xd2e: Stack[-1] = "Neutral"
0xd2f: Call2 0xac2

0xd30: Pop(1)
0xd31: Push((int) 542051)
0xd32: @@ SetMessage(Stack[-1])
0xd33: Pop(1)
0xd34: @@ ClearReplies()
0xd35: Pop(0)
0xd36: Push((int) 542052)
0xd37: Push((int) 28134)
0xd38: Push((int) 44334)
0xd39: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3a: Pop(3)
0xd3b: Return(); Pop(0)

0xd3c: Push((int) 28132)
0xd3d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd3e: IF (Stack[-1] == 0) GOTO 0xd4e; Pop(1)

0xd3f: PushEmpty(string)
0xd40: Stack[-1] = "Rage"
0xd41: Call2 0xac2

0xd42: Pop(1)
0xd43: Push((int) 526847)
0xd44: @@ SetMessage(Stack[-1])
0xd45: Pop(1)
0xd46: @@ ClearReplies()
0xd47: Pop(0)
0xd48: Push((int) 526848)
0xd49: Push((int) 28134)
0xd4a: Push((int) 28133)
0xd4b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd4c: Pop(3)
0xd4d: Return(); Pop(0)

0xd4e: Push((int) 28134)
0xd4f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd50: IF (Stack[-1] == 0) GOTO 0xd60; Pop(1)

0xd51: PushEmpty(string)
0xd52: Stack[-1] = "Rage"
0xd53: Call2 0xac2

0xd54: Pop(1)
0xd55: Push((int) 526849)
0xd56: @@ SetMessage(Stack[-1])
0xd57: Pop(1)
0xd58: @@ ClearReplies()
0xd59: Pop(0)
0xd5a: Push((int) 526850)
0xd5b: Push((int) 28136)
0xd5c: Push((int) 28135)
0xd5d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd5e: Pop(3)
0xd5f: Return(); Pop(0)

0xd60: Push((int) 28136)
0xd61: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd62: IF (Stack[-1] == 0) GOTO 0xd77; Pop(1)

0xd63: PushEmpty(string)
0xd64: Stack[-1] = "Neutral"
0xd65: Call2 0xac2

0xd66: Pop(1)
0xd67: Push((int) 526851)
0xd68: @@ SetMessage(Stack[-1])
0xd69: Pop(1)
0xd6a: @@ ClearReplies()
0xd6b: Pop(0)
0xd6c: Push((int) 526852)
0xd6d: Push((int) -1)
0xd6e: Push((int) 28137)
0xd6f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd70: Pop(3)
0xd71: Push((int) 526853)
0xd72: Push((int) -1)
0xd73: Push((int) 28138)
0xd74: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd75: Pop(3)
0xd76: Return(); Pop(0)

0xd77: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xd78: PushEmpty(bool)
0xd79: Call2 0x12d6

0xd7a: Pop(0)
0xd7b: IF (Stack[-1] == 0) GOTO 0xd7f; Pop(1)

0xd7c: @ lshStopAnimation()
0xd7d: Pop(0)
0xd7e: GOTO 0xd81

0xd7f: @ StopAnimation()
0xd80: Pop(0)
0xd81: Return(); Pop(0)

0xd82: GOTO 0xad9

0xd83: Return(); Pop(0)

0xd84: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xd85: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xd86: PushEmpty(bool, object, float)
0xd87: Stack[-2] = Stack[-12]
0xd88: Stack[-1] = (float) 70.0
0xd89: Call2 0x1102

0xd8a: Pop(2)
0xd8b: Pop(1); Push((bool) Stack[-1] == 0)
0xd8c: IF (Stack[-1] == 0) GOTO 0xd8f; Pop(1)

0xd8d: Stack[-10] = (int) -2
0xd8e: Return(); Pop(8)

0xd8f: @ CreateDialog(Stack[-4])
0xd90: Pop(0)
0xd91: PushEmpty(int)
0xd92: Call2 0x12d0

0xd93: Pop(0)
0xd94: @@ SetNPCName(Stack[-1])
0xd95: Pop(1)
0xd96: PushEmpty(int)
0xd97: Call2 0x12ce

0xd98: Pop(0)
0xd99: @@ SetNPCDescription(Stack[-1])
0xd9a: Pop(1)
0xd9b: PushEmpty(string)
0xd9c: Call2 0x12d2

0xd9d: Pop(0)
0xd9e: @@ SetPhoto(Stack[-1])
0xd9f: Pop(1)
0xda0: PushEmpty(string)
0xda1: Call2 0x12d4

0xda2: Pop(0)
0xda3: @@ SetPhoto2(Stack[-1])
0xda4: Pop(1)
0xda5: PushEmpty(int)
0xda6: Call2 0x1630

0xda7: Pop(0)
0xda8: @@ SetPlayerName(Stack[-1])
0xda9: Pop(1)
0xdaa: Stack[-2] = (int) -1
0xdab: @ IsOverrideActive(Stack[-3])
0xdac: Pop(0)
0xdad: Push(Stack[-3])
0xdae: IF (Stack[-1] == 0) GOTO 0xdb1; Pop(1)

0xdaf: Stack[-10] = (int) -2
0xdb0: Return(); Pop(8)

0xdb1: @ DoDialog(Stack[-4])
0xdb2: Pop(0)
0xdb3: PushEmpty(bool, object)
0xdb4: PushEmpty(object)
0xdb5: Call2 0x1216

0xdb6: Stack[-2] = Stack[-1]
0xdb7: Pop(1)
0xdb8: Call2 0x1157

0xdb9: Pop(2)
0xdba: PushEmpty(object, object)
0xdbb: Stack[-2] = Stack[-11]
0xdbc: Stack[-1] = Stack[-6]
0xdbd: Push(-2, 4); TaskCall(13)
0xdbe: Call2 0xdd5

0xdbf: Pop(-2, 4); TaskReturn
0xdc0: Pop(2)
0xdc1: @@ IsDialogEnd(Stack[-1])
0xdc2: Pop(0)
0xdc3: Pop(0); Push((bool) Stack[-1] == 0)
0xdc4: IF (Stack[-1] == 0) GOTO 0xdca; Pop(1)

0xdc5: @ sync()
0xdc6: Pop(0)
0xdc7: @@ IsDialogEnd(Stack[-1])
0xdc8: Pop(0)
0xdc9: GOTO 0xdc3

0xdca: PushEmpty(object)
0xdcb: Stack[-1] = Stack[-10]
0xdcc: Call2 0x1146

0xdcd: Pop(1)
0xdce: @ StopDialog(Stack[-4])
0xdcf: Pop(0)
0xdd0: @@ GetReturnValue(Stack[-2])
0xdd1: Pop(0)
0xdd2: Stack[-10] = Stack[-2]
0xdd3: Return(); Pop(8)

0xdd4: Stack[-4] = 0
0xdd5: PushEmpty()
0xdd6: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xdd7: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xdd8: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xdd9: Push((int) 1)
0xdda: IF (Stack[-1] == 0) GOTO 0xdf6; Pop(1)

0xddb: PushEmpty(string)
0xddc: Stack[-1] = "Neutral"
0xddd: Call2 0xe14

0xdde: Pop(1)
0xddf: Push((int) 539303)
0xde0: @@ SetMessage(Stack[-1])
0xde1: Pop(1)
0xde2: @@ ClearReplies()
0xde3: Pop(0)
0xde4: Push((int) 542544)
0xde5: Push((int) 44940)
0xde6: Push((int) 44939)
0xde7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde8: Pop(3)
0xde9: Push((int) 539304)
0xdea: Push((int) -1)
0xdeb: Push((int) 41247)
0xdec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xded: Pop(3)
0xdee: Push((int) 542543)
0xdef: Push((int) -1)
0xdf0: Push((int) 44938)
0xdf1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf2: Pop(3)
0xdf3: GOTO 0xdf6

0xdf4: Return(); Pop(0)

0xdf5: GOTO 0xdd9

0xdf6: PushEmpty(bool)
0xdf7: Call2 0x12d6

0xdf8: Pop(0)
0xdf9: IF (Stack[-1] == 0) GOTO 0xe05; Pop(1)

0xdfa: @ lshWaitForAnimEnd()
0xdfb: Pop(0)
0xdfc: Push( Stack[3 + Tasks[-1].StackPointer] )
0xdfd: IF (Stack[-1] == 0) GOTO 0xdff; Pop(1)

0xdfe: GOTO 0xe04

0xdff: PushEmpty(string)
0xe00: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xe01: Call2 0x11e1

0xe02: Pop(1)
0xe03: GOTO 0xdfa

0xe04: GOTO 0xe13

0xe05: Push("all")
0xe06: Push("idle")
0xe07: @ PlayAnimation(Stack[-2], Stack[-1])
0xe08: Pop(2)
0xe09: @ WaitForAnimEnd()
0xe0a: Pop(0)
0xe0b: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe0c: IF (Stack[-1] == 0) GOTO 0xe0e; Pop(1)

0xe0d: GOTO 0xe13

0xe0e: Push("all")
0xe0f: Push("idle")
0xe10: @ PlayAnimation(Stack[-2], Stack[-1])
0xe11: Pop(2)
0xe12: GOTO 0xe09

0xe13: Return(); Pop(0)

0xe14: PushEmpty()
0xe15: PushEmpty(bool)
0xe16: Call2 0x12d6

0xe17: Pop(0)
0xe18: Pop(1); Push((bool) Stack[-1] == 0)
0xe19: IF (Stack[-1] == 0) GOTO 0xe1b; Pop(1)

0xe1a: Return(); Pop(0)

0xe1b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xe1c: IF (Stack[-1] == 0) GOTO 0xe1e; Pop(1)

0xe1d: Return(); Pop(0)

0xe1e: PushEmpty(string, bool)
0xe1f: Stack[-2] = Stack[-3]
0xe20: Push("")
0xe21: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xe22: IF (Stack[-1] == 0) GOTO 0xe25; Pop(1)

0xe23: Stack[-1] = (bool) 0
0xe24: GOTO 0xe26

0xe25: Stack[-1] = (bool) 1
0xe26: Call2 0x11f1

0xe27: Pop(2)
0xe28: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xe29: Return(); Pop(0)

0xe2a: PushEmpty()
0xe2b: Push((int) 1)
0xe2c: IF (Stack[-1] == 0) GOTO 0xeea; Pop(1)

0xe2d: PushEmpty()
0xe2e: Call2 0x120f

0xe2f: Pop(0)
0xe30: Push((int) 41246)
0xe31: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe32: IF (Stack[-1] == 0) GOTO 0xe4c; Pop(1)

0xe33: PushEmpty(string)
0xe34: Stack[-1] = "Neutral"
0xe35: Call2 0xe14

0xe36: Pop(1)
0xe37: Push((int) 539303)
0xe38: @@ SetMessage(Stack[-1])
0xe39: Pop(1)
0xe3a: @@ ClearReplies()
0xe3b: Pop(0)
0xe3c: Push((int) 542544)
0xe3d: Push((int) 44940)
0xe3e: Push((int) 44939)
0xe3f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe40: Pop(3)
0xe41: Push((int) 539304)
0xe42: Push((int) -1)
0xe43: Push((int) 41247)
0xe44: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe45: Pop(3)
0xe46: Push((int) 542543)
0xe47: Push((int) -1)
0xe48: Push((int) 44938)
0xe49: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe4a: Pop(3)
0xe4b: Return(); Pop(0)

0xe4c: Push((int) 44940)
0xe4d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe4e: IF (Stack[-1] == 0) GOTO 0xe63; Pop(1)

0xe4f: PushEmpty(string)
0xe50: Stack[-1] = "Dream"
0xe51: Call2 0xe14

0xe52: Pop(1)
0xe53: Push((int) 542545)
0xe54: @@ SetMessage(Stack[-1])
0xe55: Pop(1)
0xe56: @@ ClearReplies()
0xe57: Pop(0)
0xe58: Push((int) 542553)
0xe59: Push((int) 44954)
0xe5a: Push((int) 44950)
0xe5b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe5c: Pop(3)
0xe5d: Push((int) 542554)
0xe5e: Push((int) 44952)
0xe5f: Push((int) 44951)
0xe60: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe61: Pop(3)
0xe62: Return(); Pop(0)

0xe63: Push((int) 44952)
0xe64: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe65: IF (Stack[-1] == 0) GOTO 0xe75; Pop(1)

0xe66: PushEmpty(string)
0xe67: Stack[-1] = "Adoration"
0xe68: Call2 0xe14

0xe69: Pop(1)
0xe6a: Push((int) 542555)
0xe6b: @@ SetMessage(Stack[-1])
0xe6c: Pop(1)
0xe6d: @@ ClearReplies()
0xe6e: Pop(0)
0xe6f: Push((int) 542556)
0xe70: Push((int) 44954)
0xe71: Push((int) 44953)
0xe72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe73: Pop(3)
0xe74: Return(); Pop(0)

0xe75: Push((int) 44954)
0xe76: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe77: IF (Stack[-1] == 0) GOTO 0xe87; Pop(1)

0xe78: PushEmpty(string)
0xe79: Stack[-1] = "Dream"
0xe7a: Call2 0xe14

0xe7b: Pop(1)
0xe7c: Push((int) 542557)
0xe7d: @@ SetMessage(Stack[-1])
0xe7e: Pop(1)
0xe7f: @@ ClearReplies()
0xe80: Pop(0)
0xe81: Push((int) 542558)
0xe82: Push((int) 44957)
0xe83: Push((int) 44956)
0xe84: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe85: Pop(3)
0xe86: Return(); Pop(0)

0xe87: Push((int) 44957)
0xe88: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe89: IF (Stack[-1] == 0) GOTO 0xe9e; Pop(1)

0xe8a: PushEmpty(string)
0xe8b: Stack[-1] = "Adoration"
0xe8c: Call2 0xe14

0xe8d: Pop(1)
0xe8e: Push((int) 542559)
0xe8f: @@ SetMessage(Stack[-1])
0xe90: Pop(1)
0xe91: @@ ClearReplies()
0xe92: Pop(0)
0xe93: Push((int) 542560)
0xe94: Push((int) 44962)
0xe95: Push((int) 44958)
0xe96: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe97: Pop(3)
0xe98: Push((int) 542561)
0xe99: Push((int) 44960)
0xe9a: Push((int) 44959)
0xe9b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe9c: Pop(3)
0xe9d: Return(); Pop(0)

0xe9e: Push((int) 44960)
0xe9f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xea0: IF (Stack[-1] == 0) GOTO 0xeb0; Pop(1)

0xea1: PushEmpty(string)
0xea2: Stack[-1] = "Neutral"
0xea3: Call2 0xe14

0xea4: Pop(1)
0xea5: Push((int) 542562)
0xea6: @@ SetMessage(Stack[-1])
0xea7: Pop(1)
0xea8: @@ ClearReplies()
0xea9: Pop(0)
0xeaa: Push((int) 542563)
0xeab: Push((int) 44962)
0xeac: Push((int) 44961)
0xead: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeae: Pop(3)
0xeaf: Return(); Pop(0)

0xeb0: Push((int) 44962)
0xeb1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xeb2: IF (Stack[-1] == 0) GOTO 0xec7; Pop(1)

0xeb3: PushEmpty(string)
0xeb4: Stack[-1] = "Neutral"
0xeb5: Call2 0xe14

0xeb6: Pop(1)
0xeb7: Push((int) 542564)
0xeb8: @@ SetMessage(Stack[-1])
0xeb9: Pop(1)
0xeba: @@ ClearReplies()
0xebb: Pop(0)
0xebc: Push((int) 542565)
0xebd: Push((int) 44966)
0xebe: Push((int) 44964)
0xebf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xec0: Pop(3)
0xec1: Push((int) 542566)
0xec2: Push((int) -1)
0xec3: Push((int) 44965)
0xec4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xec5: Pop(3)
0xec6: Return(); Pop(0)

0xec7: Push((int) 44966)
0xec8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xec9: IF (Stack[-1] == 0) GOTO 0xede; Pop(1)

0xeca: PushEmpty(string)
0xecb: Stack[-1] = "Neutral"
0xecc: Call2 0xe14

0xecd: Pop(1)
0xece: Push((int) 542567)
0xecf: @@ SetMessage(Stack[-1])
0xed0: Pop(1)
0xed1: @@ ClearReplies()
0xed2: Pop(0)
0xed3: Push((int) 542568)
0xed4: Push((int) -1)
0xed5: Push((int) 44967)
0xed6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed7: Pop(3)
0xed8: Push((int) 542569)
0xed9: Push((int) -1)
0xeda: Push((int) 44968)
0xedb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xedc: Pop(3)
0xedd: Return(); Pop(0)

0xede: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xedf: PushEmpty(bool)
0xee0: Call2 0x12d6

0xee1: Pop(0)
0xee2: IF (Stack[-1] == 0) GOTO 0xee6; Pop(1)

0xee3: @ lshStopAnimation()
0xee4: Pop(0)
0xee5: GOTO 0xee8

0xee6: @ StopAnimation()
0xee7: Pop(0)
0xee8: Return(); Pop(0)

0xee9: GOTO 0xe2b

0xeea: Return(); Pop(0)

0xeeb: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xeec: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xeed: PushEmpty(bool, object, float)
0xeee: Stack[-2] = Stack[-12]
0xeef: Stack[-1] = (float) 70.0
0xef0: Call2 0x1102

0xef1: Pop(2)
0xef2: Pop(1); Push((bool) Stack[-1] == 0)
0xef3: IF (Stack[-1] == 0) GOTO 0xef6; Pop(1)

0xef4: Stack[-10] = (int) -2
0xef5: Return(); Pop(8)

0xef6: @ CreateDialog(Stack[-4])
0xef7: Pop(0)
0xef8: PushEmpty(int)
0xef9: Call2 0x12d0

0xefa: Pop(0)
0xefb: @@ SetNPCName(Stack[-1])
0xefc: Pop(1)
0xefd: PushEmpty(int)
0xefe: Call2 0x12ce

0xeff: Pop(0)
0xf00: @@ SetNPCDescription(Stack[-1])
0xf01: Pop(1)
0xf02: PushEmpty(string)
0xf03: Call2 0x12d2

0xf04: Pop(0)
0xf05: @@ SetPhoto(Stack[-1])
0xf06: Pop(1)
0xf07: PushEmpty(string)
0xf08: Call2 0x12d4

0xf09: Pop(0)
0xf0a: @@ SetPhoto2(Stack[-1])
0xf0b: Pop(1)
0xf0c: PushEmpty(int)
0xf0d: Call2 0x1630

0xf0e: Pop(0)
0xf0f: @@ SetPlayerName(Stack[-1])
0xf10: Pop(1)
0xf11: Stack[-2] = (int) -1
0xf12: @ IsOverrideActive(Stack[-3])
0xf13: Pop(0)
0xf14: Push(Stack[-3])
0xf15: IF (Stack[-1] == 0) GOTO 0xf18; Pop(1)

0xf16: Stack[-10] = (int) -2
0xf17: Return(); Pop(8)

0xf18: @ DoDialog(Stack[-4])
0xf19: Pop(0)
0xf1a: PushEmpty(bool, object)
0xf1b: PushEmpty(object)
0xf1c: Call2 0x1216

0xf1d: Stack[-2] = Stack[-1]
0xf1e: Pop(1)
0xf1f: Call2 0x1157

0xf20: Pop(2)
0xf21: PushEmpty(object, object)
0xf22: Stack[-2] = Stack[-11]
0xf23: Stack[-1] = Stack[-6]
0xf24: Push(-2, 4); TaskCall(15)
0xf25: Call2 0xf3c

0xf26: Pop(-2, 4); TaskReturn
0xf27: Pop(2)
0xf28: @@ IsDialogEnd(Stack[-1])
0xf29: Pop(0)
0xf2a: Pop(0); Push((bool) Stack[-1] == 0)
0xf2b: IF (Stack[-1] == 0) GOTO 0xf31; Pop(1)

0xf2c: @ sync()
0xf2d: Pop(0)
0xf2e: @@ IsDialogEnd(Stack[-1])
0xf2f: Pop(0)
0xf30: GOTO 0xf2a

0xf31: PushEmpty(object)
0xf32: Stack[-1] = Stack[-10]
0xf33: Call2 0x1146

0xf34: Pop(1)
0xf35: @ StopDialog(Stack[-4])
0xf36: Pop(0)
0xf37: @@ GetReturnValue(Stack[-2])
0xf38: Pop(0)
0xf39: Stack[-10] = Stack[-2]
0xf3a: Return(); Pop(8)

0xf3b: Stack[-4] = 0
0xf3c: PushEmpty()
0xf3d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xf3e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xf3f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xf40: Push((int) 1)
0xf41: IF (Stack[-1] == 0) GOTO 0xf58; Pop(1)

0xf42: PushEmpty(string)
0xf43: Stack[-1] = "Neutral"
0xf44: Call2 0xf76

0xf45: Pop(1)
0xf46: Push((int) 540539)
0xf47: @@ SetMessage(Stack[-1])
0xf48: Pop(1)
0xf49: @@ ClearReplies()
0xf4a: Pop(0)
0xf4b: Push((int) 540540)
0xf4c: Push((int) -1)
0xf4d: Push((int) 42549)
0xf4e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf4f: Pop(3)
0xf50: Push((int) 540799)
0xf51: Push((int) -1)
0xf52: Push((int) 42848)
0xf53: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf54: Pop(3)
0xf55: GOTO 0xf58

0xf56: Return(); Pop(0)

0xf57: GOTO 0xf40

0xf58: PushEmpty(bool)
0xf59: Call2 0x12d6

0xf5a: Pop(0)
0xf5b: IF (Stack[-1] == 0) GOTO 0xf67; Pop(1)

0xf5c: @ lshWaitForAnimEnd()
0xf5d: Pop(0)
0xf5e: Push( Stack[3 + Tasks[-1].StackPointer] )
0xf5f: IF (Stack[-1] == 0) GOTO 0xf61; Pop(1)

0xf60: GOTO 0xf66

0xf61: PushEmpty(string)
0xf62: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xf63: Call2 0x11e1

0xf64: Pop(1)
0xf65: GOTO 0xf5c

0xf66: GOTO 0xf75

0xf67: Push("all")
0xf68: Push("idle")
0xf69: @ PlayAnimation(Stack[-2], Stack[-1])
0xf6a: Pop(2)
0xf6b: @ WaitForAnimEnd()
0xf6c: Pop(0)
0xf6d: Push( Stack[3 + Tasks[-1].StackPointer] )
0xf6e: IF (Stack[-1] == 0) GOTO 0xf70; Pop(1)

0xf6f: GOTO 0xf75

0xf70: Push("all")
0xf71: Push("idle")
0xf72: @ PlayAnimation(Stack[-2], Stack[-1])
0xf73: Pop(2)
0xf74: GOTO 0xf6b

0xf75: Return(); Pop(0)

0xf76: PushEmpty()
0xf77: PushEmpty(bool)
0xf78: Call2 0x12d6

0xf79: Pop(0)
0xf7a: Pop(1); Push((bool) Stack[-1] == 0)
0xf7b: IF (Stack[-1] == 0) GOTO 0xf7d; Pop(1)

0xf7c: Return(); Pop(0)

0xf7d: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xf7e: IF (Stack[-1] == 0) GOTO 0xf80; Pop(1)

0xf7f: Return(); Pop(0)

0xf80: PushEmpty(string, bool)
0xf81: Stack[-2] = Stack[-3]
0xf82: Push("")
0xf83: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xf84: IF (Stack[-1] == 0) GOTO 0xf87; Pop(1)

0xf85: Stack[-1] = (bool) 0
0xf86: GOTO 0xf88

0xf87: Stack[-1] = (bool) 1
0xf88: Call2 0x11f1

0xf89: Pop(2)
0xf8a: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xf8b: Return(); Pop(0)

0xf8c: PushEmpty()
0xf8d: Push((int) 1)
0xf8e: IF (Stack[-1] == 0) GOTO 0xfb5; Pop(1)

0xf8f: PushEmpty()
0xf90: Call2 0x120f

0xf91: Pop(0)
0xf92: Push((int) 42548)
0xf93: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf94: IF (Stack[-1] == 0) GOTO 0xfa9; Pop(1)

0xf95: PushEmpty(string)
0xf96: Stack[-1] = "Neutral"
0xf97: Call2 0xf76

0xf98: Pop(1)
0xf99: Push((int) 540539)
0xf9a: @@ SetMessage(Stack[-1])
0xf9b: Pop(1)
0xf9c: @@ ClearReplies()
0xf9d: Pop(0)
0xf9e: Push((int) 540540)
0xf9f: Push((int) -1)
0xfa0: Push((int) 42549)
0xfa1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa2: Pop(3)
0xfa3: Push((int) 540799)
0xfa4: Push((int) -1)
0xfa5: Push((int) 42848)
0xfa6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa7: Pop(3)
0xfa8: Return(); Pop(0)

0xfa9: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xfaa: PushEmpty(bool)
0xfab: Call2 0x12d6

0xfac: Pop(0)
0xfad: IF (Stack[-1] == 0) GOTO 0xfb1; Pop(1)

0xfae: @ lshStopAnimation()
0xfaf: Pop(0)
0xfb0: GOTO 0xfb3

0xfb1: @ StopAnimation()
0xfb2: Pop(0)
0xfb3: Return(); Pop(0)

0xfb4: GOTO 0xf8d

0xfb5: Return(); Pop(0)

0xfb6: Push(GlobalVars[1])
0xfb7: Stack[-1] = (bool) 0
0xfb8: GlobalVars[1] = Stack[-1]; Pop(1)
0xfb9: PushEmpty()
0xfba: Call2 0xfbd

0xfbb: Pop(0)
0xfbc: Return(); Pop(0)

0xfbd: PushEmpty(bool)
0xfbe: Call2 0x10fd

0xfbf: Pop(0)
0xfc0: Pop(1); Push((bool) Stack[-1] == 0)
0xfc1: IF (Stack[-1] == 0) GOTO 0xfc4; Pop(1)

0xfc2: @ Hold()
0xfc3: Pop(0)
0xfc4: @ GetDirection(Stack[-0])
0xfc5: Pop(0)
0xfc6: PushEmpty()
0xfc7: Call2 0x106d

0xfc8: Pop(0)
0xfc9: GOTO 0xfc6

0xfca: Return(); Pop(0)

0xfcb: PushEmpty(object, object)
0xfcc: Push("player")
0xfcd: @ FindActor(Stack[-2], Stack[-1])
0xfce: Pop(1)
0xfcf: Pop(0); Push((bool) Stack[-1] == 0)
0xfd0: IF (Stack[-1] == 0) GOTO 0xfd3; Pop(1)

0xfd1: Stack[-3] = (bool) 0
0xfd2: Return(); Pop(2)

0xfd3: PushEmpty(bool, object)
0xfd4: Stack[-1] = Stack[-3]
0xfd5: Call2 0x10f4

0xfd6: Stack[-5] = Stack[-2]
0xfd7: Pop(2)
0xfd8: Return(); Pop(2)

0xfd9: Stack[-1] = 0
0xfda: Push(CvectorIndex(Stack[-0], 0))
0xfdb: Push(CvectorIndex(Stack[-0], 2))
0xfdc: @ RotateAsync(Stack[-2], Stack[-1])
0xfdd: Pop(2)
0xfde: Return(); Pop(0)

0xfdf: PushEmpty(object, bool, object, bool)
0xfe0: Push("player")
0xfe1: @ FindActor(Stack[-3], Stack[-1])
0xfe2: Pop(1)
0xfe3: Pop(0); Push((bool) Stack[-2] == 0)
0xfe4: IF (Stack[-1] == 0) GOTO 0xfe7; Pop(1)

0xfe5: Stack[-5] = (bool) 0
0xfe6: Return(); Pop(4)

0xfe7: PushEmpty(float, object)
0xfe8: Stack[-1] = Stack[-4]
0xfe9: Call2 0x10b9

0xfea: Pop(1)
0xfeb: Push((float)90000.0)
0xfec: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0xfed: IF (Stack[-1] == 0) GOTO 0xff0; Pop(1)

0xfee: Stack[-5] = (bool) 0
0xfef: Return(); Pop(4)

0xff0: @ CanSee(Stack[-1], Stack[-2])
0xff1: Pop(0)
0xff2: Stack[-5] = Stack[-1]
0xff3: Return(); Pop(4)

0xff4: Stack[-2] = 0
0xff5: PushEmpty(float, float)
0xff6: Push((int) 8)
0xff7: Push((int) 16)
0xff8: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xff9: Pop(2)
0xffa: Push((int) 10)
0xffb: @ SetTimer(Stack[-1], Stack[-2])
0xffc: Pop(1)
0xffd: Return(); Pop(2)

0xffe: Push((int) 10)
0xfff: @ KillTimer(Stack[-1])
0x1000: Pop(1)
0x1001: Return(); Pop(0)

0x1002: PushEmpty()
0x1003: Push((int) 10)
0x1004: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1005: IF (Stack[-1] == 0) GOTO 0x1027; Pop(1)

0x1006: PushEmpty()
0x1007: Call2 0xffe

0x1008: Pop(0)
0x1009: PushEmpty(bool)
0x100a: Stack[-1] = (bool) 0
0x100b: PushEmpty(bool)
0x100c: Call2 0x10fd

0x100d: Pop(0)
0x100e: IF (Stack[-1] == 0) GOTO 0x1014; Pop(1)

0x100f: PushEmpty(bool)
0x1010: Call2 0xfdf

0x1011: Pop(0)
0x1012: IF (Stack[-1] == 0) GOTO 0x1014; Pop(1)

0x1013: Stack[-1] = (bool) 1
0x1014: IF (Stack[-1] == 0) GOTO 0x1021; Pop(1)

0x1015: PushEmpty(bool)
0x1016: Call2 0xfcb

0x1017: Pop(0)
0x1018: IF (Stack[-1] == 0) GOTO 0x1020; Pop(1)

0x1019: PushEmpty(bool, object)
0x101a: PushEmpty(object)
0x101b: Call2 0x1216

0x101c: Stack[-2] = Stack[-1]
0x101d: Pop(1)
0x101e: Call2 0x1191

0x101f: Pop(2)
0x1020: GOTO 0x1027

0x1021: PushEmpty()
0x1022: Call2 0xfda

0x1023: Pop(0)
0x1024: PushEmpty()
0x1025: Call2 0xff5

0x1026: Pop(0)
0x1027: Return(); Pop(0)

0x1028: PushEmpty()
0x1029: Call2 0x10b4

0x102a: Pop(0)
0x102b: PushEmpty()
0x102c: Call2 0xffe

0x102d: Pop(0)
0x102e: @ lshStopSpeech()
0x102f: Pop(0)
0x1030: @ lshStopAnimation()
0x1031: Pop(0)
0x1032: @ StopAsync()
0x1033: Pop(0)
0x1034: @ Hold()
0x1035: Pop(0)
0x1036: Return(); Pop(0)

0x1037: @ StopGroup0()
0x1038: Pop(0)
0x1039: PushEmpty()
0x103a: Call2 0xffe

0x103b: Pop(0)
0x103c: PushEmpty(string)
0x103d: Stack[-1] = "Neutral"
0x103e: Call2 0x11e1

0x103f: Pop(1)
0x1040: PushEmpty()
0x1041: Call2 0xff5

0x1042: Pop(0)
0x1043: Return(); Pop(0)

0x1044: PushEmpty()
0x1045: Push(Stack[-1])
0x1046: IF (Stack[-1] == 0) GOTO 0x104b; Pop(1)

0x1047: PushEmpty()
0x1048: Call2 0xff5

0x1049: Pop(0)
0x104a: GOTO 0x104f

0x104b: PushEmpty(string)
0x104c: Stack[-1] = "Neutral"
0x104d: Call2 0x11e1

0x104e: Pop(1)
0x104f: Return(); Pop(0)

0x1050: PushEmpty(bool, bool)
0x1051: @ IsOverrideActive(Stack[-1])
0x1052: Pop(0)
0x1053: Pop(0); Push((bool) Stack[-1] == 0)
0x1054: IF (Stack[-1] == 0) GOTO 0x106c; Pop(1)

0x1055: EventDisable(0)
0x1056: PushEmpty()
0x1057: Call2 0x10b4

0x1058: Pop(0)
0x1059: PushEmpty(bool, object)
0x105a: Stack[-1] = Stack[-5]
0x105b: Call2 0x10f4

0x105c: Pop(2)
0x105d: EventEnable(0)
0x105e: PushEmpty(object)
0x105f: Stack[-1] = Stack[-4]
0x1060: Call2 0x1641

0x1061: Pop(1)
0x1062: PushEmpty(string)
0x1063: Stack[-1] = "Neutral"
0x1064: Call2 0x11e1

0x1065: Pop(1)
0x1066: PushEmpty()
0x1067: Call2 0xffe

0x1068: Pop(0)
0x1069: PushEmpty()
0x106a: Call2 0xff5

0x106b: Pop(0)
0x106c: Return(); Pop(2)

0x106d: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x106e: @ WaitForAnimEnd()
0x106f: Pop(0)
0x1070: PushEmpty(bool)
0x1071: Call2 0x10fd

0x1072: Pop(0)
0x1073: Pop(1); Push((bool) Stack[-1] == 0)
0x1074: IF (Stack[-1] == 0) GOTO 0x1076; Pop(1)

0x1075: Return(); Pop(12)

0x1076: PushEmpty(int)
0x1077: Call2 0x12bd

0x1078: Stack[-7] = Stack[-1]
0x1079: Pop(1)
0x107a: Stack[-5] = (int) 0
0x107b: PushEmpty(bool)
0x107c: Stack[-1] = (bool) 0
0x107d: Push((int) 5)
0x107e: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x107f: IF (Stack[-1] == 0) GOTO 0x1085; Pop(1)

0x1080: PushEmpty(bool)
0x1081: Call2 0x10fd

0x1082: Pop(0)
0x1083: IF (Stack[-1] == 0) GOTO 0x1085; Pop(1)

0x1084: Stack[-1] = (bool) 1
0x1085: IF (Stack[-1] == 0) GOTO 0x10af; Pop(1)

0x1086: Pop(0); Push((bool) Stack[-6] == 0)
0x1087: IF (Stack[-1] == 0) GOTO 0x108f; Pop(1)

0x1088: Push((int) 3)
0x1089: @ Sleep(Stack[-1], Stack[-5])
0x108a: Pop(1)
0x108b: Pop(0); Push((bool) Stack[-4] == 0)
0x108c: IF (Stack[-1] == 0) GOTO 0x108e; Pop(1)

0x108d: GOTO 0x10af

0x108e: GOTO 0x10a4

0x108f: @ irand(Stack[-3], Stack[-6])
0x1090: Pop(0)
0x1091: Push((int) 5)
0x1092: @ irand(Stack[-3], Stack[-1])
0x1093: Pop(1)
0x1094: Push((int) 0)
0x1095: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x1096: IF (Stack[-1] == 0) GOTO 0x1098; Pop(1)

0x1097: Stack[-3] = (int) 0
0x1098: Push("all")
0x1099: PushEmpty(string, int)
0x109a: Stack[-1] = Stack[-6]
0x109b: Call2 0x12b6

0x109c: Pop(1)
0x109d: @ PlayAnimation(Stack[-2], Stack[-1])
0x109e: Pop(2)
0x109f: @ WaitForAnimEnd(Stack[-1])
0x10a0: Pop(0)
0x10a1: Pop(0); Push((bool) Stack[-1] == 0)
0x10a2: IF (Stack[-1] == 0) GOTO 0x10a4; Pop(1)

0x10a3: GOTO 0x10af

0x10a4: PushEmpty(bool)
0x10a5: Call2 0x10b2

0x10a6: Pop(0)
0x10a7: Pop(1); Push((bool) Stack[-1] == 0)
0x10a8: IF (Stack[-1] == 0) GOTO 0x10aa; Pop(1)

0x10a9: GOTO 0x10af

0x10aa: @ ResetAAS()
0x10ab: Pop(0)
0x10ac: Push((int) 1)
0x10ad: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x10ae: GOTO 0x107b

0x10af: @ ResetAAS()
0x10b0: Pop(0)
0x10b1: Return(); Pop(12)

0x10b2: Stack[-1] = (bool) 1
0x10b3: Return(); Pop(0)

0x10b4: @ StopAnimation()
0x10b5: Pop(0)
0x10b6: @ StopGroup0()
0x10b7: Pop(0)
0x10b8: Return(); Pop(0)

0x10b9: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x10ba: @ GetPosition(Stack[-3])
0x10bb: Pop(0)
0x10bc: @@ GetPosition(Stack[-2])
0x10bd: Pop(0)
0x10be: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x10bf: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x10c0: Return(); Pop(6)

0x10c1: PushEmpty(bool, bool)
0x10c2: Push("HasProperty")
0x10c3: Push((int) 2)
0x10c4: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x10c5: Pop(1); Push((bool) Stack[-1] == 0)
0x10c6: IF (Stack[-1] == 0) GOTO 0x10c9; Pop(1)

0x10c7: Stack[-5] = (bool) 0
0x10c8: Return(); Pop(2)

0x10c9: @@ HasProperty(Stack[-3], Stack[-1])
0x10ca: Pop(0)
0x10cb: Stack[-5] = Stack[-1]
0x10cc: Return(); Pop(2)

0x10cd: PushEmpty(float, float)
0x10ce: PushEmpty(bool, object, string)
0x10cf: Stack[-2] = Stack[-10]
0x10d0: Stack[-1] = Stack[-9]
0x10d1: Call2 0x10c1

0x10d2: Pop(2)
0x10d3: Pop(1); Push((bool) Stack[-1] == 0)
0x10d4: IF (Stack[-1] == 0) GOTO 0x10d7; Pop(1)

0x10d5: Stack[-8] = (bool) 0
0x10d6: Return(); Pop(2)

0x10d7: @@ GetProperty(Stack[-6], Stack[-1])
0x10d8: Pop(0)
0x10d9: PushEmpty(float, float, float, float)
0x10da: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x10db: Stack[-2] = Stack[-8]
0x10dc: Stack[-1] = Stack[-7]
0x10dd: Call2 0x1226

0x10de: Pop(3)
0x10df: @@ SetProperty(Stack[-7], Stack[-1])
0x10e0: Pop(1)
0x10e1: Stack[-8] = (bool) 1
0x10e2: Return(); Pop(2)

0x10e3: PushEmpty(int, int)
0x10e4: @@ GetProperty(Stack[-4], Stack[-1])
0x10e5: Pop(0)
0x10e6: Pop(0); Push(Stack[-1] + Stack[-3]);
0x10e7: @@ SetProperty(Stack[-5], Stack[-1])
0x10e8: Pop(1)
0x10e9: Return(); Pop(2)

0x10ea: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x10eb: @ GetPosition(Stack[-3])
0x10ec: Pop(0)
0x10ed: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x10ee: Push(CvectorIndex(Stack[-2], 0))
0x10ef: Push(CvectorIndex(Stack[-3], 2))
0x10f0: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x10f1: Pop(2)
0x10f2: Stack[-8] = Stack[-1]
0x10f3: Return(); Pop(6)

0x10f4: PushEmpty(cvector, cvector)
0x10f5: @@ GetPosition(Stack[-1])
0x10f6: Pop(0)
0x10f7: PushEmpty(bool, cvector)
0x10f8: Stack[-1] = Stack[-3]
0x10f9: Call2 0x10ea

0x10fa: Stack[-6] = Stack[-2]
0x10fb: Pop(2)
0x10fc: Return(); Pop(2)

0x10fd: PushEmpty(bool, bool)
0x10fe: @ IsLoaded(Stack[-1])
0x10ff: Pop(0)
0x1100: Stack[-3] = Stack[-1]
0x1101: Return(); Pop(2)

0x1102: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1103: @@ GetPosition(Stack[-8])
0x1104: Pop(0)
0x1105: @@ GetEyesHeight(Stack[-9])
0x1106: Pop(0)
0x1107: Push(CvectorIndex(Stack[-8], 1))
0x1108: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1109: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x110a: @ GetPosition(Stack[-7])
0x110b: Pop(0)
0x110c: @ GetEyesHeight(Stack[-9])
0x110d: Pop(0)
0x110e: Push(CvectorIndex(Stack[-7], 1))
0x110f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1110: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1111: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1112: Push(CvectorIndex(Stack[-6], 1))
0x1113: Stack[-1] = (int) 0
0x1114: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1115: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1116: Pop(1); Push(Sqrt(Stack[-1]))
0x1117: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1118: Stack[-5] = -Stack[-6]; Pop(0);
0x1119: Pop(0); Push(Stack[-6] * Stack[-19]);
0x111a: PushEmpty(cvector, cvector)
0x111b: Push(CVector(0.0, 1.0, 0.0))
0x111c: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x111d: Call2 0x121c

0x111e: Pop(1)
0x111f: Push((int) 25)
0x1120: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1121: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1122: Push(CVector(0.0, 10.0, 0.0))
0x1123: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1124: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1125: @ IsOverrideActive(Stack[-2])
0x1126: Pop(0)
0x1127: Push(Stack[-2])
0x1128: IF (Stack[-1] == 0) GOTO 0x112b; Pop(1)

0x1129: Stack[-21] = (bool) 0
0x112a: Return(); Pop(18)

0x112b: @ StopWorld()
0x112c: Pop(0)
0x112d: @ CameraTransit(Stack[-3], Stack[-5])
0x112e: Pop(0)
0x112f: Push(CvectorIndex(Stack[-4], 0))
0x1130: Push(CvectorIndex(Stack[-5], 2))
0x1131: @ Rotate(Stack[-2], Stack[-1])
0x1132: Pop(2)
0x1133: PushEmpty(bool)
0x1134: Call2 0x12d6

0x1135: Pop(0)
0x1136: IF (Stack[-1] == 0) GOTO 0x1138; Pop(1)

0x1137: GOTO 0x1140

0x1138: Push("head")
0x1139: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x113a: Pop(1)
0x113b: Push(Stack[-1])
0x113c: IF (Stack[-1] == 0) GOTO 0x1140; Pop(1)

0x113d: Push("head")
0x113e: @ LookAsyncCamera(Stack[-1])
0x113f: Pop(1)
0x1140: @ CameraWaitForPlayFinish()
0x1141: Pop(0)
0x1142: @ ResumeWorld()
0x1143: Pop(0)
0x1144: Stack[-21] = (bool) 1
0x1145: Return(); Pop(18)

0x1146: PushEmpty(bool, bool)
0x1147: @ CameraSwitchToNormal()
0x1148: Pop(0)
0x1149: PushEmpty(bool)
0x114a: Call2 0x12d6

0x114b: Pop(0)
0x114c: IF (Stack[-1] == 0) GOTO 0x114e; Pop(1)

0x114d: GOTO 0x1156

0x114e: Push("head")
0x114f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1150: Pop(1)
0x1151: Push(Stack[-1])
0x1152: IF (Stack[-1] == 0) GOTO 0x1156; Pop(1)

0x1153: Push("head")
0x1154: @ UnlookAsync(Stack[-1])
0x1155: Pop(1)
0x1156: Return(); Pop(2)

0x1157: PushEmpty(int, int, int, int)
0x1158: Push("voice_common")
0x1159: @ GetVariable(Stack[-1], Stack[-3])
0x115a: Pop(1)
0x115b: Push(Stack[-2])
0x115c: IF (Stack[-1] == 0) GOTO 0x117d; Pop(1)

0x115d: PushEmpty(bool, object)
0x115e: Stack[-1] = Stack[-7]
0x115f: Call2 0x1191

0x1160: Pop(1)
0x1161: Pop(1); Push((bool) Stack[-1] == 0)
0x1162: IF (Stack[-1] == 0) GOTO 0x116b; Pop(1)

0x1163: PushEmpty(bool, object)
0x1164: Stack[-1] = Stack[-7]
0x1165: Call2 0x11b6

0x1166: Pop(1)
0x1167: Pop(1); Push((bool) Stack[-1] == 0)
0x1168: IF (Stack[-1] == 0) GOTO 0x116b; Pop(1)

0x1169: Stack[-6] = (bool) 0
0x116a: Return(); Pop(4)

0x116b: Push((int) 2)
0x116c: @ irand(Stack[-2], Stack[-1])
0x116d: Pop(1)
0x116e: Push(Stack[-1])
0x116f: IF (Stack[-1] == 0) GOTO 0x1178; Pop(1)

0x1170: Push("voice_common")
0x1171: Push((int) 1)
0x1172: Pop(1); Push(Stack[-4] + Stack[-1]);
0x1173: Push((int) 3)
0x1174: Pop(2); Push(Stack[-2] % Stack[-1]);
0x1175: @ SetVariable(Stack[-2], Stack[-1])
0x1176: Pop(2)
0x1177: GOTO 0x117c

0x1178: Push("voice_common")
0x1179: Push((int) 0)
0x117a: @ SetVariable(Stack[-2], Stack[-1])
0x117b: Pop(2)
0x117c: GOTO 0x118f

0x117d: PushEmpty(bool, object)
0x117e: Stack[-1] = Stack[-7]
0x117f: Call2 0x11b6

0x1180: Pop(1)
0x1181: Pop(1); Push((bool) Stack[-1] == 0)
0x1182: IF (Stack[-1] == 0) GOTO 0x118b; Pop(1)

0x1183: PushEmpty(bool, object)
0x1184: Stack[-1] = Stack[-7]
0x1185: Call2 0x1191

0x1186: Pop(1)
0x1187: Pop(1); Push((bool) Stack[-1] == 0)
0x1188: IF (Stack[-1] == 0) GOTO 0x118b; Pop(1)

0x1189: Stack[-6] = (bool) 0
0x118a: Return(); Pop(4)

0x118b: Push("voice_common")
0x118c: Push((int) 1)
0x118d: @ SetVariable(Stack[-2], Stack[-1])
0x118e: Pop(2)
0x118f: Stack[-6] = (bool) 1
0x1190: Return(); Pop(4)

0x1191: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x1192: Stack[-5] = "c"
0x1193: Stack[-4] = (int) 0
0x1194: Push((int) 1)
0x1195: IF (Stack[-1] == 0) GOTO 0x11a1; Pop(1)

0x1196: Push((int) 1)
0x1197: Pop(1); Push(Stack[-5] + Stack[-1]);
0x1198: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1199: @@ HasProperty(Stack[-1], Stack[-4])
0x119a: Pop(1)
0x119b: Pop(0); Push((bool) Stack[-3] == 0)
0x119c: IF (Stack[-1] == 0) GOTO 0x119e; Pop(1)

0x119d: GOTO 0x11a1

0x119e: Push((int) 1)
0x119f: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x11a0: GOTO 0x1194

0x11a1: Pop(0); Push((bool) Stack[-4] == 0)
0x11a2: IF (Stack[-1] == 0) GOTO 0x11a5; Pop(1)

0x11a3: Stack[-12] = (bool) 0
0x11a4: Return(); Pop(10)

0x11a5: Stack[-2] = (int) 0
0x11a6: Push((int) 1)
0x11a7: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x11a8: IF (Stack[-1] == 0) GOTO 0x11ab; Pop(1)

0x11a9: @ irand(Stack[-2], Stack[-4])
0x11aa: Pop(0)
0x11ab: Push((int) 1)
0x11ac: Pop(1); Push(Stack[-3] + Stack[-1]);
0x11ad: Pop(1); Push(Stack[-6] + Stack[-1]);
0x11ae: @@ GetProperty(Stack[-1], Stack[-2])
0x11af: Pop(1)
0x11b0: PushEmpty(bool, string)
0x11b1: Stack[-1] = Stack[-3]
0x11b2: Call2 0x1200

0x11b3: Stack[-14] = Stack[-2]
0x11b4: Pop(2)
0x11b5: Return(); Pop(10)

0x11b6: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x11b7: Push("d")
0x11b8: PushEmpty(int)
0x11b9: Call2 0x12a7

0x11ba: Pop(0)
0x11bb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x11bc: Push("m")
0x11bd: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x11be: Stack[-4] = (int) 0
0x11bf: Push((int) 1)
0x11c0: IF (Stack[-1] == 0) GOTO 0x11cc; Pop(1)

0x11c1: Push((int) 1)
0x11c2: Pop(1); Push(Stack[-5] + Stack[-1]);
0x11c3: Pop(1); Push(Stack[-6] + Stack[-1]);
0x11c4: @@ HasProperty(Stack[-1], Stack[-4])
0x11c5: Pop(1)
0x11c6: Pop(0); Push((bool) Stack[-3] == 0)
0x11c7: IF (Stack[-1] == 0) GOTO 0x11c9; Pop(1)

0x11c8: GOTO 0x11cc

0x11c9: Push((int) 1)
0x11ca: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x11cb: GOTO 0x11bf

0x11cc: Pop(0); Push((bool) Stack[-4] == 0)
0x11cd: IF (Stack[-1] == 0) GOTO 0x11d0; Pop(1)

0x11ce: Stack[-12] = (bool) 0
0x11cf: Return(); Pop(10)

0x11d0: Stack[-2] = (int) 0
0x11d1: Push((int) 1)
0x11d2: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x11d3: IF (Stack[-1] == 0) GOTO 0x11d6; Pop(1)

0x11d4: @ irand(Stack[-2], Stack[-4])
0x11d5: Pop(0)
0x11d6: Push((int) 1)
0x11d7: Pop(1); Push(Stack[-3] + Stack[-1]);
0x11d8: Pop(1); Push(Stack[-6] + Stack[-1]);
0x11d9: @@ GetProperty(Stack[-1], Stack[-2])
0x11da: Pop(1)
0x11db: PushEmpty(bool, string)
0x11dc: Stack[-1] = Stack[-3]
0x11dd: Call2 0x1200

0x11de: Stack[-14] = Stack[-2]
0x11df: Pop(2)
0x11e0: Return(); Pop(10)

0x11e1: PushEmpty(bool, float, float, bool, float, float)
0x11e2: @ lshHasAnimation(Stack[-3], Stack[-7])
0x11e3: Pop(0)
0x11e4: Push(Stack[-3])
0x11e5: IF (Stack[-1] == 0) GOTO 0x11ec; Pop(1)

0x11e6: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x11e7: Pop(0)
0x11e8: Push((bool) 0)
0x11e9: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x11ea: Pop(1)
0x11eb: GOTO 0x11f0

0x11ec: Push("Can't find lsh animation : ")
0x11ed: Pop(1); Push(Stack[-1] + Stack[-8]);
0x11ee: @ Trace(Stack[-1])
0x11ef: Pop(1)
0x11f0: Return(); Pop(6)

0x11f1: PushEmpty(bool, float, float, bool, float, float)
0x11f2: @ lshHasAnimation(Stack[-3], Stack[-8])
0x11f3: Pop(0)
0x11f4: Push(Stack[-3])
0x11f5: IF (Stack[-1] == 0) GOTO 0x11fb; Pop(1)

0x11f6: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x11f7: Pop(0)
0x11f8: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x11f9: Pop(0)
0x11fa: GOTO 0x11ff

0x11fb: Push("Can't find lsh animation : ")
0x11fc: Pop(1); Push(Stack[-1] + Stack[-9]);
0x11fd: @ Trace(Stack[-1])
0x11fe: Pop(1)
0x11ff: Return(); Pop(6)

0x1200: PushEmpty(bool, bool)
0x1201: PushEmpty(bool)
0x1202: Call2 0x12d6

0x1203: Pop(0)
0x1204: IF (Stack[-1] == 0) GOTO 0x120d; Pop(1)

0x1205: @ lshHasSpeech(Stack[-1], Stack[-3])
0x1206: Pop(0)
0x1207: Push(Stack[-1])
0x1208: IF (Stack[-1] == 0) GOTO 0x120d; Pop(1)

0x1209: @ lshPlaySpeech(Stack[-3])
0x120a: Pop(0)
0x120b: Stack[-4] = (bool) 1
0x120c: Return(); Pop(2)

0x120d: Stack[-4] = (bool) 0
0x120e: Return(); Pop(2)

0x120f: PushEmpty(bool)
0x1210: Call2 0x12d6

0x1211: Pop(0)
0x1212: IF (Stack[-1] == 0) GOTO 0x1215; Pop(1)

0x1213: @ lshStopSpeech()
0x1214: Pop(0)
0x1215: Return(); Pop(0)

0x1216: PushEmpty(object, object)
0x1217: @ self(Stack[-1])
0x1218: Pop(0)
0x1219: Stack[-3] = Stack[-1]
0x121a: Return(); Pop(2)

0x121b: Stack[-1] = 0
0x121c: PushEmpty(float, float)
0x121d: Pop(0); Push(Stack[-3] | Stack[-3]);
0x121e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x121f: Push((float)0.0)
0x1220: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1221: IF (Stack[-1] == 0) GOTO 0x1224; Pop(1)

0x1222: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x1223: Return(); Pop(2)

0x1224: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x1225: Return(); Pop(2)

0x1226: PushEmpty()
0x1227: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x1228: IF (Stack[-1] == 0) GOTO 0x122b; Pop(1)

0x1229: Stack[-4] = Stack[-2]
0x122a: Return(); Pop(0)

0x122b: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x122c: IF (Stack[-1] == 0) GOTO 0x122f; Pop(1)

0x122d: Stack[-4] = Stack[-1]
0x122e: Return(); Pop(0)

0x122f: Stack[-4] = Stack[-3]
0x1230: Return(); Pop(0)

0x1231: PushEmpty(int, int)
0x1232: @ GetVariable(Stack[-3], Stack[-1])
0x1233: Pop(0)
0x1234: Stack[-4] = Stack[-1]
0x1235: Return(); Pop(2)

0x1236: PushEmpty(object, object)
0x1237: @ CreateIntVector(Stack[-1])
0x1238: Pop(0)
0x1239: @@ add(Stack[-4])
0x123a: Pop(0)
0x123b: @@ add(Stack[-3])
0x123c: Pop(0)
0x123d: Push((int) 3)
0x123e: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x123f: Pop(1)
0x1240: Return(); Pop(2)

0x1241: Stack[-1] = 0
0x1242: PushEmpty(int, int)
0x1243: PushEmpty(object, string, int)
0x1244: Stack[-3] = Stack[-7]
0x1245: Stack[-2] = "money"
0x1246: Stack[-1] = Stack[-6]
0x1247: Call2 0x10e3

0x1248: Pop(3)
0x1249: Push((int) 0)
0x124a: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x124b: IF (Stack[-1] == 0) GOTO 0x1254; Pop(1)

0x124c: Push("Money")
0x124d: @ GetInvItemByName(Stack[-2], Stack[-1])
0x124e: Pop(1)
0x124f: PushEmpty(int, int)
0x1250: Stack[-2] = Stack[-3]
0x1251: Stack[-1] = Stack[-5]
0x1252: Call2 0x1236

0x1253: Pop(2)
0x1254: Return(); Pop(2)

0x1255: PushEmpty(int, int, bool, int, int, bool)
0x1256: @@ GetItemID(Stack[-3])
0x1257: Pop(0)
0x1258: Push("Category")
0x1259: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x125a: Pop(1)
0x125b: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x125c: Pop(0)
0x125d: Pop(0); Push((bool) Stack[-1] == 0)
0x125e: IF (Stack[-1] == 0) GOTO 0x1262; Pop(1)

0x125f: @@ DropItems(Stack[-8], Stack[-7])
0x1260: Pop(0)
0x1261: GOTO 0x1267

0x1262: PushEmpty(int, int)
0x1263: Stack[-2] = Stack[-5]
0x1264: Stack[-1] = Stack[-9]
0x1265: Call2 0x1236

0x1266: Pop(2)
0x1267: Return(); Pop(6)

0x1268: PushEmpty(object, object)
0x1269: @ CreateInvItem(Stack[-1])
0x126a: Pop(0)
0x126b: @@ SetItemName(Stack[-4])
0x126c: Pop(0)
0x126d: PushEmpty(object, object, int)
0x126e: Stack[-3] = Stack[-8]
0x126f: Stack[-2] = Stack[-4]
0x1270: Stack[-1] = Stack[-6]
0x1271: Call2 0x1255

0x1272: Pop(3)
0x1273: Return(); Pop(2)

0x1274: Stack[-1] = 0
0x1275: PushEmpty()
0x1276: Pop(0); Push((bool) Stack[-2] == 0)
0x1277: IF (Stack[-1] == 0) GOTO 0x127a; Pop(1)

0x1278: Stack[-3] = (bool) 0
0x1279: Return(); Pop(0)

0x127a: Push((int) 0)
0x127b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x127c: IF (Stack[-1] == 0) GOTO 0x1281; Pop(1)

0x127d: Push((int) 8)
0x127e: @ SendWorldWndMessage(Stack[-1])
0x127f: Pop(1)
0x1280: GOTO 0x128a

0x1281: Push((int) 0)
0x1282: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1283: IF (Stack[-1] == 0) GOTO 0x1288; Pop(1)

0x1284: Push((int) 9)
0x1285: @ SendWorldWndMessage(Stack[-1])
0x1286: Pop(1)
0x1287: GOTO 0x128a

0x1288: Stack[-3] = (bool) 0
0x1289: Return(); Pop(0)

0x128a: PushEmpty(float)
0x128b: Stack[-1] = Stack[-2]
0x128c: Call2 0x1298

0x128d: Pop(1)
0x128e: PushEmpty(bool, object, string, float, float, float)
0x128f: Stack[-5] = Stack[-8]
0x1290: Stack[-4] = "reputation"
0x1291: Stack[-3] = Stack[-7]
0x1292: Stack[-2] = (int) 0
0x1293: Stack[-1] = (int) 1
0x1294: Call2 0x10cd

0x1295: Pop(6)
0x1296: Stack[-3] = (bool) 1
0x1297: Return(); Pop(0)

0x1298: PushEmpty(object, object)
0x1299: @ CreateFloatVector(Stack[-1])
0x129a: Pop(0)
0x129b: @@ add(Stack[-3])
0x129c: Pop(0)
0x129d: Push((int) 16)
0x129e: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x129f: Pop(1)
0x12a0: Return(); Pop(2)

0x12a1: Stack[-1] = 0
0x12a2: PushEmpty(float, float)
0x12a3: @ GetGameTime(Stack[-1])
0x12a4: Pop(0)
0x12a5: Stack[-3] = Stack[-1]
0x12a6: Return(); Pop(2)

0x12a7: PushEmpty(float, float)
0x12a8: @ GetGameTime(Stack[-1])
0x12a9: Pop(0)
0x12aa: Push((int) 1)
0x12ab: PushEmpty(int)
0x12ac: Push((int) 24)
0x12ad: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x12ae: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x12af: Return(); Pop(2)

0x12b0: PushEmpty()
0x12b1: PushEmpty(int)
0x12b2: Call2 0x12a7

0x12b3: Pop(0)
0x12b4: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x12b5: Return(); Pop(0)

0x12b6: PushEmpty(string, string)
0x12b7: Stack[-1] = "idle"
0x12b8: Push(Stack[-3])
0x12b9: IF (Stack[-1] == 0) GOTO 0x12bb; Pop(1)

0x12ba: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x12bb: Stack[-4] = Stack[-1]
0x12bc: Return(); Pop(2)

0x12bd: PushEmpty(int, bool, int, bool)
0x12be: Stack[-2] = (int) 0
0x12bf: Push("all")
0x12c0: PushEmpty(string, int)
0x12c1: Stack[-1] = Stack[-5]
0x12c2: Call2 0x12b6

0x12c3: Pop(1)
0x12c4: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x12c5: Pop(2)
0x12c6: Pop(0); Push((bool) Stack[-1] == 0)
0x12c7: IF (Stack[-1] == 0) GOTO 0x12c9; Pop(1)

0x12c8: GOTO 0x12cc

0x12c9: Push((int) 1)
0x12ca: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x12cb: GOTO 0x12bf

0x12cc: Stack[-5] = Stack[-2]
0x12cd: Return(); Pop(4)

0x12ce: Stack[-1] = (int) 515530
0x12cf: Return(); Pop(0)

0x12d0: Stack[-1] = (int) 502856
0x12d1: Return(); Pop(0)

0x12d2: Stack[-1] = "ui/NPC_Anna.png"
0x12d3: Return(); Pop(0)

0x12d4: Stack[-1] = "ui/NPC_Anna_b.png"
0x12d5: Return(); Pop(0)

0x12d6: Stack[-1] = (bool) 1
0x12d7: Return(); Pop(0)

0x12d8: PushEmpty()
0x12d9: PushEmpty(object, string, float)
0x12da: PushEmpty(object)
0x12db: Call2 0x15fe

0x12dc: Stack[-4] = Stack[-1]
0x12dd: Pop(1)
0x12de: Stack[-2] = "pt_map_notkin"
0x12df: Stack[-1] = (int) 2
0x12e0: Call2 0x160f

0x12e1: Pop(3)
0x12e2: PushEmpty(object)
0x12e3: Call2 0x15fe

0x12e4: Pop(0)
0x12e5: @@ ShowMap(Stack[-1])
0x12e6: Pop(1)
0x12e7: Return(); Pop(0)

0x12e8: PushEmpty()
0x12e9: PushEmpty(bool, object, float)
0x12ea: Stack[-2] = Stack[-5]
0x12eb: Stack[-1] = (float) 0.05
0x12ec: Call2 0x1275

0x12ed: Pop(3)
0x12ee: Return(); Pop(0)

0x12ef: PushEmpty()
0x12f0: Push("ook1Anna1")
0x12f1: Push((int) 1)
0x12f2: @ SetVariable(Stack[-2], Stack[-1])
0x12f3: Pop(2)
0x12f4: Return(); Pop(0)

0x12f5: PushEmpty()
0x12f6: Push("ook1Anna2")
0x12f7: Push((int) 1)
0x12f8: @ SetVariable(Stack[-2], Stack[-1])
0x12f9: Pop(2)
0x12fa: Return(); Pop(0)

0x12fb: PushEmpty()
0x12fc: Push("ook1Anna3")
0x12fd: Push((int) 1)
0x12fe: @ SetVariable(Stack[-2], Stack[-1])
0x12ff: Pop(2)
0x1300: Return(); Pop(0)

0x1301: PushEmpty(object, object)
0x1302: Push("k1q03")
0x1303: Push((int) 1)
0x1304: @ SetVariable(Stack[-2], Stack[-1])
0x1305: Pop(2)
0x1306: PushEmpty(object)
0x1307: Call2 0x15fe

0x1308: Stack[-2] = Stack[-1]
0x1309: Pop(1)
0x130a: Push("k1q03AnnaGotoNotkin")
0x130b: Push("pt_map_notkin")
0x130c: Push((int) 0)
0x130d: Push((int) 524799)
0x130e: PushEmpty(float)
0x130f: Call2 0x12a2

0x1310: Pop(0)
0x1311: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1312: Pop(5)
0x1313: PushEmpty()
0x1314: Call2 0x1553

0x1315: Pop(0)
0x1316: PushEmpty()
0x1317: Call2 0x1560

0x1318: Pop(0)
0x1319: Return(); Pop(2)

0x131a: Stack[-1] = 0
0x131b: PushEmpty()
0x131c: Push("k1q03")
0x131d: Push((int) 1000)
0x131e: @ SetVariable(Stack[-2], Stack[-1])
0x131f: Pop(2)
0x1320: PushEmpty()
0x1321: Call2 0x156d

0x1322: Pop(0)
0x1323: Return(); Pop(0)

0x1324: PushEmpty(object, object)
0x1325: Push("k2q04")
0x1326: Push((int) 2)
0x1327: @ SetVariable(Stack[-2], Stack[-1])
0x1328: Pop(2)
0x1329: PushEmpty(object)
0x132a: Call2 0x15fe

0x132b: Stack[-2] = Stack[-1]
0x132c: Pop(1)
0x132d: Push("k2q04AnnaGotoGatherer1")
0x132e: Push("pt_map_gatherer1")
0x132f: Push((int) 0)
0x1330: Push((int) 508643)
0x1331: PushEmpty(float)
0x1332: Call2 0x12a2

0x1333: Pop(0)
0x1334: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1335: Pop(5)
0x1336: Push("k2q04AnnaGotoGatherer2")
0x1337: Push("pt_map_gatherer2")
0x1338: Push((int) 0)
0x1339: Push((int) 539379)
0x133a: PushEmpty(float)
0x133b: Call2 0x12a2

0x133c: Pop(0)
0x133d: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x133e: Pop(5)
0x133f: Push("k2q04AnnaGotoGatherer3")
0x1340: Push("pt_map_gatherer3")
0x1341: Push((int) 0)
0x1342: Push((int) 508644)
0x1343: PushEmpty(float)
0x1344: Call2 0x12a2

0x1345: Pop(0)
0x1346: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1347: Pop(5)
0x1348: PushEmpty()
0x1349: Call2 0x1587

0x134a: Pop(0)
0x134b: Return(); Pop(2)

0x134c: Stack[-1] = 0
0x134d: PushEmpty()
0x134e: Push("k2q04")
0x134f: Push((int) 9)
0x1350: @ SetVariable(Stack[-2], Stack[-1])
0x1351: Pop(2)
0x1352: PushEmpty()
0x1353: Call2 0x157a

0x1354: Pop(0)
0x1355: Return(); Pop(0)

0x1356: PushEmpty()
0x1357: Push("alpha_pills 5 is given")
0x1358: @ Trace(Stack[-1])
0x1359: Pop(1)
0x135a: PushEmpty(object, string, int)
0x135b: Stack[-3] = Stack[-5]
0x135c: Stack[-2] = "alpha_pills"
0x135d: Stack[-1] = (int) 5
0x135e: Call2 0x1268

0x135f: Pop(3)
0x1360: Return(); Pop(0)

0x1361: PushEmpty()
0x1362: Push("beta_pills 5 is given")
0x1363: @ Trace(Stack[-1])
0x1364: Pop(1)
0x1365: PushEmpty(object, string, int)
0x1366: Stack[-3] = Stack[-5]
0x1367: Stack[-2] = "beta_pills"
0x1368: Stack[-1] = (int) 5
0x1369: Call2 0x1268

0x136a: Pop(3)
0x136b: Return(); Pop(0)

0x136c: PushEmpty(object, object)
0x136d: Push("k3q01")
0x136e: Push((int) 2)
0x136f: @ SetVariable(Stack[-2], Stack[-1])
0x1370: Pop(2)
0x1371: PushEmpty(object)
0x1372: Call2 0x15fe

0x1373: Stack[-2] = Stack[-1]
0x1374: Pop(1)
0x1375: Push("k3q01AnnaGotoMladVlad")
0x1376: Push("pt_map_mladvlad")
0x1377: Push((int) 1)
0x1378: Push((int) 525454)
0x1379: PushEmpty(float)
0x137a: Call2 0x12a2

0x137b: Pop(0)
0x137c: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x137d: Pop(5)
0x137e: Push("k3q01AnnaGotoKapella")
0x137f: Push("pt_map_kapella")
0x1380: Push((int) 1)
0x1381: Push((int) 525455)
0x1382: PushEmpty(float)
0x1383: Call2 0x12a2

0x1384: Pop(0)
0x1385: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1386: Pop(5)
0x1387: PushEmpty()
0x1388: Call2 0x15a1

0x1389: Pop(0)
0x138a: Return(); Pop(2)

0x138b: Stack[-1] = 0
0x138c: PushEmpty()
0x138d: Push("k3q01")
0x138e: Push((int) 3)
0x138f: @ SetVariable(Stack[-2], Stack[-1])
0x1390: Pop(2)
0x1391: PushEmpty()
0x1392: Call2 0x1594

0x1393: Pop(0)
0x1394: Return(); Pop(0)

0x1395: PushEmpty()
0x1396: Push("ook3Anna1")
0x1397: Push((int) 1)
0x1398: @ SetVariable(Stack[-2], Stack[-1])
0x1399: Pop(2)
0x139a: Return(); Pop(0)

0x139b: PushEmpty(object, object)
0x139c: Push("k3q03")
0x139d: Push((int) 1)
0x139e: @ SetVariable(Stack[-2], Stack[-1])
0x139f: Pop(2)
0x13a0: PushEmpty(object)
0x13a1: Call2 0x15fe

0x13a2: Stack[-2] = Stack[-1]
0x13a3: Pop(1)
0x13a4: Push("k3q03AnnaGotoEva")
0x13a5: Push("pt_map_eva")
0x13a6: Push((int) 0)
0x13a7: Push((int) 525615)
0x13a8: PushEmpty(float)
0x13a9: Call2 0x12a2

0x13aa: Pop(0)
0x13ab: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x13ac: Pop(5)
0x13ad: PushEmpty()
0x13ae: Call2 0x15ae

0x13af: Pop(0)
0x13b0: PushEmpty()
0x13b1: Call2 0x15bb

0x13b2: Pop(0)
0x13b3: Return(); Pop(2)

0x13b4: Stack[-1] = 0
0x13b5: PushEmpty()
0x13b6: Push("ook6Anna1")
0x13b7: Push((int) 1)
0x13b8: @ SetVariable(Stack[-2], Stack[-1])
0x13b9: Pop(2)
0x13ba: Return(); Pop(0)

0x13bb: PushEmpty()
0x13bc: PushEmpty()
0x13bd: Call2 0x15c8

0x13be: Pop(0)
0x13bf: Return(); Pop(0)

0x13c0: PushEmpty(int, int)
0x13c1: Push("k11q01SoulCount")
0x13c2: @ GetVariable(Stack[-1], Stack[-2])
0x13c3: Pop(1)
0x13c4: Push((int) 1)
0x13c5: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x13c6: Push("k11q01SoulCount")
0x13c7: @ SetVariable(Stack[-1], Stack[-2])
0x13c8: Pop(1)
0x13c9: Push((int) 2)
0x13ca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13cb: IF (Stack[-1] == 0) GOTO 0x13d0; Pop(1)

0x13cc: PushEmpty()
0x13cd: Call2 0x1546

0x13ce: Pop(0)
0x13cf: GOTO 0x13f2

0x13d0: Push((int) 3)
0x13d1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13d2: IF (Stack[-1] == 0) GOTO 0x13d7; Pop(1)

0x13d3: PushEmpty()
0x13d4: Call2 0x1539

0x13d5: Pop(0)
0x13d6: GOTO 0x13f2

0x13d7: Push((int) 4)
0x13d8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13d9: IF (Stack[-1] == 0) GOTO 0x13de; Pop(1)

0x13da: PushEmpty()
0x13db: Call2 0x152c

0x13dc: Pop(0)
0x13dd: GOTO 0x13f2

0x13de: Push((int) 5)
0x13df: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13e0: IF (Stack[-1] == 0) GOTO 0x13e5; Pop(1)

0x13e1: PushEmpty()
0x13e2: Call2 0x151f

0x13e3: Pop(0)
0x13e4: GOTO 0x13f2

0x13e5: Push((int) 6)
0x13e6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13e7: IF (Stack[-1] == 0) GOTO 0x13ec; Pop(1)

0x13e8: PushEmpty()
0x13e9: Call2 0x1512

0x13ea: Pop(0)
0x13eb: GOTO 0x13f2

0x13ec: Push((int) 7)
0x13ed: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13ee: IF (Stack[-1] == 0) GOTO 0x13f2; Pop(1)

0x13ef: PushEmpty()
0x13f0: Call2 0x1505

0x13f1: Pop(0)
0x13f2: Return(); Pop(2)

0x13f3: PushEmpty()
0x13f4: Push("ook11Anna1")
0x13f5: Push((int) 1)
0x13f6: @ SetVariable(Stack[-2], Stack[-1])
0x13f7: Pop(2)
0x13f8: Return(); Pop(0)

0x13f9: PushEmpty()
0x13fa: Push("playsound")
0x13fb: Push("givemoney")
0x13fc: @ TriggerWorld(Stack[-2], Stack[-1])
0x13fd: Pop(2)
0x13fe: Return(); Pop(0)

0x13ff: PushEmpty()
0x1400: Push("playsound")
0x1401: Push("giveitem")
0x1402: @ TriggerWorld(Stack[-2], Stack[-1])
0x1403: Pop(2)
0x1404: Return(); Pop(0)

0x1405: PushEmpty()
0x1406: Push("money 1500 is given")
0x1407: @ Trace(Stack[-1])
0x1408: Pop(1)
0x1409: PushEmpty(object, int)
0x140a: Stack[-2] = Stack[-4]
0x140b: Stack[-1] = (int) 1500
0x140c: Call2 0x1242

0x140d: Pop(2)
0x140e: Return(); Pop(0)

0x140f: PushEmpty()
0x1410: Push("playsound")
0x1411: Push("mapmark")
0x1412: @ TriggerWorld(Stack[-2], Stack[-1])
0x1413: Pop(2)
0x1414: Return(); Pop(0)

0x1415: PushEmpty()
0x1416: PushEmpty(int, string)
0x1417: Stack[-1] = "k1q01"
0x1418: Call2 0x1231

0x1419: Pop(1)
0x141a: Push((int) 4)
0x141b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x141c: IF (Stack[-1] == 0) GOTO 0x141f; Pop(1)

0x141d: Stack[-2] = (bool) 1
0x141e: Return(); Pop(0)

0x141f: Stack[-2] = (bool) 0
0x1420: Return(); Pop(0)

0x1421: PushEmpty()
0x1422: PushEmpty(int, string)
0x1423: Stack[-1] = "ook1Anna1"
0x1424: Call2 0x1231

0x1425: Pop(1)
0x1426: Push((int) 0)
0x1427: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1428: IF (Stack[-1] == 0) GOTO 0x142b; Pop(1)

0x1429: Stack[-2] = (bool) 1
0x142a: Return(); Pop(0)

0x142b: Stack[-2] = (bool) 0
0x142c: Return(); Pop(0)

0x142d: PushEmpty()
0x142e: PushEmpty(int, string)
0x142f: Stack[-1] = "k1q01Healed"
0x1430: Call2 0x1231

0x1431: Pop(1)
0x1432: Push((int) 0)
0x1433: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x1434: IF (Stack[-1] == 0) GOTO 0x1437; Pop(1)

0x1435: Stack[-2] = (bool) 1
0x1436: Return(); Pop(0)

0x1437: Stack[-2] = (bool) 0
0x1438: Return(); Pop(0)

0x1439: PushEmpty()
0x143a: PushEmpty(int, string)
0x143b: Stack[-1] = "ook1Anna2"
0x143c: Call2 0x1231

0x143d: Pop(1)
0x143e: Push((int) 0)
0x143f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1440: IF (Stack[-1] == 0) GOTO 0x1443; Pop(1)

0x1441: Stack[-2] = (bool) 1
0x1442: Return(); Pop(0)

0x1443: Stack[-2] = (bool) 0
0x1444: Return(); Pop(0)

0x1445: PushEmpty()
0x1446: PushEmpty(int, string)
0x1447: Stack[-1] = "ook1Anna3"
0x1448: Call2 0x1231

0x1449: Pop(1)
0x144a: Push((int) 0)
0x144b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x144c: IF (Stack[-1] == 0) GOTO 0x144f; Pop(1)

0x144d: Stack[-2] = (bool) 1
0x144e: Return(); Pop(0)

0x144f: Stack[-2] = (bool) 0
0x1450: Return(); Pop(0)

0x1451: PushEmpty()
0x1452: PushEmpty(int, string)
0x1453: Stack[-1] = "k1q03"
0x1454: Call2 0x1231

0x1455: Pop(1)
0x1456: Push((int) 0)
0x1457: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1458: IF (Stack[-1] == 0) GOTO 0x145b; Pop(1)

0x1459: Stack[-2] = (bool) 1
0x145a: Return(); Pop(0)

0x145b: Stack[-2] = (bool) 0
0x145c: Return(); Pop(0)

0x145d: PushEmpty()
0x145e: PushEmpty(int, string)
0x145f: Stack[-1] = "k1q03"
0x1460: Call2 0x1231

0x1461: Pop(1)
0x1462: Push((int) 2)
0x1463: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1464: IF (Stack[-1] == 0) GOTO 0x1467; Pop(1)

0x1465: Stack[-2] = (bool) 1
0x1466: Return(); Pop(0)

0x1467: Stack[-2] = (bool) 0
0x1468: Return(); Pop(0)

0x1469: PushEmpty()
0x146a: PushEmpty(int, string)
0x146b: Stack[-1] = "k2q04"
0x146c: Call2 0x1231

0x146d: Pop(1)
0x146e: Push((int) 1)
0x146f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1470: IF (Stack[-1] == 0) GOTO 0x1473; Pop(1)

0x1471: Stack[-2] = (bool) 1
0x1472: Return(); Pop(0)

0x1473: Stack[-2] = (bool) 0
0x1474: Return(); Pop(0)

0x1475: PushEmpty()
0x1476: PushEmpty(int, string)
0x1477: Stack[-1] = "k2q04"
0x1478: Call2 0x1231

0x1479: Pop(1)
0x147a: Push((int) 3)
0x147b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x147c: IF (Stack[-1] == 0) GOTO 0x147f; Pop(1)

0x147d: Stack[-2] = (bool) 1
0x147e: Return(); Pop(0)

0x147f: Stack[-2] = (bool) 0
0x1480: Return(); Pop(0)

0x1481: PushEmpty()
0x1482: PushEmpty(int, string)
0x1483: Stack[-1] = "k3q01"
0x1484: Call2 0x1231

0x1485: Pop(1)
0x1486: Push((int) 1)
0x1487: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1488: IF (Stack[-1] == 0) GOTO 0x148b; Pop(1)

0x1489: Stack[-2] = (bool) 1
0x148a: Return(); Pop(0)

0x148b: Stack[-2] = (bool) 0
0x148c: Return(); Pop(0)

0x148d: PushEmpty()
0x148e: PushEmpty(int, string)
0x148f: Stack[-1] = "k3q01"
0x1490: Call2 0x1231

0x1491: Pop(1)
0x1492: Push((int) 2)
0x1493: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1494: IF (Stack[-1] == 0) GOTO 0x1497; Pop(1)

0x1495: Stack[-2] = (bool) 1
0x1496: Return(); Pop(0)

0x1497: Stack[-2] = (bool) 0
0x1498: Return(); Pop(0)

0x1499: PushEmpty()
0x149a: PushEmpty(int, string)
0x149b: Stack[-1] = "k3q01KapellaAboutHan"
0x149c: Call2 0x1231

0x149d: Pop(1)
0x149e: Push((int) 0)
0x149f: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x14a0: IF (Stack[-1] == 0) GOTO 0x14a3; Pop(1)

0x14a1: Stack[-2] = (bool) 1
0x14a2: Return(); Pop(0)

0x14a3: Stack[-2] = (bool) 0
0x14a4: Return(); Pop(0)

0x14a5: PushEmpty()
0x14a6: PushEmpty(int, string)
0x14a7: Stack[-1] = "k3q01"
0x14a8: Call2 0x1231

0x14a9: Pop(1)
0x14aa: Push((int) 3)
0x14ab: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14ac: IF (Stack[-1] == 0) GOTO 0x14af; Pop(1)

0x14ad: Stack[-2] = (bool) 1
0x14ae: Return(); Pop(0)

0x14af: Stack[-2] = (bool) 0
0x14b0: Return(); Pop(0)

0x14b1: PushEmpty()
0x14b2: PushEmpty(int, string)
0x14b3: Stack[-1] = "ook3Anna1"
0x14b4: Call2 0x1231

0x14b5: Pop(1)
0x14b6: Push((int) 0)
0x14b7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14b8: IF (Stack[-1] == 0) GOTO 0x14bb; Pop(1)

0x14b9: Stack[-2] = (bool) 1
0x14ba: Return(); Pop(0)

0x14bb: Stack[-2] = (bool) 0
0x14bc: Return(); Pop(0)

0x14bd: PushEmpty()
0x14be: PushEmpty(int, string)
0x14bf: Stack[-1] = "k3q03"
0x14c0: Call2 0x1231

0x14c1: Pop(1)
0x14c2: Push((int) 0)
0x14c3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14c4: IF (Stack[-1] == 0) GOTO 0x14c7; Pop(1)

0x14c5: Stack[-2] = (bool) 1
0x14c6: Return(); Pop(0)

0x14c7: Stack[-2] = (bool) 0
0x14c8: Return(); Pop(0)

0x14c9: PushEmpty()
0x14ca: PushEmpty(int, string)
0x14cb: Stack[-1] = "k6q01"
0x14cc: Call2 0x1231

0x14cd: Pop(1)
0x14ce: Push((int) 2)
0x14cf: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14d0: IF (Stack[-1] == 0) GOTO 0x14d3; Pop(1)

0x14d1: Stack[-2] = (bool) 1
0x14d2: Return(); Pop(0)

0x14d3: Stack[-2] = (bool) 0
0x14d4: Return(); Pop(0)

0x14d5: PushEmpty()
0x14d6: PushEmpty(int, string)
0x14d7: Stack[-1] = "k6q01DankoPos"
0x14d8: Call2 0x1231

0x14d9: Pop(1)
0x14da: Push((int) 1)
0x14db: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x14dc: IF (Stack[-1] == 0) GOTO 0x14df; Pop(1)

0x14dd: Stack[-2] = (bool) 1
0x14de: Return(); Pop(0)

0x14df: Stack[-2] = (bool) 0
0x14e0: Return(); Pop(0)

0x14e1: PushEmpty()
0x14e2: PushEmpty(int, string)
0x14e3: Stack[-1] = "ook6Anna1"
0x14e4: Call2 0x1231

0x14e5: Pop(1)
0x14e6: Push((int) 0)
0x14e7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14e8: IF (Stack[-1] == 0) GOTO 0x14eb; Pop(1)

0x14e9: Stack[-2] = (bool) 1
0x14ea: Return(); Pop(0)

0x14eb: Stack[-2] = (bool) 0
0x14ec: Return(); Pop(0)

0x14ed: PushEmpty()
0x14ee: PushEmpty(int, string)
0x14ef: Stack[-1] = "k11q01"
0x14f0: Call2 0x1231

0x14f1: Pop(1)
0x14f2: Push((int) 9)
0x14f3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14f4: IF (Stack[-1] == 0) GOTO 0x14f7; Pop(1)

0x14f5: Stack[-2] = (bool) 1
0x14f6: Return(); Pop(0)

0x14f7: Stack[-2] = (bool) 0
0x14f8: Return(); Pop(0)

0x14f9: PushEmpty()
0x14fa: PushEmpty(int, string)
0x14fb: Stack[-1] = "ook11Anna1"
0x14fc: Call2 0x1231

0x14fd: Pop(1)
0x14fe: Push((int) 0)
0x14ff: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1500: IF (Stack[-1] == 0) GOTO 0x1503; Pop(1)

0x1501: Stack[-2] = (bool) 1
0x1502: Return(); Pop(0)

0x1503: Stack[-2] = (bool) 0
0x1504: Return(); Pop(0)

0x1505: PushEmpty(object, object)
0x1506: Push((int) 498)
0x1507: Push((int) 1)
0x1508: Push((int) 528065)
0x1509: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x150a: Pop(3)
0x150b: PushEmpty(bool, object, int)
0x150c: Stack[-2] = Stack[-4]
0x150d: Stack[-1] = (int) 480
0x150e: Call2 0x15e2

0x150f: Pop(3)
0x1510: Return(); Pop(2)

0x1511: Stack[-1] = 0
0x1512: PushEmpty(object, object)
0x1513: Push((int) 497)
0x1514: Push((int) 1)
0x1515: Push((int) 528064)
0x1516: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1517: Pop(3)
0x1518: PushEmpty(bool, object, int)
0x1519: Stack[-2] = Stack[-4]
0x151a: Stack[-1] = (int) 480
0x151b: Call2 0x15e2

0x151c: Pop(3)
0x151d: Return(); Pop(2)

0x151e: Stack[-1] = 0
0x151f: PushEmpty(object, object)
0x1520: Push((int) 496)
0x1521: Push((int) 1)
0x1522: Push((int) 528063)
0x1523: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1524: Pop(3)
0x1525: PushEmpty(bool, object, int)
0x1526: Stack[-2] = Stack[-4]
0x1527: Stack[-1] = (int) 480
0x1528: Call2 0x15e2

0x1529: Pop(3)
0x152a: Return(); Pop(2)

0x152b: Stack[-1] = 0
0x152c: PushEmpty(object, object)
0x152d: Push((int) 495)
0x152e: Push((int) 1)
0x152f: Push((int) 528062)
0x1530: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1531: Pop(3)
0x1532: PushEmpty(bool, object, int)
0x1533: Stack[-2] = Stack[-4]
0x1534: Stack[-1] = (int) 480
0x1535: Call2 0x15e2

0x1536: Pop(3)
0x1537: Return(); Pop(2)

0x1538: Stack[-1] = 0
0x1539: PushEmpty(object, object)
0x153a: Push((int) 494)
0x153b: Push((int) 1)
0x153c: Push((int) 528061)
0x153d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x153e: Pop(3)
0x153f: PushEmpty(bool, object, int)
0x1540: Stack[-2] = Stack[-4]
0x1541: Stack[-1] = (int) 480
0x1542: Call2 0x15e2

0x1543: Pop(3)
0x1544: Return(); Pop(2)

0x1545: Stack[-1] = 0
0x1546: PushEmpty(object, object)
0x1547: Push((int) 493)
0x1548: Push((int) 1)
0x1549: Push((int) 528060)
0x154a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x154b: Pop(3)
0x154c: PushEmpty(bool, object, int)
0x154d: Stack[-2] = Stack[-4]
0x154e: Stack[-1] = (int) 480
0x154f: Call2 0x15e2

0x1550: Pop(3)
0x1551: Return(); Pop(2)

0x1552: Stack[-1] = 0
0x1553: PushEmpty(object, object)
0x1554: Push((int) 333)
0x1555: Push((int) 2)
0x1556: Push((int) 524800)
0x1557: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1558: Pop(3)
0x1559: PushEmpty(bool, object, int)
0x155a: Stack[-2] = Stack[-4]
0x155b: Stack[-1] = (int) -1
0x155c: Call2 0x15e2

0x155d: Pop(3)
0x155e: Return(); Pop(2)

0x155f: Stack[-1] = 0
0x1560: PushEmpty(object, object)
0x1561: Push((int) 334)
0x1562: Push((int) 2)
0x1563: Push((int) 524801)
0x1564: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1565: Pop(3)
0x1566: PushEmpty(bool, object, int)
0x1567: Stack[-2] = Stack[-4]
0x1568: Stack[-1] = (int) 333
0x1569: Call2 0x15e2

0x156a: Pop(3)
0x156b: Return(); Pop(2)

0x156c: Stack[-1] = 0
0x156d: PushEmpty(object, object)
0x156e: Push((int) 336)
0x156f: Push((int) 2)
0x1570: Push((int) 524803)
0x1571: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1572: Pop(3)
0x1573: PushEmpty(bool, object, int)
0x1574: Stack[-2] = Stack[-4]
0x1575: Stack[-1] = (int) 333
0x1576: Call2 0x15e2

0x1577: Pop(3)
0x1578: Return(); Pop(2)

0x1579: Stack[-1] = 0
0x157a: PushEmpty(object, object)
0x157b: Push((int) 510)
0x157c: Push((int) 2)
0x157d: Push((int) 529709)
0x157e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x157f: Pop(3)
0x1580: PushEmpty(bool, object, int)
0x1581: Stack[-2] = Stack[-4]
0x1582: Stack[-1] = (int) 507
0x1583: Call2 0x15e2

0x1584: Pop(3)
0x1585: Return(); Pop(2)

0x1586: Stack[-1] = 0
0x1587: PushEmpty(object, object)
0x1588: Push((int) 509)
0x1589: Push((int) 2)
0x158a: Push((int) 529708)
0x158b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x158c: Pop(3)
0x158d: PushEmpty(bool, object, int)
0x158e: Stack[-2] = Stack[-4]
0x158f: Stack[-1] = (int) 507
0x1590: Call2 0x15e2

0x1591: Pop(3)
0x1592: Return(); Pop(2)

0x1593: Stack[-1] = 0
0x1594: PushEmpty(object, object)
0x1595: Push((int) 341)
0x1596: Push((int) 1)
0x1597: Push((int) 525450)
0x1598: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1599: Pop(3)
0x159a: PushEmpty(bool, object, int)
0x159b: Stack[-2] = Stack[-4]
0x159c: Stack[-1] = (int) 337
0x159d: Call2 0x15e2

0x159e: Pop(3)
0x159f: Return(); Pop(2)

0x15a0: Stack[-1] = 0
0x15a1: PushEmpty(object, object)
0x15a2: Push((int) 339)
0x15a3: Push((int) 1)
0x15a4: Push((int) 525448)
0x15a5: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15a6: Pop(3)
0x15a7: PushEmpty(bool, object, int)
0x15a8: Stack[-2] = Stack[-4]
0x15a9: Stack[-1] = (int) 337
0x15aa: Call2 0x15e2

0x15ab: Pop(3)
0x15ac: Return(); Pop(2)

0x15ad: Stack[-1] = 0
0x15ae: PushEmpty(object, object)
0x15af: Push((int) 350)
0x15b0: Push((int) 2)
0x15b1: Push((int) 525616)
0x15b2: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15b3: Pop(3)
0x15b4: PushEmpty(bool, object, int)
0x15b5: Stack[-2] = Stack[-4]
0x15b6: Stack[-1] = (int) -1
0x15b7: Call2 0x15e2

0x15b8: Pop(3)
0x15b9: Return(); Pop(2)

0x15ba: Stack[-1] = 0
0x15bb: PushEmpty(object, object)
0x15bc: Push((int) 351)
0x15bd: Push((int) 2)
0x15be: Push((int) 525617)
0x15bf: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15c0: Pop(3)
0x15c1: PushEmpty(bool, object, int)
0x15c2: Stack[-2] = Stack[-4]
0x15c3: Stack[-1] = (int) 350
0x15c4: Call2 0x15e2

0x15c5: Pop(3)
0x15c6: Return(); Pop(2)

0x15c7: Stack[-1] = 0
0x15c8: PushEmpty(object, object)
0x15c9: Push((int) 412)
0x15ca: Push((int) 1)
0x15cb: Push((int) 526113)
0x15cc: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15cd: Pop(3)
0x15ce: PushEmpty(bool, object, int)
0x15cf: Stack[-2] = Stack[-4]
0x15d0: Stack[-1] = (int) 408
0x15d1: Call2 0x15e2

0x15d2: Pop(3)
0x15d3: Return(); Pop(2)

0x15d4: Stack[-1] = 0
0x15d5: PushEmpty(object, object)
0x15d6: @ GetDiaryRoot(Stack[-1])
0x15d7: Pop(0)
0x15d8: Pop(0); Push((bool) Stack[-1] == 0)
0x15d9: IF (Stack[-1] == 0) GOTO 0x15df; Pop(1)

0x15da: Push("Can't retrieve diary root")
0x15db: @ Trace(Stack[-1])
0x15dc: Pop(1)
0x15dd: Stack[-3] = (bool) 0
0x15de: Return(); Pop(2)

0x15df: Stack[-3] = Stack[-1]
0x15e0: Return(); Pop(2)

0x15e1: Stack[-1] = 0
0x15e2: PushEmpty(object, object, int, object, object, int)
0x15e3: PushEmpty(object)
0x15e4: Call2 0x15d5

0x15e5: Stack[-4] = Stack[-1]
0x15e6: Pop(1)
0x15e7: @@ Find(Stack[-7], Stack[-2])
0x15e8: Pop(0)
0x15e9: Pop(0); Push((bool) Stack[-2] == 0)
0x15ea: IF (Stack[-1] == 0) GOTO 0x15f1; Pop(1)

0x15eb: Push("Can't find diary parent with id: ")
0x15ec: Pop(1); Push(Stack[-1] + Stack[-8]);
0x15ed: @ Trace(Stack[-1])
0x15ee: Pop(1)
0x15ef: Stack[-9] = (bool) 0
0x15f0: Return(); Pop(6)

0x15f1: @@ AddChild(Stack[-8])
0x15f2: Pop(0)
0x15f3: Push((int) 7)
0x15f4: @ SendWorldWndMessage(Stack[-1])
0x15f5: Pop(1)
0x15f6: @@ GetCategory(Stack[-1])
0x15f7: Pop(0)
0x15f8: @ SetDiarySection(Stack[-1])
0x15f9: Pop(0)
0x15fa: Stack[-9] = (bool) 0
0x15fb: Return(); Pop(6)

0x15fc: Stack[-2] = 0
0x15fd: Stack[-3] = 0
0x15fe: PushEmpty(object, object, object, object)
0x15ff: @ GetMainOutdoorScene(Stack[-2])
0x1600: Pop(0)
0x1601: Pop(0); Push((bool) Stack[-2] == 0)
0x1602: IF (Stack[-1] == 0) GOTO 0x1609; Pop(1)

0x1603: Push("Can't find main outdoor scene")
0x1604: @ Trace(Stack[-1])
0x1605: Pop(1)
0x1606: Stack[-1] = 0
0x1607: Stack[-5] = Stack[-1]
0x1608: Return(); Pop(4)

0x1609: @@ GetMap(Stack[-1])
0x160a: Pop(0)
0x160b: Stack[-5] = Stack[-1]
0x160c: Return(); Pop(4)

0x160d: Stack[-1] = 0
0x160e: Stack[-2] = 0
0x160f: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x1610: @ GetMainOutdoorScene(Stack[-2])
0x1611: Pop(0)
0x1612: Pop(0); Push((bool) Stack[-2] == 0)
0x1613: IF (Stack[-1] == 0) GOTO 0x1618; Pop(1)

0x1614: Push("Can't find main outdoor scene")
0x1615: @ Trace(Stack[-1])
0x1616: Pop(1)
0x1617: Return(); Pop(8)

0x1618: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x1619: Pop(0)
0x161a: Pop(0); Push((bool) Stack[-1] == 0)
0x161b: IF (Stack[-1] == 0) GOTO 0x1622; Pop(1)

0x161c: Push("Warning: outdoor scene locator ")
0x161d: Pop(1); Push(Stack[-1] + Stack[-11]);
0x161e: Push(" doesnt exist")
0x161f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1620: @ Trace(Stack[-1])
0x1621: Pop(1)
0x1622: @@ GetMap(Stack[-11])
0x1623: Pop(0)
0x1624: Pop(0); Push((bool) Stack[-11] == 0)
0x1625: IF (Stack[-1] == 0) GOTO 0x162a; Pop(1)

0x1626: Push("Can't find map")
0x1627: @ Trace(Stack[-1])
0x1628: Pop(1)
0x1629: Return(); Pop(8)

0x162a: Push(CvectorIndex(Stack[-4], 0))
0x162b: Push(CvectorIndex(Stack[-5], 2))
0x162c: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x162d: Pop(2)
0x162e: Return(); Pop(8)

0x162f: Stack[-2] = 0
0x1630: PushEmpty(int, int)
0x1631: Push("branch")
0x1632: @ GetVariable(Stack[-1], Stack[-2])
0x1633: Pop(1)
0x1634: Push((int) 0)
0x1635: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1636: IF (Stack[-1] == 0) GOTO 0x163a; Pop(1)

0x1637: Stack[-3] = (int) 1
0x1638: Return(); Pop(2)

0x1639: GOTO 0x163f

0x163a: Push((int) 1)
0x163b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x163c: IF (Stack[-1] == 0) GOTO 0x163f; Pop(1)

0x163d: Stack[-3] = (int) 2
0x163e: Return(); Pop(2)

0x163f: Stack[-3] = (int) 3
0x1640: Return(); Pop(2)

0x1641: PushEmpty()
0x1642: Push(GlobalVars[1])
0x1643: Pop(1); Push((bool) Stack[-1] == 0)
0x1644: IF (Stack[-1] == 0) GOTO 0x164e; Pop(1)

0x1645: PushEmpty(int, object)
0x1646: Stack[-1] = Stack[-3]
0x1647: Push(-2, 1); TaskCall(4)
0x1648: Call2 0x617

0x1649: Pop(-2, 1); TaskReturn
0x164a: Pop(2)
0x164b: Push(GlobalVars[1])
0x164c: Stack[-1] = (bool) 1
0x164d: GlobalVars[1] = Stack[-1]; Pop(1)
0x164e: PushEmpty(bool, int)
0x164f: Stack[-1] = (int) 1
0x1650: Call2 0x12b0

0x1651: Pop(1)
0x1652: IF (Stack[-1] == 0) GOTO 0x165a; Pop(1)

0x1653: PushEmpty(int, object)
0x1654: Stack[-1] = Stack[-3]
0x1655: Push(-2, 1); TaskCall(10)
0x1656: Call2 0x9b7

0x1657: Pop(-2, 1); TaskReturn
0x1658: Pop(2)
0x1659: Return(); Pop(0)

0x165a: PushEmpty(bool, int)
0x165b: Stack[-1] = (int) 2
0x165c: Call2 0x12b0

0x165d: Pop(1)
0x165e: IF (Stack[-1] == 0) GOTO 0x1666; Pop(1)

0x165f: PushEmpty(int, object)
0x1660: Stack[-1] = Stack[-3]
0x1661: Push(-2, 1); TaskCall(0)
0x1662: Call2 0x0

0x1663: Pop(-2, 1); TaskReturn
0x1664: Pop(2)
0x1665: Return(); Pop(0)

0x1666: PushEmpty(bool, int)
0x1667: Stack[-1] = (int) 3
0x1668: Call2 0x12b0

0x1669: Pop(1)
0x166a: IF (Stack[-1] == 0) GOTO 0x1672; Pop(1)

0x166b: PushEmpty(int, object)
0x166c: Stack[-1] = Stack[-3]
0x166d: Push(-2, 1); TaskCall(2)
0x166e: Call2 0x200

0x166f: Pop(-2, 1); TaskReturn
0x1670: Pop(2)
0x1671: Return(); Pop(0)

0x1672: PushEmpty(bool, int)
0x1673: Stack[-1] = (int) 6
0x1674: Call2 0x12b0

0x1675: Pop(1)
0x1676: IF (Stack[-1] == 0) GOTO 0x167e; Pop(1)

0x1677: PushEmpty(int, object)
0x1678: Stack[-1] = Stack[-3]
0x1679: Push(-2, 1); TaskCall(6)
0x167a: Call2 0x6f9

0x167b: Pop(-2, 1); TaskReturn
0x167c: Pop(2)
0x167d: Return(); Pop(0)

0x167e: PushEmpty(bool, int)
0x167f: Stack[-1] = (int) 11
0x1680: Call2 0x12b0

0x1681: Pop(1)
0x1682: IF (Stack[-1] == 0) GOTO 0x168a; Pop(1)

0x1683: PushEmpty(int, object)
0x1684: Stack[-1] = Stack[-3]
0x1685: Push(-2, 1); TaskCall(8)
0x1686: Call2 0x83d

0x1687: Pop(-2, 1); TaskReturn
0x1688: Pop(2)
0x1689: Return(); Pop(0)

0x168a: PushEmpty(bool, int)
0x168b: Stack[-1] = (int) 12
0x168c: Call2 0x12b0

0x168d: Pop(1)
0x168e: IF (Stack[-1] == 0) GOTO 0x1696; Pop(1)

0x168f: PushEmpty(int, object)
0x1690: Stack[-1] = Stack[-3]
0x1691: Push(-2, 1); TaskCall(12)
0x1692: Call2 0xd84

0x1693: Pop(-2, 1); TaskReturn
0x1694: Pop(2)
0x1695: Return(); Pop(0)

0x1696: PushEmpty(int, object)
0x1697: Stack[-1] = Stack[-3]
0x1698: Push(-2, 1); TaskCall(14)
0x1699: Call2 0xeeb

0x169a: Pop(-2, 1); TaskReturn
0x169b: Pop(2)
0x169c: Return(); Pop(0)


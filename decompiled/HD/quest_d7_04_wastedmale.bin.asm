GlobalVarCount = 1
	G_VAR_0 object 

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
	cleanup
	player
	head
	GetPosition
	GetEyesHeight
	Can't find lsh animation : 
	add
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	pt_gatherer2
	ShowMap
	d7q04
	d7q04WastedGotoGatherer
	AddMark
	quest_d7_04
	init_andrei
	Rifle is given
	Rifle
	durability
	SetProperty
	rifle ammo10 is given
	rifle_ammo
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
	ui/NPC_Citizen3.png
	ui/NPC_Citizen3_b.png

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
	rand (2 args)
	Sleep (2 args)
	RemoveActor (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	GetPosition (1 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)
	HasAnimation (3 args)

RunOp = 0x172
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa4 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x178 Vars = (object)
		EVENT_26 Op = 0x1a6 Vars = (string)
		EVENT_6 Op = 0x1ae Vars = ()
		EVENT_7 Op = 0x1ef Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x277

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x43c

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x43a

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x43e

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x440

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x411

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
0x2f: PushEmpty(object, object)
0x30: Stack[-2] = Stack[-11]
0x31: Stack[-1] = Stack[-6]
0x32: Push(-2, 4); TaskCall(1)
0x33: Call2 0x4a

0x34: Pop(-2, 4); TaskReturn
0x35: Pop(2)
0x36: @@ IsDialogEnd(Stack[-1])
0x37: Pop(0)
0x38: Pop(0); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: @ sync()
0x3b: Pop(0)
0x3c: @@ IsDialogEnd(Stack[-1])
0x3d: Pop(0)
0x3e: GOTO 0x38

0x3f: PushEmpty(object)
0x40: Stack[-1] = Stack[-10]
0x41: Call2 0x2bc

0x42: Pop(1)
0x43: @ StopDialog(Stack[-4])
0x44: Pop(0)
0x45: @@ GetReturnValue(Stack[-2])
0x46: Pop(0)
0x47: Stack[-10] = Stack[-2]
0x48: Return(); Pop(8)

0x49: Stack[-4] = 0
0x4a: PushEmpty()
0x4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e: Push((int) 1)
0x4f: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0x8e

0x53: Pop(1)
0x54: Push((int) 533203)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x39d

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) 533204)
0x5f: Push((int) 34725)
0x60: Push((int) 34724)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 533207)
0x64: Push((int) -1)
0x65: Push((int) 34727)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: Push((int) 535821)
0x69: Push((int) -1)
0x6a: Push((int) 37514)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: GOTO 0x70

0x6e: Return(); Pop(0)

0x6f: GOTO 0x4e

0x70: PushEmpty(bool)
0x71: Call2 0x442

0x72: Pop(0)
0x73: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x74: @ lshWaitForAnimEnd()
0x75: Pop(0)
0x76: Push( Stack[3 + Tasks[-1].StackPointer] )
0x77: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x78: GOTO 0x7e

0x79: PushEmpty(string)
0x7a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7b: Call2 0x2ce

0x7c: Pop(1)
0x7d: GOTO 0x74

0x7e: GOTO 0x8d

0x7f: Push("all")
0x80: Push("idle")
0x81: @ PlayAnimation(Stack[-2], Stack[-1])
0x82: Pop(2)
0x83: @ WaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: Push("all")
0x89: Push("idle")
0x8a: @ PlayAnimation(Stack[-2], Stack[-1])
0x8b: Pop(2)
0x8c: GOTO 0x83

0x8d: Return(); Pop(0)

0x8e: PushEmpty()
0x8f: PushEmpty(bool)
0x90: Call2 0x442

0x91: Pop(0)
0x92: Pop(1); Push((bool) Stack[-1] == 0)
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Return(); Pop(0)

0x95: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x96: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x97: Return(); Pop(0)

0x98: PushEmpty(string, bool)
0x99: Stack[-2] = Stack[-3]
0x9a: Push("")
0x9b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9c: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9d: Stack[-1] = (bool) 0
0x9e: GOTO 0xa0

0x9f: Stack[-1] = (bool) 1
0xa0: Call2 0x2de

0xa1: Pop(2)
0xa2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa3: Return(); Pop(0)

0xa4: PushEmpty()
0xa5: Push((int) 1)
0xa6: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0xa7: PushEmpty()
0xa8: Call2 0x2f8

0xa9: Pop(0)
0xaa: Push((int) 37513)
0xab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xac: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xad: PushEmpty(object, object)
0xae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb0: Call2 0x361

0xb1: Pop(2)
0xb2: PushEmpty(object, object)
0xb3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb5: Call2 0x351

0xb6: Pop(2)
0xb7: Push((int) 37516)
0xb8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xba: PushEmpty(object, object)
0xbb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbd: Call2 0x361

0xbe: Pop(2)
0xbf: PushEmpty(object, object)
0xc0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc2: Call2 0x351

0xc3: Pop(2)
0xc4: Push((int) 34726)
0xc5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc6: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xc7: PushEmpty(object, object)
0xc8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xca: Call2 0x361

0xcb: Pop(2)
0xcc: PushEmpty(object, object)
0xcd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xce: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcf: Call2 0x37d

0xd0: Pop(2)
0xd1: PushEmpty(object, object)
0xd2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd4: Call2 0x392

0xd5: Pop(2)
0xd6: PushEmpty(object, object)
0xd7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd9: Call2 0x351

0xda: Pop(2)
0xdb: Push((int) 37509)
0xdc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xde: PushEmpty(object, object)
0xdf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe1: Call2 0x361

0xe2: Pop(2)
0xe3: PushEmpty(object, object)
0xe4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe6: Call2 0x351

0xe7: Pop(2)
0xe8: Push((int) 34723)
0xe9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xea: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0xeb: PushEmpty(string)
0xec: Stack[-1] = "Neutral"
0xed: Call2 0x8e

0xee: Pop(1)
0xef: Push((int) 533203)
0xf0: @@ SetMessage(Stack[-1])
0xf1: Pop(1)
0xf2: @@ ClearReplies()
0xf3: Pop(0)
0xf4: PushEmpty(bool, object)
0xf5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf6: Call2 0x39d

0xf7: Pop(1)
0xf8: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xf9: Push((int) 533204)
0xfa: Push((int) 34725)
0xfb: Push((int) 34724)
0xfc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfd: Pop(3)
0xfe: Push((int) 533207)
0xff: Push((int) -1)
0x100: Push((int) 34727)
0x101: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x102: Pop(3)
0x103: Push((int) 535821)
0x104: Push((int) -1)
0x105: Push((int) 37514)
0x106: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x107: Pop(3)
0x108: Return(); Pop(0)

0x109: Push((int) 34725)
0x10a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10b: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x10c: PushEmpty(string)
0x10d: Stack[-1] = "Neutral"
0x10e: Call2 0x8e

0x10f: Pop(1)
0x110: Push((int) 533205)
0x111: @@ SetMessage(Stack[-1])
0x112: Pop(1)
0x113: @@ ClearReplies()
0x114: Pop(0)
0x115: Push((int) 535813)
0x116: Push((int) 37511)
0x117: Push((int) 37505)
0x118: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x119: Pop(3)
0x11a: Push((int) 535815)
0x11b: Push((int) 37508)
0x11c: Push((int) 37507)
0x11d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11e: Pop(3)
0x11f: Return(); Pop(0)

0x120: Push((int) 37508)
0x121: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x122: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x123: PushEmpty(string)
0x124: Stack[-1] = "Neutral"
0x125: Call2 0x8e

0x126: Pop(1)
0x127: Push((int) 535816)
0x128: @@ SetMessage(Stack[-1])
0x129: Pop(1)
0x12a: @@ ClearReplies()
0x12b: Pop(0)
0x12c: Push((int) 535817)
0x12d: Push((int) -1)
0x12e: Push((int) 37509)
0x12f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x130: Pop(3)
0x131: Push((int) 535822)
0x132: Push((int) 37506)
0x133: Push((int) 37515)
0x134: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x135: Pop(3)
0x136: Return(); Pop(0)

0x137: Push((int) 37511)
0x138: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x139: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x13a: PushEmpty(string)
0x13b: Stack[-1] = "Neutral"
0x13c: Call2 0x8e

0x13d: Pop(1)
0x13e: Push((int) 535818)
0x13f: @@ SetMessage(Stack[-1])
0x140: Pop(1)
0x141: @@ ClearReplies()
0x142: Pop(0)
0x143: Push((int) 535820)
0x144: Push((int) -1)
0x145: Push((int) 37513)
0x146: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x147: Pop(3)
0x148: Push((int) 535819)
0x149: Push((int) 37506)
0x14a: Push((int) 37512)
0x14b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14c: Pop(3)
0x14d: Return(); Pop(0)

0x14e: Push((int) 37506)
0x14f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x150: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x151: PushEmpty(string)
0x152: Stack[-1] = "Neutral"
0x153: Call2 0x8e

0x154: Pop(1)
0x155: Push((int) 535814)
0x156: @@ SetMessage(Stack[-1])
0x157: Pop(1)
0x158: @@ ClearReplies()
0x159: Pop(0)
0x15a: Push((int) 535823)
0x15b: Push((int) -1)
0x15c: Push((int) 37516)
0x15d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15e: Pop(3)
0x15f: Push((int) 533206)
0x160: Push((int) -1)
0x161: Push((int) 34726)
0x162: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x163: Pop(3)
0x164: Return(); Pop(0)

0x165: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x166: PushEmpty(bool)
0x167: Call2 0x442

0x168: Pop(0)
0x169: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x16a: @ lshStopAnimation()
0x16b: Pop(0)
0x16c: GOTO 0x16f

0x16d: @ StopAnimation()
0x16e: Pop(0)
0x16f: Return(); Pop(0)

0x170: GOTO 0xa5

0x171: Return(); Pop(0)

0x172: PushEmpty(float, float)
0x173: Stack[-2] = (int) 300
0x174: Stack[-1] = (int) 100
0x175: Call2 0x180

0x176: Pop(2)
0x177: Return(); Pop(0)

0x178: PushEmpty()
0x179: PushEmpty(int, object)
0x17a: Stack[-1] = Stack[-3]
0x17b: Push(-2, 1); TaskCall(0)
0x17c: Call2 0x0

0x17d: Pop(-2, 1); TaskReturn
0x17e: Pop(2)
0x17f: Return(); Pop(0)

0x180: PushEmpty(float, bool, float, bool)
0x181: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x182: Push((int) 3)
0x183: @ rand(Stack[-3], Stack[-1])
0x184: Pop(1)
0x185: Push((int) 3)
0x186: Pop(1); Push(Stack[-3] + Stack[-1]);
0x187: @ Sleep(Stack[-1], Stack[-2])
0x188: Pop(1)
0x189: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x18a: PushEmpty(float, float)
0x18b: Stack[-2] = Stack[-8]
0x18c: Stack[-1] = Stack[-7]
0x18d: Call2 0x1c5

0x18e: Pop(2)
0x18f: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x190: GOTO 0x182

0x191: Return(); Pop(4)

0x192: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x193: PushEmpty(bool)
0x194: Stack[-1] = (bool) 0
0x195: PushEmpty(bool)
0x196: Call2 0x272

0x197: Pop(0)
0x198: Pop(1); Push((bool) Stack[-1] == 0)
0x199: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x19a: PushEmpty(bool)
0x19b: Call2 0x1c3

0x19c: Pop(0)
0x19d: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x19e: Stack[-1] = (bool) 1
0x19f: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a0: PushEmpty(object)
0x1a1: Call2 0x2ff

0x1a2: Pop(0)
0x1a3: @ RemoveActor(Stack[-1])
0x1a4: Pop(1)
0x1a5: Return(); Pop(0)

0x1a6: PushEmpty()
0x1a7: Push("cleanup")
0x1a8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a9: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x1aa: PushEmpty()
0x1ab: Call2 0x192

0x1ac: Pop(0)
0x1ad: Return(); Pop(0)

0x1ae: Push( Stack[6 + Tasks[-1].StackPointer] )
0x1af: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1b0: PushEmpty()
0x1b1: Call2 0x206

0x1b2: Pop(0)
0x1b3: PushEmpty(bool)
0x1b4: Stack[-1] = (bool) 0
0x1b5: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1b6: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1b7: PushEmpty(bool)
0x1b8: Call2 0x1c3

0x1b9: Pop(0)
0x1ba: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1bb: Stack[-1] = (bool) 1
0x1bc: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1bd: PushEmpty(object)
0x1be: Call2 0x2ff

0x1bf: Pop(0)
0x1c0: @ RemoveActor(Stack[-1])
0x1c1: Pop(1)
0x1c2: Return(); Pop(0)

0x1c3: Stack[-1] = (bool) 1
0x1c4: Return(); Pop(0)

0x1c5: PushEmpty()
0x1c6: PushEmpty(bool)
0x1c7: Call2 0x272

0x1c8: Pop(0)
0x1c9: Pop(1); Push((bool) Stack[-1] == 0)
0x1ca: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1cb: Return(); Pop(0)

0x1cc: Push("player")
0x1cd: @ FindActor(Stack[-4], Stack[-1])
0x1ce: Pop(1)
0x1cf: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1d0: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1d1: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1d2: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1d3: Push((int) 10)
0x1d4: Push((float)1.0)
0x1d5: @ SetTimer(Stack[-2], Stack[-1])
0x1d6: Pop(2)
0x1d7: PushEmpty()
0x1d8: Call2 0x214

0x1d9: Pop(0)
0x1da: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1db: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1dc: Push((int) 10)
0x1dd: @ KillTimer(Stack[-1])
0x1de: Pop(1)
0x1df: Return(); Pop(0)

0x1e0: PushEmpty(float, float)
0x1e1: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1e3: Stack[-3] = (bool) 0
0x1e4: Return(); Pop(2)

0x1e5: PushEmpty(float, object)
0x1e6: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1e7: Call2 0x26a

0x1e8: Pop(1)
0x1e9: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1ea: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1eb: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1ec: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1ed: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1ee: Return(); Pop(2)

0x1ef: PushEmpty()
0x1f0: Push((int) 10)
0x1f1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f2: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1f3: PushEmpty(bool)
0x1f4: Call2 0x1e0

0x1f5: Pop(0)
0x1f6: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1f7: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1f9: PushEmpty(object)
0x1fa: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1fb: Call2 0x2ed

0x1fc: Pop(1)
0x1fd: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1fe: GOTO 0x205

0x1ff: Push( Stack[2 + Tasks[-1].StackPointer] )
0x200: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x201: Push("head")
0x202: @ UnlookAsync(Stack[-1])
0x203: Pop(1)
0x204: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x205: Return(); Pop(0)

0x206: PushEmpty()
0x207: Call2 0x265

0x208: Pop(0)
0x209: Push((int) 10)
0x20a: @ KillTimer(Stack[-1])
0x20b: Pop(1)
0x20c: Push( Stack[2 + Tasks[-1].StackPointer] )
0x20d: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x20e: Push("head")
0x20f: @ UnlookAsync(Stack[-1])
0x210: Pop(1)
0x211: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x212: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x213: Return(); Pop(0)

0x214: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x215: @ WaitForAnimEnd()
0x216: Pop(0)
0x217: PushEmpty(bool)
0x218: Call2 0x272

0x219: Pop(0)
0x21a: Pop(1); Push((bool) Stack[-1] == 0)
0x21b: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x21c: Return(); Pop(14)

0x21d: PushEmpty(int)
0x21e: Call2 0x429

0x21f: Stack[-8] = Stack[-1]
0x220: Pop(1)
0x221: Stack[-6] = (int) 0
0x222: PushEmpty(bool)
0x223: Stack[-1] = (bool) 0
0x224: Push((int) 5)
0x225: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x226: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x227: PushEmpty(bool)
0x228: Call2 0x272

0x229: Pop(0)
0x22a: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x22b: Stack[-1] = (bool) 1
0x22c: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x22d: Push((int) 3)
0x22e: @ irand(Stack[-6], Stack[-1])
0x22f: Pop(1)
0x230: Push((int) 0)
0x231: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x232: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x233: Push(Stack[-7])
0x234: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x235: @ irand(Stack[-4], Stack[-7])
0x236: Pop(0)
0x237: Push("all")
0x238: PushEmpty(string, int)
0x239: Stack[-1] = Stack[-7]
0x23a: Call2 0x422

0x23b: Pop(1)
0x23c: @ PlayAnimation(Stack[-2], Stack[-1])
0x23d: Pop(2)
0x23e: @ WaitForAnimEnd(Stack[-3])
0x23f: Pop(0)
0x240: Pop(0); Push((bool) Stack[-3] == 0)
0x241: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x242: GOTO 0x260

0x243: GOTO 0x255

0x244: Push((int) 1)
0x245: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x246: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x247: Push((int) 4)
0x248: @ rand(Stack[-3], Stack[-1])
0x249: Pop(1)
0x24a: Push((int) 1)
0x24b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x24c: @ Sleep(Stack[-1], Stack[-2])
0x24d: Pop(1)
0x24e: Pop(0); Push((bool) Stack[-1] == 0)
0x24f: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x250: GOTO 0x260

0x251: GOTO 0x255

0x252: Push(Stack[-6])
0x253: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x254: GOTO 0x260

0x255: PushEmpty(bool)
0x256: Call2 0x263

0x257: Pop(0)
0x258: Pop(1); Push((bool) Stack[-1] == 0)
0x259: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x25a: GOTO 0x260

0x25b: @ ResetAAS()
0x25c: Pop(0)
0x25d: Push((int) 1)
0x25e: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x25f: GOTO 0x222

0x260: @ ResetAAS()
0x261: Pop(0)
0x262: Return(); Pop(14)

0x263: Stack[-1] = (bool) 1
0x264: Return(); Pop(0)

0x265: @ StopAnimation()
0x266: Pop(0)
0x267: @ StopGroup0()
0x268: Pop(0)
0x269: Return(); Pop(0)

0x26a: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x26b: @ GetPosition(Stack[-3])
0x26c: Pop(0)
0x26d: @@ GetPosition(Stack[-2])
0x26e: Pop(0)
0x26f: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x270: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x271: Return(); Pop(6)

0x272: PushEmpty(bool, bool)
0x273: @ IsLoaded(Stack[-1])
0x274: Pop(0)
0x275: Stack[-3] = Stack[-1]
0x276: Return(); Pop(2)

0x277: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x278: @@ GetPosition(Stack[-8])
0x279: Pop(0)
0x27a: @@ GetEyesHeight(Stack[-9])
0x27b: Pop(0)
0x27c: Push(CvectorIndex(Stack[-8], 1))
0x27d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x27e: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x27f: @ GetPosition(Stack[-7])
0x280: Pop(0)
0x281: @ GetEyesHeight(Stack[-9])
0x282: Pop(0)
0x283: Push(CvectorIndex(Stack[-7], 1))
0x284: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x285: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x286: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x287: Push(CvectorIndex(Stack[-6], 1))
0x288: Stack[-1] = (int) 0
0x289: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x28a: Pop(0); Push(Stack[-6] | Stack[-6]);
0x28b: Pop(1); Push(Sqrt(Stack[-1]))
0x28c: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x28d: Stack[-5] = -Stack[-6]; Pop(0);
0x28e: Pop(0); Push(Stack[-6] * Stack[-19]);
0x28f: PushEmpty(cvector, cvector)
0x290: Push(CVector(0.0, 1.0, 0.0))
0x291: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x292: Call2 0x305

0x293: Pop(1)
0x294: Push((int) 25)
0x295: Pop(2); Push(Stack[-2] * Stack[-1]);
0x296: Pop(2); Push(Stack[-2] + Stack[-1]);
0x297: Push(CVector(0.0, 10.0, 0.0))
0x298: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x299: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x29a: @ IsOverrideActive(Stack[-2])
0x29b: Pop(0)
0x29c: Push(Stack[-2])
0x29d: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x29e: Stack[-21] = (bool) 0
0x29f: Return(); Pop(18)

0x2a0: @ StopWorld()
0x2a1: Pop(0)
0x2a2: Push((bool) 1)
0x2a3: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x2a4: Pop(1)
0x2a5: Push(CvectorIndex(Stack[-4], 0))
0x2a6: Push(CvectorIndex(Stack[-5], 2))
0x2a7: @ Rotate(Stack[-2], Stack[-1])
0x2a8: Pop(2)
0x2a9: PushEmpty(bool)
0x2aa: Call2 0x442

0x2ab: Pop(0)
0x2ac: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x2ad: GOTO 0x2b6

0x2ae: Push("head")
0x2af: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2b0: Pop(1)
0x2b1: Push(Stack[-1])
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2b3: Push("head")
0x2b4: @ LookAsyncCamera(Stack[-1])
0x2b5: Pop(1)
0x2b6: @ CameraWaitForPlayFinish()
0x2b7: Pop(0)
0x2b8: @ ResumeWorld()
0x2b9: Pop(0)
0x2ba: Stack[-21] = (bool) 1
0x2bb: Return(); Pop(18)

0x2bc: PushEmpty(bool, bool)
0x2bd: Push((bool) 1)
0x2be: @ CameraSwitchToNormal(Stack[-1])
0x2bf: Pop(1)
0x2c0: PushEmpty(bool)
0x2c1: Call2 0x442

0x2c2: Pop(0)
0x2c3: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2c4: GOTO 0x2cd

0x2c5: Push("head")
0x2c6: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2c7: Pop(1)
0x2c8: Push(Stack[-1])
0x2c9: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2ca: Push("head")
0x2cb: @ UnlookAsync(Stack[-1])
0x2cc: Pop(1)
0x2cd: Return(); Pop(2)

0x2ce: PushEmpty(bool, float, float, bool, float, float)
0x2cf: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2d0: Pop(0)
0x2d1: Push(Stack[-3])
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2d3: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2d4: Pop(0)
0x2d5: Push((bool) 0)
0x2d6: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2d7: Pop(1)
0x2d8: GOTO 0x2dd

0x2d9: Push("Can't find lsh animation : ")
0x2da: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2db: @ Trace(Stack[-1])
0x2dc: Pop(1)
0x2dd: Return(); Pop(6)

0x2de: PushEmpty(bool, float, float, bool, float, float)
0x2df: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2e0: Pop(0)
0x2e1: Push(Stack[-3])
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2e3: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2e4: Pop(0)
0x2e5: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2e6: Pop(0)
0x2e7: GOTO 0x2ec

0x2e8: Push("Can't find lsh animation : ")
0x2e9: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2ea: @ Trace(Stack[-1])
0x2eb: Pop(1)
0x2ec: Return(); Pop(6)

0x2ed: PushEmpty(float, cvector, float, cvector)
0x2ee: @@ GetEyesHeight(Stack[-2])
0x2ef: Pop(0)
0x2f0: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x2f1: Push(CvectorIndex(Stack[-1], 1))
0x2f2: Stack[-1] = Stack[-3]
0x2f3: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2f4: Push("head")
0x2f5: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2f6: Pop(1)
0x2f7: Return(); Pop(4)

0x2f8: PushEmpty(bool)
0x2f9: Call2 0x442

0x2fa: Pop(0)
0x2fb: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2fc: @ lshStopSpeech()
0x2fd: Pop(0)
0x2fe: Return(); Pop(0)

0x2ff: PushEmpty(object, object)
0x300: @ self(Stack[-1])
0x301: Pop(0)
0x302: Stack[-3] = Stack[-1]
0x303: Return(); Pop(2)

0x304: Stack[-1] = 0
0x305: PushEmpty(float, float)
0x306: Pop(0); Push(Stack[-3] | Stack[-3]);
0x307: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x308: Push((float)0.0)
0x309: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x30a: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x30b: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x30c: Return(); Pop(2)

0x30d: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x30e: Return(); Pop(2)

0x30f: PushEmpty(int, int)
0x310: @ GetVariable(Stack[-3], Stack[-1])
0x311: Pop(0)
0x312: Stack[-4] = Stack[-1]
0x313: Return(); Pop(2)

0x314: PushEmpty(object, object)
0x315: @ CreateIntVector(Stack[-1])
0x316: Pop(0)
0x317: @@ add(Stack[-4])
0x318: Pop(0)
0x319: @@ add(Stack[-3])
0x31a: Pop(0)
0x31b: Push((int) 3)
0x31c: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x31d: Pop(1)
0x31e: Return(); Pop(2)

0x31f: Stack[-1] = 0
0x320: PushEmpty(int, int, bool, int, int, bool)
0x321: @@ GetItemID(Stack[-3])
0x322: Pop(0)
0x323: Push("Category")
0x324: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x325: Pop(1)
0x326: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x327: Pop(0)
0x328: Pop(0); Push((bool) Stack[-1] == 0)
0x329: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x32a: @@ DropItems(Stack[-8], Stack[-7])
0x32b: Pop(0)
0x32c: GOTO 0x332

0x32d: PushEmpty(int, int)
0x32e: Stack[-2] = Stack[-5]
0x32f: Stack[-1] = Stack[-9]
0x330: Call2 0x314

0x331: Pop(2)
0x332: Return(); Pop(6)

0x333: PushEmpty(object, object)
0x334: @ CreateInvItem(Stack[-1])
0x335: Pop(0)
0x336: @@ SetItemName(Stack[-4])
0x337: Pop(0)
0x338: PushEmpty(object, object, int)
0x339: Stack[-3] = Stack[-8]
0x33a: Stack[-2] = Stack[-4]
0x33b: Stack[-1] = Stack[-6]
0x33c: Call2 0x320

0x33d: Pop(3)
0x33e: Return(); Pop(2)

0x33f: Stack[-1] = 0
0x340: PushEmpty(object, object)
0x341: @ FindActor(Stack[-1], Stack[-4])
0x342: Pop(0)
0x343: Pop(0); Push((bool) Stack[-1] == 0)
0x344: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x345: Stack[-5] = (bool) 0
0x346: Return(); Pop(2)

0x347: @ Trigger(Stack[-1], Stack[-3])
0x348: Pop(0)
0x349: Stack[-5] = (bool) 1
0x34a: Return(); Pop(2)

0x34b: Stack[-1] = 0
0x34c: PushEmpty(float, float)
0x34d: @ GetGameTime(Stack[-1])
0x34e: Pop(0)
0x34f: Stack[-3] = Stack[-1]
0x350: Return(); Pop(2)

0x351: PushEmpty()
0x352: PushEmpty(object, string, float)
0x353: PushEmpty(object)
0x354: Call2 0x3df

0x355: Stack[-4] = Stack[-1]
0x356: Pop(1)
0x357: Stack[-2] = "pt_gatherer2"
0x358: Stack[-1] = (int) 2
0x359: Call2 0x3f0

0x35a: Pop(3)
0x35b: PushEmpty(object)
0x35c: Call2 0x3df

0x35d: Pop(0)
0x35e: @@ ShowMap(Stack[-1])
0x35f: Pop(1)
0x360: Return(); Pop(0)

0x361: PushEmpty(object, object)
0x362: Push("d7q04")
0x363: Push((int) 2)
0x364: @ SetVariable(Stack[-2], Stack[-1])
0x365: Pop(2)
0x366: PushEmpty(object)
0x367: Call2 0x3df

0x368: Stack[-2] = Stack[-1]
0x369: Pop(1)
0x36a: Push("d7q04WastedGotoGatherer")
0x36b: Push("pt_gatherer2")
0x36c: Push((int) 0)
0x36d: Push((int) 508638)
0x36e: PushEmpty(float)
0x36f: Call2 0x34c

0x370: Pop(0)
0x371: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x372: Pop(5)
0x373: PushEmpty()
0x374: Call2 0x3a9

0x375: Pop(0)
0x376: PushEmpty(bool, string, string)
0x377: Stack[-2] = "quest_d7_04"
0x378: Stack[-1] = "init_andrei"
0x379: Call2 0x340

0x37a: Pop(3)
0x37b: Return(); Pop(2)

0x37c: Stack[-1] = 0
0x37d: PushEmpty(object, object)
0x37e: Push("Rifle is given")
0x37f: @ Trace(Stack[-1])
0x380: Pop(1)
0x381: @ CreateInvItem(Stack[-1])
0x382: Pop(0)
0x383: Push("Rifle")
0x384: @@ SetItemName(Stack[-1])
0x385: Pop(1)
0x386: Push("durability")
0x387: Push((int) 100)
0x388: @@ SetProperty(Stack[-2], Stack[-1])
0x389: Pop(2)
0x38a: PushEmpty(object, object, int)
0x38b: Stack[-3] = Stack[-7]
0x38c: Stack[-2] = Stack[-4]
0x38d: Stack[-1] = (int) 1
0x38e: Call2 0x320

0x38f: Pop(3)
0x390: Return(); Pop(2)

0x391: Stack[-1] = 0
0x392: PushEmpty()
0x393: Push("rifle ammo10 is given")
0x394: @ Trace(Stack[-1])
0x395: Pop(1)
0x396: PushEmpty(object, string, int)
0x397: Stack[-3] = Stack[-5]
0x398: Stack[-2] = "rifle_ammo"
0x399: Stack[-1] = (int) 10
0x39a: Call2 0x333

0x39b: Pop(3)
0x39c: Return(); Pop(0)

0x39d: PushEmpty()
0x39e: PushEmpty(int, string)
0x39f: Stack[-1] = "d7q04"
0x3a0: Call2 0x30f

0x3a1: Pop(1)
0x3a2: Push((int) 1)
0x3a3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3a4: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x3a5: Stack[-2] = (bool) 1
0x3a6: Return(); Pop(0)

0x3a7: Stack[-2] = (bool) 0
0x3a8: Return(); Pop(0)

0x3a9: PushEmpty(object, object)
0x3aa: Push((int) 639)
0x3ab: Push((int) 2)
0x3ac: Push((int) 533225)
0x3ad: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3ae: Pop(3)
0x3af: PushEmpty(bool, object, int)
0x3b0: Stack[-2] = Stack[-4]
0x3b1: Stack[-1] = (int) 637
0x3b2: Call2 0x3c3

0x3b3: Pop(3)
0x3b4: Return(); Pop(2)

0x3b5: Stack[-1] = 0
0x3b6: PushEmpty(object, object)
0x3b7: @ GetDiaryRoot(Stack[-1])
0x3b8: Pop(0)
0x3b9: Pop(0); Push((bool) Stack[-1] == 0)
0x3ba: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3bb: Push("Can't retrieve diary root")
0x3bc: @ Trace(Stack[-1])
0x3bd: Pop(1)
0x3be: Stack[-3] = (bool) 0
0x3bf: Return(); Pop(2)

0x3c0: Stack[-3] = Stack[-1]
0x3c1: Return(); Pop(2)

0x3c2: Stack[-1] = 0
0x3c3: PushEmpty(object, object, int, object, object, int)
0x3c4: PushEmpty(object)
0x3c5: Call2 0x3b6

0x3c6: Stack[-4] = Stack[-1]
0x3c7: Pop(1)
0x3c8: @@ Find(Stack[-7], Stack[-2])
0x3c9: Pop(0)
0x3ca: Pop(0); Push((bool) Stack[-2] == 0)
0x3cb: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3cc: Push("Can't find diary parent with id: ")
0x3cd: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3ce: @ Trace(Stack[-1])
0x3cf: Pop(1)
0x3d0: Stack[-9] = (bool) 0
0x3d1: Return(); Pop(6)

0x3d2: @@ AddChild(Stack[-8])
0x3d3: Pop(0)
0x3d4: Push((int) 7)
0x3d5: @ SendWorldWndMessage(Stack[-1])
0x3d6: Pop(1)
0x3d7: @@ GetCategory(Stack[-1])
0x3d8: Pop(0)
0x3d9: @ SetDiarySection(Stack[-1])
0x3da: Pop(0)
0x3db: Stack[-9] = (bool) 0
0x3dc: Return(); Pop(6)

0x3dd: Stack[-2] = 0
0x3de: Stack[-3] = 0
0x3df: PushEmpty(object, object, object, object)
0x3e0: @ GetMainOutdoorScene(Stack[-2])
0x3e1: Pop(0)
0x3e2: Pop(0); Push((bool) Stack[-2] == 0)
0x3e3: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x3e4: Push("Can't find main outdoor scene")
0x3e5: @ Trace(Stack[-1])
0x3e6: Pop(1)
0x3e7: Stack[-1] = 0
0x3e8: Stack[-5] = Stack[-1]
0x3e9: Return(); Pop(4)

0x3ea: @@ GetMap(Stack[-1])
0x3eb: Pop(0)
0x3ec: Stack[-5] = Stack[-1]
0x3ed: Return(); Pop(4)

0x3ee: Stack[-1] = 0
0x3ef: Stack[-2] = 0
0x3f0: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x3f1: @ GetMainOutdoorScene(Stack[-2])
0x3f2: Pop(0)
0x3f3: Pop(0); Push((bool) Stack[-2] == 0)
0x3f4: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3f5: Push("Can't find main outdoor scene")
0x3f6: @ Trace(Stack[-1])
0x3f7: Pop(1)
0x3f8: Return(); Pop(8)

0x3f9: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x3fa: Pop(0)
0x3fb: Pop(0); Push((bool) Stack[-1] == 0)
0x3fc: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x3fd: Push("Warning: outdoor scene locator ")
0x3fe: Pop(1); Push(Stack[-1] + Stack[-11]);
0x3ff: Push(" doesnt exist")
0x400: Pop(2); Push(Stack[-2] + Stack[-1]);
0x401: @ Trace(Stack[-1])
0x402: Pop(1)
0x403: @@ GetMap(Stack[-11])
0x404: Pop(0)
0x405: Pop(0); Push((bool) Stack[-11] == 0)
0x406: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x407: Push("Can't find map")
0x408: @ Trace(Stack[-1])
0x409: Pop(1)
0x40a: Return(); Pop(8)

0x40b: Push(CvectorIndex(Stack[-4], 0))
0x40c: Push(CvectorIndex(Stack[-5], 2))
0x40d: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x40e: Pop(2)
0x40f: Return(); Pop(8)

0x410: Stack[-2] = 0
0x411: PushEmpty(int, int)
0x412: Push("branch")
0x413: @ GetVariable(Stack[-1], Stack[-2])
0x414: Pop(1)
0x415: Push((int) 0)
0x416: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x417: IF (Stack[-1] == 0) GOTO 0x41b; Pop(1)

0x418: Stack[-3] = (int) 1
0x419: Return(); Pop(2)

0x41a: GOTO 0x420

0x41b: Push((int) 1)
0x41c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x41d: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x41e: Stack[-3] = (int) 2
0x41f: Return(); Pop(2)

0x420: Stack[-3] = (int) 3
0x421: Return(); Pop(2)

0x422: PushEmpty(string, string)
0x423: Stack[-1] = "idle"
0x424: Push(Stack[-3])
0x425: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x426: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x427: Stack[-4] = Stack[-1]
0x428: Return(); Pop(2)

0x429: PushEmpty(int, bool, int, bool)
0x42a: Stack[-2] = (int) 0
0x42b: Push("all")
0x42c: PushEmpty(string, int)
0x42d: Stack[-1] = Stack[-5]
0x42e: Call2 0x422

0x42f: Pop(1)
0x430: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x431: Pop(2)
0x432: Pop(0); Push((bool) Stack[-1] == 0)
0x433: IF (Stack[-1] == 0) GOTO 0x435; Pop(1)

0x434: GOTO 0x438

0x435: Push((int) 1)
0x436: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x437: GOTO 0x42b

0x438: Stack[-5] = Stack[-2]
0x439: Return(); Pop(4)

0x43a: Stack[-1] = (int) 515556
0x43b: Return(); Pop(0)

0x43c: Stack[-1] = (int) 503341
0x43d: Return(); Pop(0)

0x43e: Stack[-1] = "ui/NPC_Citizen3.png"
0x43f: Return(); Pop(0)

0x440: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x441: Return(); Pop(0)

0x442: Stack[-1] = (bool) 0
0x443: Return(); Pop(0)


GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetPhoto
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	quest_d6_03
	albinos_retreated
	GetPosition
	Can't retreat, distance: 
	fdie
	bdie
	GetScriptProperty
	Owner
	HasScriptProperty
	GetScriptProperty
	@GetEyesHeight
	GetEyesHeight
	head
	fire
	phys
	HasProperty
	HasProperty
	health
	armor
	GetProperty
	armor_
	SetProperty
	scripted
	blood.xml
	fhit
	bhit
	hit_react
	1
	2
	playing 
	start: 
	end: 
	d6q03
	ood6Albinos1
	player
	ui/NPC_Black.png
	albinos_dead

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
	SetTimer (2 args)
	Sleep (1 args)
	IsPlayerActor (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	StopGroup0 (0 args)
	Hold (0 args)
	GetPosition (1 args)
	GetDirection (1 args)
	FindLongestDir (6 args)
	Trace (1 args)
	Rotate (2 args)
	MovePoint (3 args)
	Stop (0 args)
	KillTimer (1 args)
	FindDirLength (3 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	StopAsync (0 args)
	LookAsync (3 args)
	UnlookAsync (1 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	GetScene (1 args)
	GetEyesHeight (1 args)
	AddActorByType (6 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	IsLoaded (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (2 args)
	lshStopSpeech (0 args)
	GetVariable (2 args)
	FindActor (2 args)
	Trigger (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	ReportHit (4 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x144
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9d Vars = (int, int)
	GTASK_2  Params = 0
		EVENT_17 Op = 0x150 Vars = (object)
		EVENT_0 Op = 0x15c Vars = (object)
		EVENT_7 Op = 0x167 Vars = (int)
	GTASK_3 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x1b9 Vars = ()
		EVENT_7 Op = 0x1c1 Vars = (int)
		EVENT_41 Op = 0x267 Vars = (object)
	GTASK_4  Params = 1
		EVENT_22 Op = 0x2f6 Vars = (object, int, float, float)
		EVENT_16 Op = 0x2f8 Vars = (object, string)
		EVENT_41 Op = 0x2fa Vars = (object)

Events:
EVENT_22 Op = 0x4a7 Vars = (object, int, float, float)
EVENT_16 Op = 0x4af Vars = (object, string)
EVENT_41 Op = 0x4bc Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: Stack[-1] = Stack[-11]
0x4: Call 0x3ac

0x5: Pop(1)
0x6: Pop(1); Push((bool) Stack[-1] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[-10] = (int) -2
0x9: Return(); Pop(8)

0xa: @ CreateDialog(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Call 0x477

0xe: Pop(0)
0xf: @@ SetNPCName(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(string)
0x12: Call 0x479

0x13: Pop(0)
0x14: @@ SetPhoto(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(int)
0x17: Call 0x466

0x18: Pop(0)
0x19: @@ SetPlayerName(Stack[-1])
0x1a: Pop(1)
0x1b: Stack[-2] = (int) -1
0x1c: @ IsOverrideActive(Stack[-3])
0x1d: Pop(0)
0x1e: Push(Stack[-3])
0x1f: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x20: Stack[-10] = (int) -2
0x21: Return(); Pop(8)

0x22: @ DoDialog(Stack[-4])
0x23: Pop(0)
0x24: PushEmpty(object, object)
0x25: Stack[-2] = Stack[-11]
0x26: Stack[-1] = Stack[-6]
0x27: Push(-2, 4); TaskCall(1)
0x28: Call 0x3f

0x29: Pop(-2, 4); TaskReturn
0x2a: Pop(2)
0x2b: @@ IsDialogEnd(Stack[-1])
0x2c: Pop(0)
0x2d: Pop(0); Push((bool) Stack[-1] == 0)
0x2e: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x2f: @ sync()
0x30: Pop(0)
0x31: @@ IsDialogEnd(Stack[-1])
0x32: Pop(0)
0x33: GOTO 0x2d

0x34: PushEmpty(object)
0x35: Stack[-1] = Stack[-10]
0x36: Call 0x3e4

0x37: Pop(1)
0x38: @ StopDialog(Stack[-4])
0x39: Pop(0)
0x3a: @@ GetReturnValue(Stack[-2])
0x3b: Pop(0)
0x3c: Stack[-10] = Stack[-2]
0x3d: Return(); Pop(8)

0x3e: Stack[-4] = 0
0x3f: PushEmpty()
0x40: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x41: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x42: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x43: Push((int) 1)
0x44: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x45: PushEmpty(bool, object)
0x46: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x47: Call 0x45a

0x48: Pop(1)
0x49: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x4a: PushEmpty(string)
0x4b: Stack[-1] = "Neutral"
0x4c: Call 0x8d

0x4d: Pop(1)
0x4e: Push((int) 12071)
0x4f: @@ SetMessage(Stack[-1])
0x50: Pop(1)
0x51: @@ ClearReplies()
0x52: Pop(0)
0x53: Push((int) 12072)
0x54: Push((int) 13294)
0x55: Push((int) 13293)
0x56: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57: Pop(3)
0x58: Push((int) 12083)
0x59: Push((int) 13294)
0x5a: Push((int) 13306)
0x5b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c: Pop(3)
0x5d: GOTO 0x6f

0x5e: PushEmpty(string)
0x5f: Stack[-1] = "Neutral"
0x60: Call 0x8d

0x61: Pop(1)
0x62: Push((int) 13029)
0x63: @@ SetMessage(Stack[-1])
0x64: Pop(1)
0x65: @@ ClearReplies()
0x66: Pop(0)
0x67: Push((int) 13030)
0x68: Push((int) -1)
0x69: Push((int) 14237)
0x6a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b: Pop(3)
0x6c: GOTO 0x6f

0x6d: Return(); Pop(0)

0x6e: GOTO 0x43

0x6f: PushEmpty(bool)
0x70: Call 0x47b

0x71: Pop(0)
0x72: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x73: @ lshWaitForAnimEnd()
0x74: Pop(0)
0x75: Push( Stack[3 + Tasks[-1].StackPointer] )
0x76: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x77: GOTO 0x7d

0x78: PushEmpty(string)
0x79: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7a: Call 0x3e8

0x7b: Pop(1)
0x7c: GOTO 0x73

0x7d: GOTO 0x8c

0x7e: Push("all")
0x7f: Push("idle")
0x80: @ PlayAnimation(Stack[-2], Stack[-1])
0x81: Pop(2)
0x82: @ WaitForAnimEnd()
0x83: Pop(0)
0x84: Push( Stack[3 + Tasks[-1].StackPointer] )
0x85: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x86: GOTO 0x8c

0x87: Push("all")
0x88: Push("idle")
0x89: @ PlayAnimation(Stack[-2], Stack[-1])
0x8a: Pop(2)
0x8b: GOTO 0x82

0x8c: Return(); Pop(0)

0x8d: PushEmpty()
0x8e: PushEmpty(bool)
0x8f: Call 0x47b

0x90: Pop(0)
0x91: Pop(1); Push((bool) Stack[-1] == 0)
0x92: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x93: Return(); Pop(0)

0x94: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: Return(); Pop(0)

0x97: PushEmpty(string)
0x98: Stack[-1] = Stack[-2]
0x99: Call 0x3e8

0x9a: Pop(1)
0x9b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9c: Return(); Pop(0)

0x9d: PushEmpty()
0x9e: Push((int) 1)
0x9f: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0xa0: PushEmpty()
0xa1: Call 0x3fa

0xa2: Pop(0)
0xa3: Push((int) 13311)
0xa4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa5: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xa6: PushEmpty(object, object)
0xa7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa9: Call 0x44e

0xaa: Pop(2)
0xab: PushEmpty(object, object)
0xac: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xad: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xae: Call 0x454

0xaf: Pop(2)
0xb0: Push((int) 13292)
0xb1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb2: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xb3: PushEmpty(bool, object)
0xb4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb5: Call 0x45a

0xb6: Pop(1)
0xb7: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xb8: PushEmpty(string)
0xb9: Stack[-1] = "Neutral"
0xba: Call 0x8d

0xbb: Pop(1)
0xbc: Push((int) 12071)
0xbd: @@ SetMessage(Stack[-1])
0xbe: Pop(1)
0xbf: @@ ClearReplies()
0xc0: Pop(0)
0xc1: Push((int) 12072)
0xc2: Push((int) 13294)
0xc3: Push((int) 13293)
0xc4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc5: Pop(3)
0xc6: Push((int) 12083)
0xc7: Push((int) 13294)
0xc8: Push((int) 13306)
0xc9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xca: Pop(3)
0xcb: Return(); Pop(0)

0xcc: PushEmpty(string)
0xcd: Stack[-1] = "Neutral"
0xce: Call 0x8d

0xcf: Pop(1)
0xd0: Push((int) 13029)
0xd1: @@ SetMessage(Stack[-1])
0xd2: Pop(1)
0xd3: @@ ClearReplies()
0xd4: Pop(0)
0xd5: Push((int) 13030)
0xd6: Push((int) -1)
0xd7: Push((int) 14237)
0xd8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9: Pop(3)
0xda: Return(); Pop(0)

0xdb: Push((int) 13294)
0xdc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xde: PushEmpty(string)
0xdf: Stack[-1] = "Neutral"
0xe0: Call 0x8d

0xe1: Pop(1)
0xe2: Push((int) 12073)
0xe3: @@ SetMessage(Stack[-1])
0xe4: Pop(1)
0xe5: @@ ClearReplies()
0xe6: Pop(0)
0xe7: Push((int) 12074)
0xe8: Push((int) 13298)
0xe9: Push((int) 13295)
0xea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb: Pop(3)
0xec: Push((int) 12075)
0xed: Push((int) 13298)
0xee: Push((int) 13296)
0xef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf0: Pop(3)
0xf1: Push((int) 12076)
0xf2: Push((int) 13298)
0xf3: Push((int) 13297)
0xf4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf5: Pop(3)
0xf6: Return(); Pop(0)

0xf7: Push((int) 13298)
0xf8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf9: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0xfa: PushEmpty(string)
0xfb: Stack[-1] = "Neutral"
0xfc: Call 0x8d

0xfd: Pop(1)
0xfe: Push((int) 12077)
0xff: @@ SetMessage(Stack[-1])
0x100: Pop(1)
0x101: @@ ClearReplies()
0x102: Pop(0)
0x103: Push((int) 12078)
0x104: Push((int) 13302)
0x105: Push((int) 13301)
0x106: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x107: Pop(3)
0x108: Push((int) 12082)
0x109: Push((int) 13302)
0x10a: Push((int) 13305)
0x10b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c: Pop(3)
0x10d: Return(); Pop(0)

0x10e: Push((int) 13302)
0x10f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x110: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x111: PushEmpty(string)
0x112: Stack[-1] = "Neutral"
0x113: Call 0x8d

0x114: Pop(1)
0x115: Push((int) 12079)
0x116: @@ SetMessage(Stack[-1])
0x117: Pop(1)
0x118: @@ ClearReplies()
0x119: Pop(0)
0x11a: Push((int) 12080)
0x11b: Push((int) 13304)
0x11c: Push((int) 13303)
0x11d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11e: Pop(3)
0x11f: Push((int) 12084)
0x120: Push((int) 13304)
0x121: Push((int) 13309)
0x122: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x123: Pop(3)
0x124: Return(); Pop(0)

0x125: Push((int) 13304)
0x126: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x127: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x128: PushEmpty(string)
0x129: Stack[-1] = "Neutral"
0x12a: Call 0x8d

0x12b: Pop(1)
0x12c: Push((int) 12081)
0x12d: @@ SetMessage(Stack[-1])
0x12e: Pop(1)
0x12f: @@ ClearReplies()
0x130: Pop(0)
0x131: Push((int) 12085)
0x132: Push((int) -1)
0x133: Push((int) 13311)
0x134: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x135: Pop(3)
0x136: Return(); Pop(0)

0x137: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x138: PushEmpty(bool)
0x139: Call 0x47b

0x13a: Pop(0)
0x13b: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13c: @ lshStopAnimation()
0x13d: Pop(0)
0x13e: GOTO 0x141

0x13f: @ StopAnimation()
0x140: Pop(0)
0x141: Return(); Pop(0)

0x142: GOTO 0x9e

0x143: Return(); Pop(0)

0x144: Push((int) 100)
0x145: Push((float)1.0)
0x146: @ SetTimer(Stack[-2], Stack[-1])
0x147: Pop(2)
0x148: Push((int) 3)
0x149: @ Sleep(Stack[-1])
0x14a: Pop(1)
0x14b: PushEmpty()
0x14c: Call 0x16f

0x14d: Pop(0)
0x14e: GOTO 0x148

0x14f: Return(); Pop(0)

0x150: PushEmpty(bool, bool)
0x151: @ IsPlayerActor(Stack[-3], Stack[-1])
0x152: Pop(0)
0x153: Push(Stack[-1])
0x154: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x155: PushEmpty(object)
0x156: Stack[-1] = Stack[-4]
0x157: Push(-1, 3); TaskCall(3)
0x158: Call 0x1ec

0x159: Pop(-1, 3); TaskReturn
0x15a: Pop(1)
0x15b: Return(); Pop(2)

0x15c: PushEmpty()
0x15d: PushEmpty()
0x15e: Call 0x1b4

0x15f: Pop(0)
0x160: PushEmpty(int, object)
0x161: Stack[-1] = Stack[-3]
0x162: Push(-2, 1); TaskCall(0)
0x163: Call 0x0

0x164: Pop(-2, 1); TaskReturn
0x165: Pop(2)
0x166: Return(); Pop(0)

0x167: PushEmpty()
0x168: Push((int) 100)
0x169: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16a: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x16b: PushEmpty()
0x16c: Call 0x48d

0x16d: Pop(0)
0x16e: Return(); Pop(0)

0x16f: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x170: @ WaitForAnimEnd()
0x171: Pop(0)
0x172: PushEmpty(bool)
0x173: Call 0x3a7

0x174: Pop(0)
0x175: Pop(1); Push((bool) Stack[-1] == 0)
0x176: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x177: Return(); Pop(14)

0x178: PushEmpty(int)
0x179: Call 0x43d

0x17a: Stack[-8] = Stack[-1]
0x17b: Pop(1)
0x17c: Stack[-6] = (int) 0
0x17d: PushEmpty(bool)
0x17e: Stack[-1] = (bool) 0
0x17f: Push((int) 5)
0x180: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x181: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x182: PushEmpty(bool)
0x183: Call 0x3a7

0x184: Pop(0)
0x185: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x186: Stack[-1] = (bool) 1
0x187: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x188: Push((int) 3)
0x189: @ irand(Stack[-6], Stack[-1])
0x18a: Pop(1)
0x18b: Push((int) 0)
0x18c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x18d: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x18e: Push(Stack[-7])
0x18f: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x190: @ irand(Stack[-4], Stack[-7])
0x191: Pop(0)
0x192: Push("all")
0x193: PushEmpty(string, int)
0x194: Stack[-1] = Stack[-7]
0x195: Call 0x436

0x196: Pop(1)
0x197: @ PlayAnimation(Stack[-2], Stack[-1])
0x198: Pop(2)
0x199: @ WaitForAnimEnd(Stack[-3])
0x19a: Pop(0)
0x19b: Pop(0); Push((bool) Stack[-3] == 0)
0x19c: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x19d: GOTO 0x1b3

0x19e: GOTO 0x1b0

0x19f: Push((int) 1)
0x1a0: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1a1: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x1a2: Push((int) 4)
0x1a3: @ rand(Stack[-3], Stack[-1])
0x1a4: Pop(1)
0x1a5: Push((int) 1)
0x1a6: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1a7: @ Sleep(Stack[-1], Stack[-2])
0x1a8: Pop(1)
0x1a9: Pop(0); Push((bool) Stack[-1] == 0)
0x1aa: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1ab: GOTO 0x1b3

0x1ac: GOTO 0x1b0

0x1ad: Push(Stack[-6])
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1af: GOTO 0x1b3

0x1b0: Push((int) 1)
0x1b1: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1b2: GOTO 0x17d

0x1b3: Return(); Pop(14)

0x1b4: @ StopAnimation()
0x1b5: Pop(0)
0x1b6: @ StopGroup0()
0x1b7: Pop(0)
0x1b8: Return(); Pop(0)

0x1b9: PushEmpty(bool, string, string)
0x1ba: Stack[-2] = "quest_d6_03"
0x1bb: Stack[-1] = "albinos_retreated"
0x1bc: Call 0x42a

0x1bd: Pop(3)
0x1be: @ Hold()
0x1bf: Pop(0)
0x1c0: Return(); Pop(0)

0x1c1: PushEmpty()
0x1c2: Push((int) 100)
0x1c3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c4: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1c5: PushEmpty()
0x1c6: Call 0x48d

0x1c7: Pop(0)
0x1c8: GOTO 0x1cd

0x1c9: PushEmpty(int)
0x1ca: Stack[-1] = Stack[-2]
0x1cb: Call 0x22c

0x1cc: Pop(1)
0x1cd: Return(); Pop(0)

0x1ce: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x1cf: @ GetPosition(Stack[-6])
0x1d0: Pop(0)
0x1d1: @@ GetPosition(Stack[-5])
0x1d2: Pop(0)
0x1d3: @ GetDirection(Stack[-4])
0x1d4: Pop(0)
0x1d5: PushEmpty(cvector, cvector)
0x1d6: PushEmpty(cvector, cvector)
0x1d7: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x1d8: Call 0x401

0x1d9: Pop(1)
0x1da: Push((float)0.75)
0x1db: Pop(1); Push(Stack[-8] * Stack[-1]);
0x1dc: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x1dd: Call 0x401

0x1de: Stack[-5] = Stack[-2]
0x1df: Pop(2)
0x1e0: Push((int) 32)
0x1e1: Push((float)7000.0)
0x1e2: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x1e3: Pop(2)
0x1e4: Push((int) 100)
0x1e5: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x1e6: Push((int) 0)
0x1e7: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1e8: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1e9: Stack[-1] = (int) 0
0x1ea: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x1eb: Return(); Pop(12)

0x1ec: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x1ed: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x1ee: PushEmpty(cvector, float)
0x1ef: Stack[-1] = (float) 1.74533
0x1f0: Call 0x1ce

0x1f1: Stack[-7] = Stack[-2]
0x1f2: Pop(2)
0x1f3: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x1f4: Push((float)10000.0)
0x1f5: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x1f6: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1f7: Push("Can't retreat, distance: ")
0x1f8: Pop(0); Push(Sqrt(Stack[-5]))
0x1f9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1fa: @ Trace(Stack[-1])
0x1fb: Pop(1)
0x1fc: Push((float)0.5)
0x1fd: @ Sleep(Stack[-1])
0x1fe: Pop(1)
0x1ff: Return(); Pop(10)

0x200: Push(CvectorIndex(Stack[-5], 0))
0x201: Push(CvectorIndex(Stack[-6], 2))
0x202: @ Rotate(Stack[-2], Stack[-1])
0x203: Pop(2)
0x204: PushEmpty(cvector)
0x205: Call 0x304

0x206: Pop(0)
0x207: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x208: Push((int) 120)
0x209: Push((float)0.5)
0x20a: @ SetTimer(Stack[-2], Stack[-1])
0x20b: Pop(2)
0x20c: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x20d: Push((int) 1)
0x20e: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x20f: Pop(1)
0x210: Push(Stack[-3])
0x211: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x212: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x213: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x214: GOTO 0x22b

0x215: GOTO 0x229

0x216: PushEmpty(cvector, float)
0x217: Stack[-1] = (float) 2.61799
0x218: Call 0x1ce

0x219: Stack[-4] = Stack[-2]
0x21a: Pop(2)
0x21b: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x21c: Push((float)10000.0)
0x21d: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x21e: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x21f: PushEmpty(cvector)
0x220: Call 0x304

0x221: Pop(0)
0x222: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x223: Push((int) 120)
0x224: Push((float)0.5)
0x225: @ SetTimer(Stack[-2], Stack[-1])
0x226: Pop(2)
0x227: GOTO 0x229

0x228: GOTO 0x22b

0x229: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x22a: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x22b: Return(); Pop(10)

0x22c: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x22d: Push((int) 120)
0x22e: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x22f: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x230: Return(); Pop(8)

0x231: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x232: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x233: @ Stop()
0x234: Pop(0)
0x235: Push((int) 1)
0x236: @ KillTimer(Stack[-1])
0x237: Pop(1)
0x238: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x239: GOTO 0x25f

0x23a: @ GetDirection(Stack[-4])
0x23b: Pop(0)
0x23c: Push((float)7000.0)
0x23d: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x23e: Pop(1)
0x23f: PushEmpty(cvector, float)
0x240: Stack[-1] = (float) 1.74533
0x241: Call 0x1ce

0x242: Stack[-4] = Stack[-2]
0x243: Pop(2)
0x244: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x245: PushEmpty(bool)
0x246: Stack[-1] = (bool) 0
0x247: Push((float)10000.0)
0x248: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x249: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x24a: PushEmpty(bool)
0x24b: Stack[-1] = (bool) 1
0x24c: Pop(0); Push(Stack[-5] * Stack[-5]);
0x24d: Push((float)2.25)
0x24e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x24f: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x250: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x251: PushEmpty(bool)
0x252: Call 0x270

0x253: Pop(0)
0x254: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x255: Stack[-1] = (bool) 0
0x256: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x257: Stack[-1] = (bool) 1
0x258: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x259: @ Stop()
0x25a: Pop(0)
0x25b: PushEmpty(cvector)
0x25c: Call 0x304

0x25d: Pop(0)
0x25e: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x25f: Return(); Pop(8)

0x260: @ Stop()
0x261: Pop(0)
0x262: Push((int) 120)
0x263: @ KillTimer(Stack[-1])
0x264: Pop(1)
0x265: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x266: Return(); Pop(0)

0x267: PushEmpty()
0x268: PushEmpty()
0x269: Call 0x260

0x26a: Pop(0)
0x26b: PushEmpty(object)
0x26c: Stack[-1] = Stack[-2]
0x26d: Call 0x4bc

0x26e: Pop(1)
0x26f: Return(); Pop(0)

0x270: PushEmpty(cvector, cvector, cvector, cvector)
0x271: @ GetDirection(Stack[-2])
0x272: Pop(0)
0x273: PushEmpty(cvector, object)
0x274: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x275: Call 0x309

0x276: Stack[-3] = Stack[-2]
0x277: Pop(2)
0x278: PushEmpty(float, cvector, cvector)
0x279: Stack[-2] = Stack[-5]
0x27a: Stack[-1] = Stack[-4]
0x27b: Call 0x41d

0x27c: Pop(2)
0x27d: Push((float)-0.34202)
0x27e: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x27f: Return(); Pop(4)

0x280: PushEmpty()
0x281: PushEmpty(object)
0x282: Stack[-1] = Stack[-2]
0x283: Call 0x289

0x284: Pop(1)
0x285: @ Hold()
0x286: Pop(0)
0x287: GOTO 0x285

0x288: Return(); Pop(0)

0x289: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x28a: Pop(0); Push((bool) Stack[-21] == 0)
0x28b: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x28c: PushEmpty(string)
0x28d: Stack[-1] = "fdie"
0x28e: Call 0x2e0

0x28f: Pop(1)
0x290: GOTO 0x2df

0x291: @@ GetPosition(Stack[-10])
0x292: Pop(0)
0x293: @ GetPosition(Stack[-9])
0x294: Pop(0)
0x295: @ GetDirection(Stack[-8])
0x296: Pop(0)
0x297: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x298: Push(CvectorIndex(Stack[-7], 0))
0x299: Push(CvectorIndex(Stack[-9], 0))
0x29a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x29b: Push(CvectorIndex(Stack[-8], 2))
0x29c: Push(CvectorIndex(Stack[-10], 2))
0x29d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x29e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x29f: Push((int) 0)
0x2a0: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x2a2: Stack[-6] = "fdie"
0x2a3: GOTO 0x2a5

0x2a4: Stack[-6] = "bdie"
0x2a5: @ RemoveRTEnvelope()
0x2a6: Pop(0)
0x2a7: @ SetDeathState()
0x2a8: Pop(0)
0x2a9: @ Stop()
0x2aa: Pop(0)
0x2ab: @ StopAsync()
0x2ac: Pop(0)
0x2ad: Stack[-5] = Stack[-21]
0x2ae: Push("GetScriptProperty")
0x2af: Push((int) 2)
0x2b0: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x2b1: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2b2: Push("Owner")
0x2b3: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x2b4: Pop(1)
0x2b5: Push(Stack[-4])
0x2b6: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2b7: Push("Owner")
0x2b8: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x2b9: Pop(1)
0x2ba: Pop(0); Push((bool) Stack[-5] == 0)
0x2bb: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2bc: Stack[-5] = Stack[-21]
0x2bd: Push("@GetEyesHeight")
0x2be: Push((int) 1)
0x2bf: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x2c0: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2c1: @@ GetEyesHeight(Stack[-2])
0x2c2: Pop(0)
0x2c3: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x2c4: Push(CvectorIndex(Stack[-1], 1))
0x2c5: Stack[-1] = Stack[-3]
0x2c6: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2c7: Push("head")
0x2c8: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x2c9: Pop(1)
0x2ca: Stack[-3] = (bool) 1
0x2cb: GOTO 0x2cd

0x2cc: Stack[-3] = (bool) 0
0x2cd: Push("all")
0x2ce: @ PlayAnimation(Stack[-1], Stack[-7])
0x2cf: Pop(1)
0x2d0: @ WaitForAnimEnd()
0x2d1: Pop(0)
0x2d2: Push(Stack[-3])
0x2d3: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2d4: @ StopAsync()
0x2d5: Pop(0)
0x2d6: Push("head")
0x2d7: @ UnlookAsync(Stack[-1])
0x2d8: Pop(1)
0x2d9: Push("all")
0x2da: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x2db: Pop(1)
0x2dc: @ RemoveEnvelope()
0x2dd: Pop(0)
0x2de: Stack[-5] = 0
0x2df: Return(); Pop(20)

0x2e0: PushEmpty()
0x2e1: @ RemoveRTEnvelope()
0x2e2: Pop(0)
0x2e3: @ SetDeathState()
0x2e4: Pop(0)
0x2e5: @ Stop()
0x2e6: Pop(0)
0x2e7: @ StopAsync()
0x2e8: Pop(0)
0x2e9: @ StopSecondaryAnimation()
0x2ea: Pop(0)
0x2eb: Push("all")
0x2ec: @ PlayAnimation(Stack[-1], Stack[-2])
0x2ed: Pop(1)
0x2ee: @ WaitForAnimEnd()
0x2ef: Pop(0)
0x2f0: Push("all")
0x2f1: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x2f2: Pop(1)
0x2f3: @ RemoveEnvelope()
0x2f4: Pop(0)
0x2f5: Return(); Pop(0)

0x2f6: PushEmpty()
0x2f7: Return(); Pop(0)

0x2f8: PushEmpty()
0x2f9: Return(); Pop(0)

0x2fa: PushEmpty()
0x2fb: Return(); Pop(0)

0x2fc: PushEmpty()
0x2fd: Push((int) 1)
0x2fe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ff: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x300: Stack[-2] = "fire"
0x301: Return(); Pop(0)

0x302: Stack[-2] = "phys"
0x303: Return(); Pop(0)

0x304: PushEmpty(cvector, cvector)
0x305: @ GetPosition(Stack[-1])
0x306: Pop(0)
0x307: Stack[-3] = Stack[-1]
0x308: Return(); Pop(2)

0x309: PushEmpty(cvector, cvector, cvector, cvector)
0x30a: @ GetPosition(Stack[-2])
0x30b: Pop(0)
0x30c: @@ GetPosition(Stack[-1])
0x30d: Pop(0)
0x30e: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x30f: Return(); Pop(4)

0x310: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x311: @ GetPosition(Stack[-3])
0x312: Pop(0)
0x313: @@ GetPosition(Stack[-2])
0x314: Pop(0)
0x315: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x316: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x317: Return(); Pop(6)

0x318: PushEmpty(bool, bool)
0x319: Push("HasProperty")
0x31a: Push((int) 2)
0x31b: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x31c: Pop(1); Push((bool) Stack[-1] == 0)
0x31d: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31e: Stack[-5] = (bool) 0
0x31f: Return(); Pop(2)

0x320: @@ HasProperty(Stack[-3], Stack[-1])
0x321: Pop(0)
0x322: Stack[-5] = Stack[-1]
0x323: Return(); Pop(2)

0x324: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x325: PushEmpty(bool, object, string)
0x326: Stack[-2] = Stack[-18]
0x327: Stack[-1] = "health"
0x328: Call 0x318

0x329: Pop(2)
0x32a: Pop(1); Push((bool) Stack[-1] == 0)
0x32b: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x32c: Stack[-16] = (float) 0.0
0x32d: Return(); Pop(12)

0x32e: PushEmpty(bool, object, string)
0x32f: Stack[-2] = Stack[-18]
0x330: Stack[-1] = "armor"
0x331: Call 0x318

0x332: Pop(2)
0x333: Pop(1); Push((bool) Stack[-1] == 0)
0x334: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x335: Stack[-6] = (int) 0
0x336: GOTO 0x33a

0x337: Push("armor")
0x338: @@ GetProperty(Stack[-1], Stack[-7])
0x339: Pop(1)
0x33a: Push("armor_")
0x33b: PushEmpty(string, int)
0x33c: Stack[-1] = Stack[-16]
0x33d: Call 0x2fc

0x33e: Pop(1)
0x33f: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x340: PushEmpty(bool, object, string)
0x341: Stack[-2] = Stack[-18]
0x342: Stack[-1] = Stack[-8]
0x343: Call 0x318

0x344: Pop(2)
0x345: Pop(1); Push((bool) Stack[-1] == 0)
0x346: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x347: Stack[-4] = (int) 0
0x348: GOTO 0x34b

0x349: @@ GetProperty(Stack[-5], Stack[-4])
0x34a: Pop(0)
0x34b: PushEmpty(float, float, float)
0x34c: Pop(0); Push(Stack[-9] + Stack[-7]);
0x34d: Push((float)100.0)
0x34e: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x34f: Stack[-1] = (int) 1
0x350: Call 0x40b

0x351: Stack[-6] = Stack[-3]
0x352: Pop(3)
0x353: Push("health")
0x354: @@ GetProperty(Stack[-1], Stack[-3])
0x355: Pop(1)
0x356: Push((int) 1)
0x357: Pop(1); Push(Stack[-1] - Stack[-4]);
0x358: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x359: Push("health")
0x35a: PushEmpty(float, float, float, float)
0x35b: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x35c: Stack[-2] = (int) 0
0x35d: Stack[-1] = (int) 1
0x35e: Call 0x412

0x35f: Pop(3)
0x360: @@ SetProperty(Stack[-2], Stack[-1])
0x361: Pop(2)
0x362: Stack[-16] = Stack[-1]
0x363: Return(); Pop(12)

0x364: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x365: PushEmpty(bool)
0x366: Stack[-1] = (bool) 0
0x367: Push((int) 4)
0x368: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x369: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x36a: Push((int) 5)
0x36b: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x36c: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x36d: Stack[-1] = (bool) 1
0x36e: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x36f: @ GetScene(Stack[-10])
0x370: Pop(0)
0x371: @ GetPosition(Stack[-8])
0x372: Pop(0)
0x373: @ GetEyesHeight(Stack[-7])
0x374: Pop(0)
0x375: Push(CvectorIndex(Stack[-8], 1))
0x376: Push((int) 2)
0x377: Pop(1); Push(Stack[-9] / Stack[-1]);
0x378: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x379: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x37a: Push("scripted")
0x37b: Push(CVector(0.0, 0.0, 1.0))
0x37c: Push("blood.xml")
0x37d: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x37e: Pop(3)
0x37f: Stack[-9] = 0
0x380: Stack[-10] = 0
0x381: Pop(0); Push((bool) Stack[-23] == 0)
0x382: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x383: Return(); Pop(20)

0x384: @ GetSecondaryAnimationType(Stack[-6])
0x385: Pop(0)
0x386: Push((int) 0)
0x387: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x388: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x389: Return(); Pop(20)

0x38a: @@ GetPosition(Stack[-5])
0x38b: Pop(0)
0x38c: @ GetPosition(Stack[-4])
0x38d: Pop(0)
0x38e: @ GetDirection(Stack[-3])
0x38f: Pop(0)
0x390: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x391: Push(CvectorIndex(Stack[-2], 0))
0x392: Push(CvectorIndex(Stack[-4], 0))
0x393: Pop(2); Push(Stack[-2] * Stack[-1]);
0x394: Push(CvectorIndex(Stack[-3], 2))
0x395: Push(CvectorIndex(Stack[-5], 2))
0x396: Pop(2); Push(Stack[-2] * Stack[-1]);
0x397: Pop(2); Push(Stack[-2] + Stack[-1]);
0x398: Push((int) 0)
0x399: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x39a: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x39b: Stack[-1] = "fhit"
0x39c: GOTO 0x39e

0x39d: Stack[-1] = "bhit"
0x39e: Push("hit_react")
0x39f: Push("1")
0x3a0: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3a1: Push("2")
0x3a2: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3a3: Push((int) -10)
0x3a4: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3a5: Pop(4)
0x3a6: Return(); Pop(20)

0x3a7: PushEmpty(bool, bool)
0x3a8: @ IsLoaded(Stack[-1])
0x3a9: Pop(0)
0x3aa: Stack[-3] = Stack[-1]
0x3ab: Return(); Pop(2)

0x3ac: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x3ad: @@ GetPosition(Stack[-7])
0x3ae: Pop(0)
0x3af: @@ GetEyesHeight(Stack[-8])
0x3b0: Pop(0)
0x3b1: Push(CvectorIndex(Stack[-7], 1))
0x3b2: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x3b3: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x3b4: @ GetPosition(Stack[-6])
0x3b5: Pop(0)
0x3b6: @ GetEyesHeight(Stack[-8])
0x3b7: Pop(0)
0x3b8: Push(CvectorIndex(Stack[-6], 1))
0x3b9: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x3ba: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x3bb: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x3bc: Push(CvectorIndex(Stack[-5], 1))
0x3bd: Stack[-1] = (int) 0
0x3be: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x3bf: Pop(0); Push(Stack[-5] | Stack[-5]);
0x3c0: Pop(1); Push(Sqrt(Stack[-1]))
0x3c1: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x3c2: Stack[-4] = -Stack[-5]; Pop(0);
0x3c3: Push((int) 70)
0x3c4: Pop(1); Push(Stack[-6] * Stack[-1]);
0x3c5: PushEmpty(cvector, cvector)
0x3c6: Push(CVector(0.0, 1.0, 0.0))
0x3c7: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x3c8: Call 0x401

0x3c9: Pop(1)
0x3ca: Push((int) 25)
0x3cb: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3cc: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3cd: Push(CVector(0.0, 10.0, 0.0))
0x3ce: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x3cf: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x3d0: @ IsOverrideActive(Stack[-1])
0x3d1: Pop(0)
0x3d2: Push(Stack[-1])
0x3d3: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3d4: Stack[-18] = (bool) 0
0x3d5: Return(); Pop(16)

0x3d6: @ StopWorld()
0x3d7: Pop(0)
0x3d8: @ CameraTransit(Stack[-2], Stack[-4])
0x3d9: Pop(0)
0x3da: Push(CvectorIndex(Stack[-3], 0))
0x3db: Push(CvectorIndex(Stack[-4], 2))
0x3dc: @ Rotate(Stack[-2], Stack[-1])
0x3dd: Pop(2)
0x3de: @ CameraWaitForPlayFinish()
0x3df: Pop(0)
0x3e0: @ ResumeWorld()
0x3e1: Pop(0)
0x3e2: Stack[-18] = (bool) 1
0x3e3: Return(); Pop(16)

0x3e4: PushEmpty()
0x3e5: @ CameraSwitchToNormal()
0x3e6: Pop(0)
0x3e7: Return(); Pop(0)

0x3e8: PushEmpty(float, float, float, float)
0x3e9: Push("playing ")
0x3ea: Pop(1); Push(Stack[-1] + Stack[-6]);
0x3eb: @ Trace(Stack[-1])
0x3ec: Pop(1)
0x3ed: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x3ee: Pop(0)
0x3ef: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x3f0: Pop(0)
0x3f1: Push("start: ")
0x3f2: Pop(1); Push(Stack[-1] + Stack[-3]);
0x3f3: @ Trace(Stack[-1])
0x3f4: Pop(1)
0x3f5: Push("end: ")
0x3f6: Pop(1); Push(Stack[-1] + Stack[-2]);
0x3f7: @ Trace(Stack[-1])
0x3f8: Pop(1)
0x3f9: Return(); Pop(4)

0x3fa: PushEmpty(bool)
0x3fb: Call 0x47b

0x3fc: Pop(0)
0x3fd: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3fe: @ lshStopSpeech()
0x3ff: Pop(0)
0x400: Return(); Pop(0)

0x401: PushEmpty(float, float)
0x402: Pop(0); Push(Stack[-3] | Stack[-3]);
0x403: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x404: Push((float)0.0)
0x405: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x406: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x407: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x408: Return(); Pop(2)

0x409: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x40a: Return(); Pop(2)

0x40b: PushEmpty()
0x40c: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x40d: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x40e: Stack[-3] = Stack[-2]
0x40f: GOTO 0x411

0x410: Stack[-3] = Stack[-1]
0x411: Return(); Pop(0)

0x412: PushEmpty()
0x413: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x414: IF (Stack[-1] == 0) GOTO 0x417; Pop(1)

0x415: Stack[-4] = Stack[-2]
0x416: Return(); Pop(0)

0x417: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x418: IF (Stack[-1] == 0) GOTO 0x41b; Pop(1)

0x419: Stack[-4] = Stack[-1]
0x41a: Return(); Pop(0)

0x41b: Stack[-4] = Stack[-3]
0x41c: Return(); Pop(0)

0x41d: PushEmpty()
0x41e: Pop(0); Push(Stack[-2] | Stack[-1]);
0x41f: Pop(0); Push(Stack[-3] | Stack[-3]);
0x420: Pop(0); Push(Stack[-3] | Stack[-3]);
0x421: Pop(2); Push(Stack[-2] * Stack[-1]);
0x422: Pop(1); Push(Sqrt(Stack[-1]))
0x423: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x424: Return(); Pop(0)

0x425: PushEmpty(int, int)
0x426: @ GetVariable(Stack[-3], Stack[-1])
0x427: Pop(0)
0x428: Stack[-4] = Stack[-1]
0x429: Return(); Pop(2)

0x42a: PushEmpty(object, object)
0x42b: @ FindActor(Stack[-1], Stack[-4])
0x42c: Pop(0)
0x42d: Pop(0); Push((bool) Stack[-1] == 0)
0x42e: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x42f: Stack[-5] = (bool) 0
0x430: Return(); Pop(2)

0x431: @ Trigger(Stack[-1], Stack[-3])
0x432: Pop(0)
0x433: Stack[-5] = (bool) 1
0x434: Return(); Pop(2)

0x435: Stack[-1] = 0
0x436: PushEmpty(string, string)
0x437: Stack[-1] = "idle"
0x438: Push(Stack[-3])
0x439: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x43a: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x43b: Stack[-4] = Stack[-1]
0x43c: Return(); Pop(2)

0x43d: PushEmpty(int, bool, int, bool)
0x43e: Stack[-2] = (int) 0
0x43f: Push("all")
0x440: PushEmpty(string, int)
0x441: Stack[-1] = Stack[-5]
0x442: Call 0x436

0x443: Pop(1)
0x444: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x445: Pop(2)
0x446: Pop(0); Push((bool) Stack[-1] == 0)
0x447: IF (Stack[-1] == 0) GOTO 0x449; Pop(1)

0x448: GOTO 0x44c

0x449: Push((int) 1)
0x44a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x44b: GOTO 0x43f

0x44c: Stack[-5] = Stack[-2]
0x44d: Return(); Pop(4)

0x44e: PushEmpty()
0x44f: Push("d6q03")
0x450: Push((int) 2)
0x451: @ SetVariable(Stack[-2], Stack[-1])
0x452: Pop(2)
0x453: Return(); Pop(0)

0x454: PushEmpty()
0x455: Push("ood6Albinos1")
0x456: Push((int) 1)
0x457: @ SetVariable(Stack[-2], Stack[-1])
0x458: Pop(2)
0x459: Return(); Pop(0)

0x45a: PushEmpty()
0x45b: PushEmpty(int, string)
0x45c: Stack[-1] = "ood6Albinos1"
0x45d: Call 0x425

0x45e: Pop(1)
0x45f: Push((int) 0)
0x460: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x461: IF (Stack[-1] == 0) GOTO 0x464; Pop(1)

0x462: Stack[-2] = (bool) 1
0x463: Return(); Pop(0)

0x464: Stack[-2] = (bool) 0
0x465: Return(); Pop(0)

0x466: PushEmpty(int, int)
0x467: Push("player")
0x468: @ GetVariable(Stack[-1], Stack[-2])
0x469: Pop(1)
0x46a: Push((int) 0)
0x46b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x46c: IF (Stack[-1] == 0) GOTO 0x470; Pop(1)

0x46d: Stack[-3] = (int) 200001
0x46e: Return(); Pop(2)

0x46f: GOTO 0x475

0x470: Push((int) 1)
0x471: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x472: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x473: Stack[-3] = (int) 200002
0x474: Return(); Pop(2)

0x475: Stack[-3] = (int) 200003
0x476: Return(); Pop(2)

0x477: Stack[-1] = (int) 12611
0x478: Return(); Pop(0)

0x479: Stack[-1] = "ui/NPC_Black.png"
0x47a: Return(); Pop(0)

0x47b: Stack[-1] = (bool) 0
0x47c: Return(); Pop(0)

0x47d: PushEmpty()
0x47e: Push((int) 100)
0x47f: @ KillTimer(Stack[-1])
0x480: Pop(1)
0x481: PushEmpty(bool, string, string)
0x482: Stack[-2] = "quest_d6_03"
0x483: Stack[-1] = "albinos_dead"
0x484: Call 0x42a

0x485: Pop(3)
0x486: PushEmpty(object)
0x487: Stack[-1] = Stack[-2]
0x488: Push(-1, 0); TaskCall(4)
0x489: Call 0x280

0x48a: Pop(-1, 0); TaskReturn
0x48b: Pop(1)
0x48c: Return(); Pop(0)

0x48d: PushEmpty(object, float, object, float)
0x48e: Push("player")
0x48f: @ FindActor(Stack[-3], Stack[-1])
0x490: Pop(1)
0x491: Push(Stack[-2])
0x492: IF (Stack[-1] == 0) GOTO 0x4a5; Pop(1)

0x493: PushEmpty(float, object)
0x494: Stack[-1] = Stack[-4]
0x495: Call 0x310

0x496: Pop(1)
0x497: Push((float)640000.0)
0x498: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x499: IF (Stack[-1] == 0) GOTO 0x4a5; Pop(1)

0x49a: PushEmpty(float, object, float, int)
0x49b: Stack[-3] = Stack[-6]
0x49c: Stack[-2] = (float) 0.05
0x49d: Stack[-1] = (int) 0
0x49e: Call 0x324

0x49f: Stack[-5] = Stack[-4]
0x4a0: Pop(4)
0x4a1: Push((int) 6)
0x4a2: Push((float)0.05)
0x4a3: @ ReportHit(Stack[-4], Stack[-2], Stack[-3], Stack[-1])
0x4a4: Pop(2)
0x4a5: Return(); Pop(4)

0x4a6: Stack[-2] = 0
0x4a7: PushEmpty()
0x4a8: PushEmpty(object, int, float)
0x4a9: Stack[-3] = Stack[-7]
0x4aa: Stack[-2] = Stack[-6]
0x4ab: Stack[-1] = Stack[-5]
0x4ac: Call 0x364

0x4ad: Pop(3)
0x4ae: Return(); Pop(0)

0x4af: PushEmpty(float, float)
0x4b0: Push("health")
0x4b1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4b2: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4b3: Push("health")
0x4b4: @ GetProperty(Stack[-1], Stack[-2])
0x4b5: Pop(1)
0x4b6: Push((int) 0)
0x4b7: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x4b8: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4b9: @ SignalDeath(Stack[-4])
0x4ba: Pop(0)
0x4bb: Return(); Pop(2)

0x4bc: PushEmpty()
0x4bd: PushEmpty(object)
0x4be: Stack[-1] = Stack[-2]
0x4bf: Call 0x47d

0x4c0: Pop(1)
0x4c1: Return(); Pop(0)


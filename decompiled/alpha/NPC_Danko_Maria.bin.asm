GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 bool 

Strings:
	Neutral
	SetNPCName
	SetPhoto
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	GetProperty
	SetProperty
	GetPosition
	GetEyesHeight
	playing 
	start: 
	end: 
	No
	ui/NPC_Maria.png
	ood1Maria1
	ood1Maria2
	ood1Maria3
	ood1Maria4
	money500 is given
	money
	playsound
	givemoney
	ood2Maria1
	ood2Maria2
	d2q02
	d2q02MariaGotoPetr
	pt_map_petr
	AddMark
	d2q03MariaGotoViktor
	KnowViktor
	ood6Maria1
	ood6Maria2
	ood8Maria1
	KnowMaria
	ood11Maria1
	ood11Maria2
	ood11Maria3
	ood2Maria3
	resque_list
	SetReturnValue
	ood1Maria5
	ood1Maria6
	ood1Maria7
	ood1Maria8
	d6MariaVisit
	ood10Maria1
	d10q01MariaSavePetr
	d1q01FirstGeorgVisit
	d2q01
	d2q03
	KnowMark
	d6q01
	KnowGeorg
	d11q01
	KnowKaterina
	d10q01
	KnowKapella
	KnowStamatins
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	player_diary
	GetCategory
	Can't find main outdoor scene
	GetMap
	player
	Adding diary entry
	vol_
	people.xml

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	lshWaitForAnimEnd (0 args)
	WaitForAnimEnd (0 args)
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	PlayAnimation (2 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	GetPosition (1 args)
	Rotate (3 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	Trace (1 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (2 args)
	lshStopSpeech (0 args)
	GetVariable (2 args)
	GetGameTime (1 args)
	lshWaitForAnimEnd (1 args)
	SetVariable (2 args)
	TriggerWorld (2 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)
	CreateDiaryEntry (4 args)
	irand (2 args)
	ShowWindow (2 args)

RunOp = 0x6
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x3 Vars = ()
	GTASK_1  Params = 0
		EVENT_6 Op = 0x1d Vars = ()
		EVENT_0 Op = 0x23 Vars = (object)
		EVENT_10 Op = 0x29 Vars = (object)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc9 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x218 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x481 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa22 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd2d Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xeb6 Vars = (int, int)
	GTASK_14 Vars = (object) Params = 2
	GTASK_15 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x102f Vars = (int, int)


0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: Call 0x15fe

0x8: Pop(0)
0x9: PushEmpty(bool)
0xa: Call 0x123e

0xb: Pop(0)
0xc: Pop(1); Push((bool) Stack[-1] == 0)
0xd: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0xe: PushEmpty()
0xf: Push(-0, 0); TaskCall(0)
0x10: Call 0x0

0x11: Pop(-0, 0); TaskReturn
0x12: Pop(0)
0x13: PushEmpty(string)
0x14: Stack[-1] = "Neutral"
0x15: Call 0x127f

0x16: Pop(1)
0x17: @ lshWaitForAnimEnd()
0x18: Pop(0)
0x19: GOTO 0x13

0x1a: @ Hold()
0x1b: Pop(0)
0x1c: Return(); Pop(0)

0x1d: PushEmpty()
0x1e: Push(-0, 0); TaskCall(0)
0x1f: Call 0x0

0x20: Pop(-0, 0); TaskReturn
0x21: Pop(0)
0x22: Return(); Pop(0)

0x23: PushEmpty()
0x24: PushEmpty(object)
0x25: Stack[-1] = Stack[-2]
0x26: Call 0x1602

0x27: Pop(1)
0x28: Return(); Pop(0)

0x29: PushEmpty()
0x2a: PushEmpty(bool, object)
0x2b: Stack[-1] = Stack[-3]
0x2c: Call 0x1232

0x2d: Pop(2)
0x2e: @ WaitForAnimEnd()
0x2f: Pop(0)
0x30: Return(); Pop(0)

0x31: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x32: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x33: PushEmpty(bool, object)
0x34: Stack[-1] = Stack[-11]
0x35: Call 0x1243

0x36: Pop(1)
0x37: Pop(1); Push((bool) Stack[-1] == 0)
0x38: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x39: Stack[-10] = (int) -2
0x3a: Return(); Pop(8)

0x3b: @ CreateDialog(Stack[-4])
0x3c: Pop(0)
0x3d: PushEmpty(int)
0x3e: Call 0x12c4

0x3f: Pop(0)
0x40: @@ SetNPCName(Stack[-1])
0x41: Pop(1)
0x42: PushEmpty(string)
0x43: Call 0x12c6

0x44: Pop(0)
0x45: @@ SetPhoto(Stack[-1])
0x46: Pop(1)
0x47: PushEmpty(int)
0x48: Call 0x155e

0x49: Pop(0)
0x4a: @@ SetPlayerName(Stack[-1])
0x4b: Pop(1)
0x4c: Stack[-2] = (int) -1
0x4d: @ IsOverrideActive(Stack[-3])
0x4e: Pop(0)
0x4f: Push(Stack[-3])
0x50: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x51: Stack[-10] = (int) -2
0x52: Return(); Pop(8)

0x53: @ DoDialog(Stack[-4])
0x54: Pop(0)
0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[-11]
0x57: Stack[-1] = Stack[-6]
0x58: Push(-2, 4); TaskCall(3)
0x59: Call 0x70

0x5a: Pop(-2, 4); TaskReturn
0x5b: Pop(2)
0x5c: @@ IsDialogEnd(Stack[-1])
0x5d: Pop(0)
0x5e: Pop(0); Push((bool) Stack[-1] == 0)
0x5f: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x60: @ sync()
0x61: Pop(0)
0x62: @@ IsDialogEnd(Stack[-1])
0x63: Pop(0)
0x64: GOTO 0x5e

0x65: PushEmpty(object)
0x66: Stack[-1] = Stack[-10]
0x67: Call 0x127b

0x68: Pop(1)
0x69: @ StopDialog(Stack[-4])
0x6a: Pop(0)
0x6b: @@ GetReturnValue(Stack[-2])
0x6c: Pop(0)
0x6d: Stack[-10] = Stack[-2]
0x6e: Return(); Pop(8)

0x6f: Stack[-4] = 0
0x70: PushEmpty()
0x71: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x72: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x73: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x74: Push((int) 1)
0x75: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x76: PushEmpty(object, object)
0x77: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x78: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x79: Call 0x1334

0x7a: Pop(2)
0x7b: PushEmpty(string)
0x7c: Stack[-1] = "Neutral"
0x7d: Call 0xb9

0x7e: Pop(1)
0x7f: Push((int) 72)
0x80: @@ SetMessage(Stack[-1])
0x81: Pop(1)
0x82: @@ ClearReplies()
0x83: Pop(0)
0x84: Push((int) 73)
0x85: Push((int) 87)
0x86: Push((int) 85)
0x87: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88: Pop(3)
0x89: Push((int) 74)
0x8a: Push((int) 88)
0x8b: Push((int) 86)
0x8c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d: Pop(3)
0x8e: Push((int) 86)
0x8f: Push((int) 87)
0x90: Push((int) 98)
0x91: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92: Pop(3)
0x93: Push((int) 87)
0x94: Push((int) 87)
0x95: Push((int) 99)
0x96: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x97: Pop(3)
0x98: GOTO 0x9b

0x99: Return(); Pop(0)

0x9a: GOTO 0x74

0x9b: PushEmpty(bool)
0x9c: Call 0x12c8

0x9d: Pop(0)
0x9e: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0x9f: @ lshWaitForAnimEnd()
0xa0: Pop(0)
0xa1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: GOTO 0xa9

0xa4: PushEmpty(string)
0xa5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa6: Call 0x127f

0xa7: Pop(1)
0xa8: GOTO 0x9f

0xa9: GOTO 0xb8

0xaa: Push("all")
0xab: Push("idle")
0xac: @ PlayAnimation(Stack[-2], Stack[-1])
0xad: Pop(2)
0xae: @ WaitForAnimEnd()
0xaf: Pop(0)
0xb0: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb1: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb2: GOTO 0xb8

0xb3: Push("all")
0xb4: Push("idle")
0xb5: @ PlayAnimation(Stack[-2], Stack[-1])
0xb6: Pop(2)
0xb7: GOTO 0xae

0xb8: Return(); Pop(0)

0xb9: PushEmpty()
0xba: PushEmpty(bool)
0xbb: Call 0x12c8

0xbc: Pop(0)
0xbd: Pop(1); Push((bool) Stack[-1] == 0)
0xbe: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xbf: Return(); Pop(0)

0xc0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc1: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xc2: Return(); Pop(0)

0xc3: PushEmpty(string)
0xc4: Stack[-1] = Stack[-2]
0xc5: Call 0x127f

0xc6: Pop(1)
0xc7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc8: Return(); Pop(0)

0xc9: PushEmpty()
0xca: Push((int) 1)
0xcb: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0xcc: PushEmpty()
0xcd: Call 0x1291

0xce: Pop(0)
0xcf: Push((int) 84)
0xd0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd1: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xd2: PushEmpty(object, object)
0xd3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd5: Call 0x1334

0xd6: Pop(2)
0xd7: PushEmpty(string)
0xd8: Stack[-1] = "Neutral"
0xd9: Call 0xb9

0xda: Pop(1)
0xdb: Push((int) 72)
0xdc: @@ SetMessage(Stack[-1])
0xdd: Pop(1)
0xde: @@ ClearReplies()
0xdf: Pop(0)
0xe0: Push((int) 73)
0xe1: Push((int) 87)
0xe2: Push((int) 85)
0xe3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe4: Pop(3)
0xe5: Push((int) 74)
0xe6: Push((int) 88)
0xe7: Push((int) 86)
0xe8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe9: Pop(3)
0xea: Push((int) 86)
0xeb: Push((int) 87)
0xec: Push((int) 98)
0xed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xee: Pop(3)
0xef: Push((int) 87)
0xf0: Push((int) 87)
0xf1: Push((int) 99)
0xf2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf3: Pop(3)
0xf4: Return(); Pop(0)

0xf5: Push((int) 88)
0xf6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf7: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0xf8: PushEmpty(object, object)
0xf9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfb: Call 0x131c

0xfc: Pop(2)
0xfd: PushEmpty(string)
0xfe: Stack[-1] = "Neutral"
0xff: Call 0xb9

0x100: Pop(1)
0x101: Push((int) 76)
0x102: @@ SetMessage(Stack[-1])
0x103: Pop(1)
0x104: @@ ClearReplies()
0x105: Pop(0)
0x106: Push((int) 85)
0x107: Push((int) 87)
0x108: Push((int) 97)
0x109: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10a: Pop(3)
0x10b: Return(); Pop(0)

0x10c: Push((int) 87)
0x10d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10e: IF (Stack[-1] == 0) GOTO 0x123; Pop(1)

0x10f: PushEmpty(string)
0x110: Stack[-1] = "Neutral"
0x111: Call 0xb9

0x112: Pop(1)
0x113: Push((int) 75)
0x114: @@ SetMessage(Stack[-1])
0x115: Pop(1)
0x116: @@ ClearReplies()
0x117: Pop(0)
0x118: Push((int) 77)
0x119: Push((int) 93)
0x11a: Push((int) 89)
0x11b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11c: Pop(3)
0x11d: Push((int) 78)
0x11e: Push((int) 91)
0x11f: Push((int) 90)
0x120: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x121: Pop(3)
0x122: Return(); Pop(0)

0x123: Push((int) 91)
0x124: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x125: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x126: PushEmpty(string)
0x127: Stack[-1] = "Neutral"
0x128: Call 0xb9

0x129: Pop(1)
0x12a: Push((int) 79)
0x12b: @@ SetMessage(Stack[-1])
0x12c: Pop(1)
0x12d: @@ ClearReplies()
0x12e: Pop(0)
0x12f: Push((int) 80)
0x130: Push((int) -1)
0x131: Push((int) 92)
0x132: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x133: Pop(3)
0x134: Return(); Pop(0)

0x135: Push((int) 93)
0x136: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x137: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x138: PushEmpty(string)
0x139: Stack[-1] = "Neutral"
0x13a: Call 0xb9

0x13b: Pop(1)
0x13c: Push((int) 81)
0x13d: @@ SetMessage(Stack[-1])
0x13e: Pop(1)
0x13f: @@ ClearReplies()
0x140: Pop(0)
0x141: Push((int) 83)
0x142: Push((int) -1)
0x143: Push((int) 95)
0x144: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x145: Pop(3)
0x146: Push((int) 84)
0x147: Push((int) -1)
0x148: Push((int) 96)
0x149: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14a: Pop(3)
0x14b: Return(); Pop(0)

0x14c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x14d: PushEmpty(bool)
0x14e: Call 0x12c8

0x14f: Pop(0)
0x150: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x151: @ lshStopAnimation()
0x152: Pop(0)
0x153: GOTO 0x156

0x154: @ StopAnimation()
0x155: Pop(0)
0x156: Return(); Pop(0)

0x157: GOTO 0xca

0x158: Return(); Pop(0)

0x159: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x15a: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x15b: PushEmpty(bool, object)
0x15c: Stack[-1] = Stack[-11]
0x15d: Call 0x1243

0x15e: Pop(1)
0x15f: Pop(1); Push((bool) Stack[-1] == 0)
0x160: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x161: Stack[-10] = (int) -2
0x162: Return(); Pop(8)

0x163: @ CreateDialog(Stack[-4])
0x164: Pop(0)
0x165: PushEmpty(int)
0x166: Call 0x12c4

0x167: Pop(0)
0x168: @@ SetNPCName(Stack[-1])
0x169: Pop(1)
0x16a: PushEmpty(string)
0x16b: Call 0x12c6

0x16c: Pop(0)
0x16d: @@ SetPhoto(Stack[-1])
0x16e: Pop(1)
0x16f: PushEmpty(int)
0x170: Call 0x155e

0x171: Pop(0)
0x172: @@ SetPlayerName(Stack[-1])
0x173: Pop(1)
0x174: Stack[-2] = (int) -1
0x175: @ IsOverrideActive(Stack[-3])
0x176: Pop(0)
0x177: Push(Stack[-3])
0x178: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x179: Stack[-10] = (int) -2
0x17a: Return(); Pop(8)

0x17b: @ DoDialog(Stack[-4])
0x17c: Pop(0)
0x17d: PushEmpty(object, object)
0x17e: Stack[-2] = Stack[-11]
0x17f: Stack[-1] = Stack[-6]
0x180: Push(-2, 4); TaskCall(5)
0x181: Call 0x198

0x182: Pop(-2, 4); TaskReturn
0x183: Pop(2)
0x184: @@ IsDialogEnd(Stack[-1])
0x185: Pop(0)
0x186: Pop(0); Push((bool) Stack[-1] == 0)
0x187: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x188: @ sync()
0x189: Pop(0)
0x18a: @@ IsDialogEnd(Stack[-1])
0x18b: Pop(0)
0x18c: GOTO 0x186

0x18d: PushEmpty(object)
0x18e: Stack[-1] = Stack[-10]
0x18f: Call 0x127b

0x190: Pop(1)
0x191: @ StopDialog(Stack[-4])
0x192: Pop(0)
0x193: @@ GetReturnValue(Stack[-2])
0x194: Pop(0)
0x195: Stack[-10] = Stack[-2]
0x196: Return(); Pop(8)

0x197: Stack[-4] = 0
0x198: PushEmpty()
0x199: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x19a: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x19b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x19c: Push((int) 1)
0x19d: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x19e: PushEmpty(bool)
0x19f: Stack[-1] = (bool) 0
0x1a0: PushEmpty(bool, object)
0x1a1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a2: Call 0x1418

0x1a3: Pop(1)
0x1a4: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1a5: PushEmpty(bool, object)
0x1a6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a7: Call 0x1424

0x1a8: Pop(1)
0x1a9: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1aa: Stack[-1] = (bool) 1
0x1ab: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1ac: PushEmpty(object, object)
0x1ad: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ae: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1af: Call 0x1322

0x1b0: Pop(2)
0x1b1: PushEmpty(object, object)
0x1b2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b4: Call 0x1378

0x1b5: Pop(2)
0x1b6: PushEmpty(string)
0x1b7: Stack[-1] = "Neutral"
0x1b8: Call 0x208

0x1b9: Pop(1)
0x1ba: Push((int) 3206)
0x1bb: @@ SetMessage(Stack[-1])
0x1bc: Pop(1)
0x1bd: @@ ClearReplies()
0x1be: Pop(0)
0x1bf: Push((int) 3207)
0x1c0: Push((int) 3543)
0x1c1: Push((int) 3540)
0x1c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c3: Pop(3)
0x1c4: Push((int) 3208)
0x1c5: Push((int) 3542)
0x1c6: Push((int) 3541)
0x1c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c8: Pop(3)
0x1c9: GOTO 0x1ea

0x1ca: PushEmpty(object, object)
0x1cb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1cc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1cd: Call 0x1378

0x1ce: Pop(2)
0x1cf: PushEmpty(string)
0x1d0: Stack[-1] = "Neutral"
0x1d1: Call 0x208

0x1d2: Pop(1)
0x1d3: Push((int) 12086)
0x1d4: @@ SetMessage(Stack[-1])
0x1d5: Pop(1)
0x1d6: @@ ClearReplies()
0x1d7: Pop(0)
0x1d8: PushEmpty(bool, object)
0x1d9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1da: Call 0x1430

0x1db: Pop(1)
0x1dc: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1dd: Push((int) 12087)
0x1de: Push((int) 13314)
0x1df: Push((int) 13313)
0x1e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e1: Pop(3)
0x1e2: Push((int) 12094)
0x1e3: Push((int) -1)
0x1e4: Push((int) 13320)
0x1e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e6: Pop(3)
0x1e7: GOTO 0x1ea

0x1e8: Return(); Pop(0)

0x1e9: GOTO 0x19c

0x1ea: PushEmpty(bool)
0x1eb: Call 0x12c8

0x1ec: Pop(0)
0x1ed: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1ee: @ lshWaitForAnimEnd()
0x1ef: Pop(0)
0x1f0: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1f2: GOTO 0x1f8

0x1f3: PushEmpty(string)
0x1f4: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1f5: Call 0x127f

0x1f6: Pop(1)
0x1f7: GOTO 0x1ee

0x1f8: GOTO 0x207

0x1f9: Push("all")
0x1fa: Push("idle")
0x1fb: @ PlayAnimation(Stack[-2], Stack[-1])
0x1fc: Pop(2)
0x1fd: @ WaitForAnimEnd()
0x1fe: Pop(0)
0x1ff: Push( Stack[3 + Tasks[-1].StackPointer] )
0x200: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x201: GOTO 0x207

0x202: Push("all")
0x203: Push("idle")
0x204: @ PlayAnimation(Stack[-2], Stack[-1])
0x205: Pop(2)
0x206: GOTO 0x1fd

0x207: Return(); Pop(0)

0x208: PushEmpty()
0x209: PushEmpty(bool)
0x20a: Call 0x12c8

0x20b: Pop(0)
0x20c: Pop(1); Push((bool) Stack[-1] == 0)
0x20d: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x20e: Return(); Pop(0)

0x20f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x210: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x211: Return(); Pop(0)

0x212: PushEmpty(string)
0x213: Stack[-1] = Stack[-2]
0x214: Call 0x127f

0x215: Pop(1)
0x216: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x217: Return(); Pop(0)

0x218: PushEmpty()
0x219: Push((int) 1)
0x21a: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x21b: PushEmpty()
0x21c: Call 0x1291

0x21d: Pop(0)
0x21e: Push((int) 13313)
0x21f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x220: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x221: PushEmpty(object, object)
0x222: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x223: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x224: Call 0x1328

0x225: Pop(2)
0x226: Push((int) 3539)
0x227: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x228: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x229: PushEmpty(bool)
0x22a: Stack[-1] = (bool) 0
0x22b: PushEmpty(bool, object)
0x22c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x22d: Call 0x1418

0x22e: Pop(1)
0x22f: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x230: PushEmpty(bool, object)
0x231: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x232: Call 0x1424

0x233: Pop(1)
0x234: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x235: Stack[-1] = (bool) 1
0x236: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x237: PushEmpty(object, object)
0x238: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x239: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x23a: Call 0x1322

0x23b: Pop(2)
0x23c: PushEmpty(object, object)
0x23d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x23e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x23f: Call 0x1378

0x240: Pop(2)
0x241: PushEmpty(string)
0x242: Stack[-1] = "Neutral"
0x243: Call 0x208

0x244: Pop(1)
0x245: Push((int) 3206)
0x246: @@ SetMessage(Stack[-1])
0x247: Pop(1)
0x248: @@ ClearReplies()
0x249: Pop(0)
0x24a: Push((int) 3207)
0x24b: Push((int) 3543)
0x24c: Push((int) 3540)
0x24d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24e: Pop(3)
0x24f: Push((int) 3208)
0x250: Push((int) 3542)
0x251: Push((int) 3541)
0x252: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x253: Pop(3)
0x254: Return(); Pop(0)

0x255: PushEmpty(object, object)
0x256: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x257: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x258: Call 0x1378

0x259: Pop(2)
0x25a: PushEmpty(string)
0x25b: Stack[-1] = "Neutral"
0x25c: Call 0x208

0x25d: Pop(1)
0x25e: Push((int) 12086)
0x25f: @@ SetMessage(Stack[-1])
0x260: Pop(1)
0x261: @@ ClearReplies()
0x262: Pop(0)
0x263: PushEmpty(bool, object)
0x264: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x265: Call 0x1430

0x266: Pop(1)
0x267: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x268: Push((int) 12087)
0x269: Push((int) 13314)
0x26a: Push((int) 13313)
0x26b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26c: Pop(3)
0x26d: Push((int) 12094)
0x26e: Push((int) -1)
0x26f: Push((int) 13320)
0x270: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x271: Pop(3)
0x272: Return(); Pop(0)

0x273: Push((int) 13314)
0x274: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x275: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x276: PushEmpty(string)
0x277: Stack[-1] = "Neutral"
0x278: Call 0x208

0x279: Pop(1)
0x27a: Push((int) 12088)
0x27b: @@ SetMessage(Stack[-1])
0x27c: Pop(1)
0x27d: @@ ClearReplies()
0x27e: Pop(0)
0x27f: Push((int) 12089)
0x280: Push((int) 13316)
0x281: Push((int) 13315)
0x282: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x283: Pop(3)
0x284: Return(); Pop(0)

0x285: Push((int) 13316)
0x286: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x287: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x288: PushEmpty(string)
0x289: Stack[-1] = "Neutral"
0x28a: Call 0x208

0x28b: Pop(1)
0x28c: Push((int) 12090)
0x28d: @@ SetMessage(Stack[-1])
0x28e: Pop(1)
0x28f: @@ ClearReplies()
0x290: Pop(0)
0x291: Push((int) 12091)
0x292: Push((int) 13318)
0x293: Push((int) 13317)
0x294: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x295: Pop(3)
0x296: Return(); Pop(0)

0x297: Push((int) 13318)
0x298: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x299: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x29a: PushEmpty(string)
0x29b: Stack[-1] = "Neutral"
0x29c: Call 0x208

0x29d: Pop(1)
0x29e: Push((int) 12092)
0x29f: @@ SetMessage(Stack[-1])
0x2a0: Pop(1)
0x2a1: @@ ClearReplies()
0x2a2: Pop(0)
0x2a3: Push((int) 12093)
0x2a4: Push((int) -1)
0x2a5: Push((int) 13319)
0x2a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a7: Pop(3)
0x2a8: Return(); Pop(0)

0x2a9: Push((int) 3542)
0x2aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ab: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2ac: PushEmpty(string)
0x2ad: Stack[-1] = "Neutral"
0x2ae: Call 0x208

0x2af: Pop(1)
0x2b0: Push((int) 3209)
0x2b1: @@ SetMessage(Stack[-1])
0x2b2: Pop(1)
0x2b3: @@ ClearReplies()
0x2b4: Pop(0)
0x2b5: Push((int) 3215)
0x2b6: Push((int) 3543)
0x2b7: Push((int) 3549)
0x2b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b9: Pop(3)
0x2ba: Push((int) 3216)
0x2bb: Push((int) 3543)
0x2bc: Push((int) 3551)
0x2bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2be: Pop(3)
0x2bf: Return(); Pop(0)

0x2c0: Push((int) 3543)
0x2c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c2: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2c3: PushEmpty(string)
0x2c4: Stack[-1] = "Neutral"
0x2c5: Call 0x208

0x2c6: Pop(1)
0x2c7: Push((int) 3210)
0x2c8: @@ SetMessage(Stack[-1])
0x2c9: Pop(1)
0x2ca: @@ ClearReplies()
0x2cb: Pop(0)
0x2cc: Push((int) 3211)
0x2cd: Push((int) 3545)
0x2ce: Push((int) 3544)
0x2cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d0: Pop(3)
0x2d1: Push((int) 3214)
0x2d2: Push((int) 3545)
0x2d3: Push((int) 3547)
0x2d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d5: Pop(3)
0x2d6: Return(); Pop(0)

0x2d7: Push((int) 3545)
0x2d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d9: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2da: PushEmpty(string)
0x2db: Stack[-1] = "Neutral"
0x2dc: Call 0x208

0x2dd: Pop(1)
0x2de: Push((int) 3212)
0x2df: @@ SetMessage(Stack[-1])
0x2e0: Pop(1)
0x2e1: @@ ClearReplies()
0x2e2: Pop(0)
0x2e3: Push((int) 3213)
0x2e4: Push((int) -1)
0x2e5: Push((int) 3546)
0x2e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e7: Pop(3)
0x2e8: Push((int) 3217)
0x2e9: Push((int) 3554)
0x2ea: Push((int) 3553)
0x2eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ec: Pop(3)
0x2ed: Return(); Pop(0)

0x2ee: Push((int) 3554)
0x2ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f0: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x2f1: PushEmpty(string)
0x2f2: Stack[-1] = "Neutral"
0x2f3: Call 0x208

0x2f4: Pop(1)
0x2f5: Push((int) 3218)
0x2f6: @@ SetMessage(Stack[-1])
0x2f7: Pop(1)
0x2f8: @@ ClearReplies()
0x2f9: Pop(0)
0x2fa: Push((int) 3219)
0x2fb: Push((int) -1)
0x2fc: Push((int) 3555)
0x2fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2fe: Pop(3)
0x2ff: Push((int) 3220)
0x300: Push((int) -1)
0x301: Push((int) 3556)
0x302: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x303: Pop(3)
0x304: Return(); Pop(0)

0x305: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x306: PushEmpty(bool)
0x307: Call 0x12c8

0x308: Pop(0)
0x309: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x30a: @ lshStopAnimation()
0x30b: Pop(0)
0x30c: GOTO 0x30f

0x30d: @ StopAnimation()
0x30e: Pop(0)
0x30f: Return(); Pop(0)

0x310: GOTO 0x219

0x311: Return(); Pop(0)

0x312: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x313: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x314: PushEmpty(bool, object)
0x315: Stack[-1] = Stack[-11]
0x316: Call 0x1243

0x317: Pop(1)
0x318: Pop(1); Push((bool) Stack[-1] == 0)
0x319: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x31a: Stack[-10] = (int) -2
0x31b: Return(); Pop(8)

0x31c: @ CreateDialog(Stack[-4])
0x31d: Pop(0)
0x31e: PushEmpty(int)
0x31f: Call 0x12c4

0x320: Pop(0)
0x321: @@ SetNPCName(Stack[-1])
0x322: Pop(1)
0x323: PushEmpty(string)
0x324: Call 0x12c6

0x325: Pop(0)
0x326: @@ SetPhoto(Stack[-1])
0x327: Pop(1)
0x328: PushEmpty(int)
0x329: Call 0x155e

0x32a: Pop(0)
0x32b: @@ SetPlayerName(Stack[-1])
0x32c: Pop(1)
0x32d: Stack[-2] = (int) -1
0x32e: @ IsOverrideActive(Stack[-3])
0x32f: Pop(0)
0x330: Push(Stack[-3])
0x331: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x332: Stack[-10] = (int) -2
0x333: Return(); Pop(8)

0x334: @ DoDialog(Stack[-4])
0x335: Pop(0)
0x336: PushEmpty(object, object)
0x337: Stack[-2] = Stack[-11]
0x338: Stack[-1] = Stack[-6]
0x339: Push(-2, 4); TaskCall(7)
0x33a: Call 0x351

0x33b: Pop(-2, 4); TaskReturn
0x33c: Pop(2)
0x33d: @@ IsDialogEnd(Stack[-1])
0x33e: Pop(0)
0x33f: Pop(0); Push((bool) Stack[-1] == 0)
0x340: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x341: @ sync()
0x342: Pop(0)
0x343: @@ IsDialogEnd(Stack[-1])
0x344: Pop(0)
0x345: GOTO 0x33f

0x346: PushEmpty(object)
0x347: Stack[-1] = Stack[-10]
0x348: Call 0x127b

0x349: Pop(1)
0x34a: @ StopDialog(Stack[-4])
0x34b: Pop(0)
0x34c: @@ GetReturnValue(Stack[-2])
0x34d: Pop(0)
0x34e: Stack[-10] = Stack[-2]
0x34f: Return(); Pop(8)

0x350: Stack[-4] = 0
0x351: PushEmpty()
0x352: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x353: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x354: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x355: Push((int) 1)
0x356: IF (Stack[-1] == 0) GOTO 0x453; Pop(1)

0x357: PushEmpty(bool, object)
0x358: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x359: Call 0x13ba

0x35a: Pop(1)
0x35b: Pop(1); Push((bool) Stack[-1] == 0)
0x35c: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x35d: PushEmpty(string)
0x35e: Stack[-1] = "Neutral"
0x35f: Call 0x471

0x360: Pop(1)
0x361: Push((int) 6253)
0x362: @@ SetMessage(Stack[-1])
0x363: Pop(1)
0x364: @@ ClearReplies()
0x365: Pop(0)
0x366: Push((int) 6254)
0x367: Push((int) 6921)
0x368: Push((int) 6920)
0x369: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36a: Pop(3)
0x36b: Push((int) 6259)
0x36c: Push((int) 6926)
0x36d: Push((int) 6925)
0x36e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36f: Pop(3)
0x370: GOTO 0x453

0x371: PushEmpty(bool, object)
0x372: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x373: Call 0x1396

0x374: Pop(1)
0x375: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x376: PushEmpty(string)
0x377: Stack[-1] = "Neutral"
0x378: Call 0x471

0x379: Pop(1)
0x37a: Push((int) 5533)
0x37b: @@ SetMessage(Stack[-1])
0x37c: Pop(1)
0x37d: @@ ClearReplies()
0x37e: Pop(0)
0x37f: Push((int) 5534)
0x380: Push((int) 6099)
0x381: Push((int) 6098)
0x382: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x383: Pop(3)
0x384: Push((int) 5571)
0x385: Push((int) 6140)
0x386: Push((int) 6139)
0x387: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x388: Pop(3)
0x389: GOTO 0x453

0x38a: PushEmpty(bool, object)
0x38b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x38c: Call 0x13a2

0x38d: Pop(1)
0x38e: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x38f: PushEmpty(string)
0x390: Stack[-1] = "Neutral"
0x391: Call 0x471

0x392: Pop(1)
0x393: Push((int) 5574)
0x394: @@ SetMessage(Stack[-1])
0x395: Pop(1)
0x396: @@ ClearReplies()
0x397: Pop(0)
0x398: Push((int) 5575)
0x399: Push((int) 6145)
0x39a: Push((int) 6144)
0x39b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39c: Pop(3)
0x39d: GOTO 0x453

0x39e: PushEmpty(bool)
0x39f: Stack[-1] = (bool) 0
0x3a0: PushEmpty(bool, object)
0x3a1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3a2: Call 0x13ae

0x3a3: Pop(1)
0x3a4: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x3a5: PushEmpty(bool, object)
0x3a6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3a7: Call 0x13ea

0x3a8: Pop(1)
0x3a9: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x3aa: Stack[-1] = (bool) 1
0x3ab: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3ac: PushEmpty(string)
0x3ad: Stack[-1] = "Neutral"
0x3ae: Call 0x471

0x3af: Pop(1)
0x3b0: Push((int) 5527)
0x3b1: @@ SetMessage(Stack[-1])
0x3b2: Pop(1)
0x3b3: @@ ClearReplies()
0x3b4: Pop(0)
0x3b5: Push((int) 5528)
0x3b6: Push((int) 6901)
0x3b7: Push((int) 6092)
0x3b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b9: Pop(3)
0x3ba: Push((int) 5529)
0x3bb: Push((int) 6187)
0x3bc: Push((int) 6093)
0x3bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3be: Pop(3)
0x3bf: GOTO 0x453

0x3c0: PushEmpty(bool, object)
0x3c1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3c2: Call 0x138a

0x3c3: Pop(1)
0x3c4: IF (Stack[-1] == 0) GOTO 0x3d9; Pop(1)

0x3c5: PushEmpty(string)
0x3c6: Stack[-1] = "Neutral"
0x3c7: Call 0x471

0x3c8: Pop(1)
0x3c9: Push((int) 5604)
0x3ca: @@ SetMessage(Stack[-1])
0x3cb: Pop(1)
0x3cc: @@ ClearReplies()
0x3cd: Pop(0)
0x3ce: Push((int) 5605)
0x3cf: Push((int) 6180)
0x3d0: Push((int) 6179)
0x3d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d2: Pop(3)
0x3d3: Push((int) 5611)
0x3d4: Push((int) 6180)
0x3d5: Push((int) 6185)
0x3d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d7: Pop(3)
0x3d8: GOTO 0x453

0x3d9: PushEmpty(string)
0x3da: Stack[-1] = "Neutral"
0x3db: Call 0x471

0x3dc: Pop(1)
0x3dd: Push((int) 8097)
0x3de: @@ SetMessage(Stack[-1])
0x3df: Pop(1)
0x3e0: @@ ClearReplies()
0x3e1: Pop(0)
0x3e2: PushEmpty(bool, object)
0x3e3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3e4: Call 0x13ea

0x3e5: Pop(1)
0x3e6: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3e7: Push((int) 8098)
0x3e8: Push((int) -1)
0x3e9: Push((int) 8921)
0x3ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3eb: Pop(3)
0x3ec: PushEmpty(bool)
0x3ed: Stack[-1] = (bool) 0
0x3ee: PushEmpty(bool, object)
0x3ef: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3f0: Call 0x14a8

0x3f1: Pop(1)
0x3f2: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3f3: PushEmpty(bool, object)
0x3f4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3f5: Call 0x13ae

0x3f6: Pop(1)
0x3f7: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3f8: Stack[-1] = (bool) 1
0x3f9: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3fa: Push((int) 8109)
0x3fb: Push((int) 8947)
0x3fc: Push((int) 8932)
0x3fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fe: Pop(3)
0x3ff: PushEmpty(bool)
0x400: Stack[-1] = (bool) 0
0x401: PushEmpty(bool, object)
0x402: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x403: Call 0x1448

0x404: Pop(1)
0x405: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x406: PushEmpty(bool, object)
0x407: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x408: Call 0x14b4

0x409: Pop(1)
0x40a: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x40b: Stack[-1] = (bool) 1
0x40c: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x40d: Push((int) 8111)
0x40e: Push((int) 8948)
0x40f: Push((int) 8934)
0x410: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x411: Pop(3)
0x412: PushEmpty(bool)
0x413: Stack[-1] = (bool) 0
0x414: PushEmpty(bool, object)
0x415: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x416: Call 0x140c

0x417: Pop(1)
0x418: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x419: PushEmpty(bool, object)
0x41a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x41b: Call 0x14c0

0x41c: Pop(1)
0x41d: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x41e: Stack[-1] = (bool) 1
0x41f: IF (Stack[-1] == 0) GOTO 0x425; Pop(1)

0x420: Push((int) 8115)
0x421: Push((int) 8949)
0x422: Push((int) 8938)
0x423: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x424: Pop(3)
0x425: PushEmpty(bool)
0x426: Stack[-1] = (bool) 0
0x427: PushEmpty(bool, object)
0x428: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x429: Call 0x1514

0x42a: Pop(1)
0x42b: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x42c: PushEmpty(bool, object)
0x42d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x42e: Call 0x14cc

0x42f: Pop(1)
0x430: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x431: Stack[-1] = (bool) 1
0x432: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x433: Push((int) 8117)
0x434: Push((int) 8950)
0x435: Push((int) 8940)
0x436: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x437: Pop(3)
0x438: PushEmpty(bool)
0x439: Stack[-1] = (bool) 0
0x43a: PushEmpty(bool, object)
0x43b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x43c: Call 0x1508

0x43d: Pop(1)
0x43e: IF (Stack[-1] == 0) GOTO 0x445; Pop(1)

0x43f: PushEmpty(bool, object)
0x440: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x441: Call 0x14d8

0x442: Pop(1)
0x443: IF (Stack[-1] == 0) GOTO 0x445; Pop(1)

0x444: Stack[-1] = (bool) 1
0x445: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x446: Push((int) 8119)
0x447: Push((int) 8951)
0x448: Push((int) 8942)
0x449: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x44a: Pop(3)
0x44b: Push((int) 15220)
0x44c: Push((int) -1)
0x44d: Push((int) 16497)
0x44e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x44f: Pop(3)
0x450: GOTO 0x453

0x451: Return(); Pop(0)

0x452: GOTO 0x355

0x453: PushEmpty(bool)
0x454: Call 0x12c8

0x455: Pop(0)
0x456: IF (Stack[-1] == 0) GOTO 0x462; Pop(1)

0x457: @ lshWaitForAnimEnd()
0x458: Pop(0)
0x459: Push( Stack[3 + Tasks[-1].StackPointer] )
0x45a: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x45b: GOTO 0x461

0x45c: PushEmpty(string)
0x45d: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x45e: Call 0x127f

0x45f: Pop(1)
0x460: GOTO 0x457

0x461: GOTO 0x470

0x462: Push("all")
0x463: Push("idle")
0x464: @ PlayAnimation(Stack[-2], Stack[-1])
0x465: Pop(2)
0x466: @ WaitForAnimEnd()
0x467: Pop(0)
0x468: Push( Stack[3 + Tasks[-1].StackPointer] )
0x469: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x46a: GOTO 0x470

0x46b: Push("all")
0x46c: Push("idle")
0x46d: @ PlayAnimation(Stack[-2], Stack[-1])
0x46e: Pop(2)
0x46f: GOTO 0x466

0x470: Return(); Pop(0)

0x471: PushEmpty()
0x472: PushEmpty(bool)
0x473: Call 0x12c8

0x474: Pop(0)
0x475: Pop(1); Push((bool) Stack[-1] == 0)
0x476: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x477: Return(); Pop(0)

0x478: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x479: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x47a: Return(); Pop(0)

0x47b: PushEmpty(string)
0x47c: Stack[-1] = Stack[-2]
0x47d: Call 0x127f

0x47e: Pop(1)
0x47f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x480: Return(); Pop(0)

0x481: PushEmpty()
0x482: Push((int) 1)
0x483: IF (Stack[-1] == 0) GOTO 0x936; Pop(1)

0x484: PushEmpty()
0x485: Call 0x1291

0x486: Pop(0)
0x487: Push((int) 6112)
0x488: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x489: IF (Stack[-1] == 0) GOTO 0x48f; Pop(1)

0x48a: PushEmpty(object, object)
0x48b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x48c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x48d: Call 0x12d0

0x48e: Pop(2)
0x48f: Push((int) 6113)
0x490: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x491: IF (Stack[-1] == 0) GOTO 0x497; Pop(1)

0x492: PushEmpty(object, object)
0x493: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x494: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x495: Call 0x12d0

0x496: Pop(2)
0x497: Push((int) 6122)
0x498: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x499: IF (Stack[-1] == 0) GOTO 0x49f; Pop(1)

0x49a: PushEmpty(object, object)
0x49b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x49c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x49d: Call 0x12d0

0x49e: Pop(2)
0x49f: Push((int) 6123)
0x4a0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4a1: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x4a2: PushEmpty(object, object)
0x4a3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4a4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4a5: Call 0x12d0

0x4a6: Pop(2)
0x4a7: Push((int) 6127)
0x4a8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4a9: IF (Stack[-1] == 0) GOTO 0x4af; Pop(1)

0x4aa: PushEmpty(object, object)
0x4ab: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4ac: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4ad: Call 0x12d0

0x4ae: Pop(2)
0x4af: Push((int) 6128)
0x4b0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4b1: IF (Stack[-1] == 0) GOTO 0x4b7; Pop(1)

0x4b2: PushEmpty(object, object)
0x4b3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4b4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4b5: Call 0x12d0

0x4b6: Pop(2)
0x4b7: Push((int) 6154)
0x4b8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4b9: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4ba: PushEmpty(object, object)
0x4bb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4bc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4bd: Call 0x12d6

0x4be: Pop(2)
0x4bf: Push((int) 6155)
0x4c0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4c1: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4c2: PushEmpty(object, object)
0x4c3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4c4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4c5: Call 0x12d6

0x4c6: Pop(2)
0x4c7: Push((int) 6158)
0x4c8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4c9: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4ca: PushEmpty(object, object)
0x4cb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4cc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4cd: Call 0x12d6

0x4ce: Pop(2)
0x4cf: Push((int) 6159)
0x4d0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4d1: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4d2: PushEmpty(object, object)
0x4d3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4d4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4d5: Call 0x12d6

0x4d6: Pop(2)
0x4d7: Push((int) 6164)
0x4d8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4d9: IF (Stack[-1] == 0) GOTO 0x4df; Pop(1)

0x4da: PushEmpty(object, object)
0x4db: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4dc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4dd: Call 0x12d6

0x4de: Pop(2)
0x4df: Push((int) 6173)
0x4e0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4e1: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4e2: PushEmpty(object, object)
0x4e3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4e4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4e5: Call 0x12d6

0x4e6: Pop(2)
0x4e7: Push((int) 6902)
0x4e8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4e9: IF (Stack[-1] == 0) GOTO 0x4ef; Pop(1)

0x4ea: PushEmpty(object, object)
0x4eb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4ec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4ed: Call 0x12dc

0x4ee: Pop(2)
0x4ef: Push((int) 6903)
0x4f0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4f1: IF (Stack[-1] == 0) GOTO 0x4f7; Pop(1)

0x4f2: PushEmpty(object, object)
0x4f3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4f4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4f5: Call 0x12dc

0x4f6: Pop(2)
0x4f7: Push((int) 6904)
0x4f8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4f9: IF (Stack[-1] == 0) GOTO 0x4ff; Pop(1)

0x4fa: PushEmpty(object, object)
0x4fb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4fc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4fd: Call 0x12dc

0x4fe: Pop(2)
0x4ff: Push((int) 6188)
0x500: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x501: IF (Stack[-1] == 0) GOTO 0x507; Pop(1)

0x502: PushEmpty(object, object)
0x503: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x504: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x505: Call 0x12dc

0x506: Pop(2)
0x507: Push((int) 6183)
0x508: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x509: IF (Stack[-1] == 0) GOTO 0x50f; Pop(1)

0x50a: PushEmpty(object, object)
0x50b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x50c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x50d: Call 0x12ca

0x50e: Pop(2)
0x50f: Push((int) 6184)
0x510: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x511: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x512: PushEmpty(object, object)
0x513: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x514: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x515: Call 0x12ca

0x516: Pop(2)
0x517: Push((int) 8932)
0x518: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x519: IF (Stack[-1] == 0) GOTO 0x51f; Pop(1)

0x51a: PushEmpty(object, object)
0x51b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x51c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x51d: Call 0x12dc

0x51e: Pop(2)
0x51f: Push((int) 8934)
0x520: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x521: IF (Stack[-1] == 0) GOTO 0x527; Pop(1)

0x522: PushEmpty(object, object)
0x523: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x524: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x525: Call 0x1360

0x526: Pop(2)
0x527: Push((int) 8938)
0x528: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x529: IF (Stack[-1] == 0) GOTO 0x52f; Pop(1)

0x52a: PushEmpty(object, object)
0x52b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x52c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x52d: Call 0x1366

0x52e: Pop(2)
0x52f: Push((int) 8940)
0x530: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x531: IF (Stack[-1] == 0) GOTO 0x537; Pop(1)

0x532: PushEmpty(object, object)
0x533: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x534: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x535: Call 0x136c

0x536: Pop(2)
0x537: Push((int) 8942)
0x538: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x539: IF (Stack[-1] == 0) GOTO 0x53f; Pop(1)

0x53a: PushEmpty(object, object)
0x53b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x53c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x53d: Call 0x1372

0x53e: Pop(2)
0x53f: Push((int) 6919)
0x540: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x541: IF (Stack[-1] == 0) GOTO 0x63c; Pop(1)

0x542: PushEmpty(bool, object)
0x543: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x544: Call 0x13ba

0x545: Pop(1)
0x546: Pop(1); Push((bool) Stack[-1] == 0)
0x547: IF (Stack[-1] == 0) GOTO 0x55c; Pop(1)

0x548: PushEmpty(string)
0x549: Stack[-1] = "Neutral"
0x54a: Call 0x471

0x54b: Pop(1)
0x54c: Push((int) 6253)
0x54d: @@ SetMessage(Stack[-1])
0x54e: Pop(1)
0x54f: @@ ClearReplies()
0x550: Pop(0)
0x551: Push((int) 6254)
0x552: Push((int) 6921)
0x553: Push((int) 6920)
0x554: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x555: Pop(3)
0x556: Push((int) 6259)
0x557: Push((int) 6926)
0x558: Push((int) 6925)
0x559: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55a: Pop(3)
0x55b: Return(); Pop(0)

0x55c: PushEmpty(bool, object)
0x55d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x55e: Call 0x1396

0x55f: Pop(1)
0x560: IF (Stack[-1] == 0) GOTO 0x575; Pop(1)

0x561: PushEmpty(string)
0x562: Stack[-1] = "Neutral"
0x563: Call 0x471

0x564: Pop(1)
0x565: Push((int) 5533)
0x566: @@ SetMessage(Stack[-1])
0x567: Pop(1)
0x568: @@ ClearReplies()
0x569: Pop(0)
0x56a: Push((int) 5534)
0x56b: Push((int) 6099)
0x56c: Push((int) 6098)
0x56d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x56e: Pop(3)
0x56f: Push((int) 5571)
0x570: Push((int) 6140)
0x571: Push((int) 6139)
0x572: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x573: Pop(3)
0x574: Return(); Pop(0)

0x575: PushEmpty(bool, object)
0x576: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x577: Call 0x13a2

0x578: Pop(1)
0x579: IF (Stack[-1] == 0) GOTO 0x589; Pop(1)

0x57a: PushEmpty(string)
0x57b: Stack[-1] = "Neutral"
0x57c: Call 0x471

0x57d: Pop(1)
0x57e: Push((int) 5574)
0x57f: @@ SetMessage(Stack[-1])
0x580: Pop(1)
0x581: @@ ClearReplies()
0x582: Pop(0)
0x583: Push((int) 5575)
0x584: Push((int) 6145)
0x585: Push((int) 6144)
0x586: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x587: Pop(3)
0x588: Return(); Pop(0)

0x589: PushEmpty(bool)
0x58a: Stack[-1] = (bool) 0
0x58b: PushEmpty(bool, object)
0x58c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x58d: Call 0x13ae

0x58e: Pop(1)
0x58f: IF (Stack[-1] == 0) GOTO 0x596; Pop(1)

0x590: PushEmpty(bool, object)
0x591: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x592: Call 0x13ea

0x593: Pop(1)
0x594: IF (Stack[-1] == 0) GOTO 0x596; Pop(1)

0x595: Stack[-1] = (bool) 1
0x596: IF (Stack[-1] == 0) GOTO 0x5ab; Pop(1)

0x597: PushEmpty(string)
0x598: Stack[-1] = "Neutral"
0x599: Call 0x471

0x59a: Pop(1)
0x59b: Push((int) 5527)
0x59c: @@ SetMessage(Stack[-1])
0x59d: Pop(1)
0x59e: @@ ClearReplies()
0x59f: Pop(0)
0x5a0: Push((int) 5528)
0x5a1: Push((int) 6901)
0x5a2: Push((int) 6092)
0x5a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a4: Pop(3)
0x5a5: Push((int) 5529)
0x5a6: Push((int) 6187)
0x5a7: Push((int) 6093)
0x5a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a9: Pop(3)
0x5aa: Return(); Pop(0)

0x5ab: PushEmpty(bool, object)
0x5ac: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5ad: Call 0x138a

0x5ae: Pop(1)
0x5af: IF (Stack[-1] == 0) GOTO 0x5c4; Pop(1)

0x5b0: PushEmpty(string)
0x5b1: Stack[-1] = "Neutral"
0x5b2: Call 0x471

0x5b3: Pop(1)
0x5b4: Push((int) 5604)
0x5b5: @@ SetMessage(Stack[-1])
0x5b6: Pop(1)
0x5b7: @@ ClearReplies()
0x5b8: Pop(0)
0x5b9: Push((int) 5605)
0x5ba: Push((int) 6180)
0x5bb: Push((int) 6179)
0x5bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5bd: Pop(3)
0x5be: Push((int) 5611)
0x5bf: Push((int) 6180)
0x5c0: Push((int) 6185)
0x5c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c2: Pop(3)
0x5c3: Return(); Pop(0)

0x5c4: PushEmpty(string)
0x5c5: Stack[-1] = "Neutral"
0x5c6: Call 0x471

0x5c7: Pop(1)
0x5c8: Push((int) 8097)
0x5c9: @@ SetMessage(Stack[-1])
0x5ca: Pop(1)
0x5cb: @@ ClearReplies()
0x5cc: Pop(0)
0x5cd: PushEmpty(bool, object)
0x5ce: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5cf: Call 0x13ea

0x5d0: Pop(1)
0x5d1: IF (Stack[-1] == 0) GOTO 0x5d7; Pop(1)

0x5d2: Push((int) 8098)
0x5d3: Push((int) -1)
0x5d4: Push((int) 8921)
0x5d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d6: Pop(3)
0x5d7: PushEmpty(bool)
0x5d8: Stack[-1] = (bool) 0
0x5d9: PushEmpty(bool, object)
0x5da: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5db: Call 0x14a8

0x5dc: Pop(1)
0x5dd: IF (Stack[-1] == 0) GOTO 0x5e4; Pop(1)

0x5de: PushEmpty(bool, object)
0x5df: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5e0: Call 0x13ae

0x5e1: Pop(1)
0x5e2: IF (Stack[-1] == 0) GOTO 0x5e4; Pop(1)

0x5e3: Stack[-1] = (bool) 1
0x5e4: IF (Stack[-1] == 0) GOTO 0x5ea; Pop(1)

0x5e5: Push((int) 8109)
0x5e6: Push((int) 8947)
0x5e7: Push((int) 8932)
0x5e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e9: Pop(3)
0x5ea: PushEmpty(bool)
0x5eb: Stack[-1] = (bool) 0
0x5ec: PushEmpty(bool, object)
0x5ed: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5ee: Call 0x1448

0x5ef: Pop(1)
0x5f0: IF (Stack[-1] == 0) GOTO 0x5f7; Pop(1)

0x5f1: PushEmpty(bool, object)
0x5f2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5f3: Call 0x14b4

0x5f4: Pop(1)
0x5f5: IF (Stack[-1] == 0) GOTO 0x5f7; Pop(1)

0x5f6: Stack[-1] = (bool) 1
0x5f7: IF (Stack[-1] == 0) GOTO 0x5fd; Pop(1)

0x5f8: Push((int) 8111)
0x5f9: Push((int) 8948)
0x5fa: Push((int) 8934)
0x5fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5fc: Pop(3)
0x5fd: PushEmpty(bool)
0x5fe: Stack[-1] = (bool) 0
0x5ff: PushEmpty(bool, object)
0x600: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x601: Call 0x140c

0x602: Pop(1)
0x603: IF (Stack[-1] == 0) GOTO 0x60a; Pop(1)

0x604: PushEmpty(bool, object)
0x605: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x606: Call 0x14c0

0x607: Pop(1)
0x608: IF (Stack[-1] == 0) GOTO 0x60a; Pop(1)

0x609: Stack[-1] = (bool) 1
0x60a: IF (Stack[-1] == 0) GOTO 0x610; Pop(1)

0x60b: Push((int) 8115)
0x60c: Push((int) 8949)
0x60d: Push((int) 8938)
0x60e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x60f: Pop(3)
0x610: PushEmpty(bool)
0x611: Stack[-1] = (bool) 0
0x612: PushEmpty(bool, object)
0x613: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x614: Call 0x1514

0x615: Pop(1)
0x616: IF (Stack[-1] == 0) GOTO 0x61d; Pop(1)

0x617: PushEmpty(bool, object)
0x618: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x619: Call 0x14cc

0x61a: Pop(1)
0x61b: IF (Stack[-1] == 0) GOTO 0x61d; Pop(1)

0x61c: Stack[-1] = (bool) 1
0x61d: IF (Stack[-1] == 0) GOTO 0x623; Pop(1)

0x61e: Push((int) 8117)
0x61f: Push((int) 8950)
0x620: Push((int) 8940)
0x621: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x622: Pop(3)
0x623: PushEmpty(bool)
0x624: Stack[-1] = (bool) 0
0x625: PushEmpty(bool, object)
0x626: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x627: Call 0x1508

0x628: Pop(1)
0x629: IF (Stack[-1] == 0) GOTO 0x630; Pop(1)

0x62a: PushEmpty(bool, object)
0x62b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62c: Call 0x14d8

0x62d: Pop(1)
0x62e: IF (Stack[-1] == 0) GOTO 0x630; Pop(1)

0x62f: Stack[-1] = (bool) 1
0x630: IF (Stack[-1] == 0) GOTO 0x636; Pop(1)

0x631: Push((int) 8119)
0x632: Push((int) 8951)
0x633: Push((int) 8942)
0x634: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x635: Pop(3)
0x636: Push((int) 15220)
0x637: Push((int) -1)
0x638: Push((int) 16497)
0x639: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x63a: Pop(3)
0x63b: Return(); Pop(0)

0x63c: Push((int) 8951)
0x63d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x63e: IF (Stack[-1] == 0) GOTO 0x64e; Pop(1)

0x63f: PushEmpty(string)
0x640: Stack[-1] = "Neutral"
0x641: Call 0x471

0x642: Pop(1)
0x643: Push((int) 8128)
0x644: @@ SetMessage(Stack[-1])
0x645: Pop(1)
0x646: @@ ClearReplies()
0x647: Pop(0)
0x648: Push((int) 8688)
0x649: Push((int) -1)
0x64a: Push((int) 9526)
0x64b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64c: Pop(3)
0x64d: Return(); Pop(0)

0x64e: Push((int) 8950)
0x64f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x650: IF (Stack[-1] == 0) GOTO 0x660; Pop(1)

0x651: PushEmpty(string)
0x652: Stack[-1] = "Neutral"
0x653: Call 0x471

0x654: Pop(1)
0x655: Push((int) 8127)
0x656: @@ SetMessage(Stack[-1])
0x657: Pop(1)
0x658: @@ ClearReplies()
0x659: Pop(0)
0x65a: Push((int) 8687)
0x65b: Push((int) -1)
0x65c: Push((int) 9525)
0x65d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x65e: Pop(3)
0x65f: Return(); Pop(0)

0x660: Push((int) 8949)
0x661: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x662: IF (Stack[-1] == 0) GOTO 0x672; Pop(1)

0x663: PushEmpty(string)
0x664: Stack[-1] = "Neutral"
0x665: Call 0x471

0x666: Pop(1)
0x667: Push((int) 8126)
0x668: @@ SetMessage(Stack[-1])
0x669: Pop(1)
0x66a: @@ ClearReplies()
0x66b: Pop(0)
0x66c: Push((int) 8686)
0x66d: Push((int) -1)
0x66e: Push((int) 9524)
0x66f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x670: Pop(3)
0x671: Return(); Pop(0)

0x672: Push((int) 8948)
0x673: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x674: IF (Stack[-1] == 0) GOTO 0x684; Pop(1)

0x675: PushEmpty(string)
0x676: Stack[-1] = "Neutral"
0x677: Call 0x471

0x678: Pop(1)
0x679: Push((int) 8125)
0x67a: @@ SetMessage(Stack[-1])
0x67b: Pop(1)
0x67c: @@ ClearReplies()
0x67d: Pop(0)
0x67e: Push((int) 8685)
0x67f: Push((int) -1)
0x680: Push((int) 9523)
0x681: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x682: Pop(3)
0x683: Return(); Pop(0)

0x684: Push((int) 8947)
0x685: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x686: IF (Stack[-1] == 0) GOTO 0x696; Pop(1)

0x687: PushEmpty(string)
0x688: Stack[-1] = "Neutral"
0x689: Call 0x471

0x68a: Pop(1)
0x68b: Push((int) 8124)
0x68c: @@ SetMessage(Stack[-1])
0x68d: Pop(1)
0x68e: @@ ClearReplies()
0x68f: Pop(0)
0x690: Push((int) 8684)
0x691: Push((int) -1)
0x692: Push((int) 9522)
0x693: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x694: Pop(3)
0x695: Return(); Pop(0)

0x696: Push((int) 6180)
0x697: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x698: IF (Stack[-1] == 0) GOTO 0x6a8; Pop(1)

0x699: PushEmpty(string)
0x69a: Stack[-1] = "Neutral"
0x69b: Call 0x471

0x69c: Pop(1)
0x69d: Push((int) 5606)
0x69e: @@ SetMessage(Stack[-1])
0x69f: Pop(1)
0x6a0: @@ ClearReplies()
0x6a1: Pop(0)
0x6a2: Push((int) 5607)
0x6a3: Push((int) 6182)
0x6a4: Push((int) 6181)
0x6a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a6: Pop(3)
0x6a7: Return(); Pop(0)

0x6a8: Push((int) 6182)
0x6a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6aa: IF (Stack[-1] == 0) GOTO 0x6bf; Pop(1)

0x6ab: PushEmpty(string)
0x6ac: Stack[-1] = "Neutral"
0x6ad: Call 0x471

0x6ae: Pop(1)
0x6af: Push((int) 5608)
0x6b0: @@ SetMessage(Stack[-1])
0x6b1: Pop(1)
0x6b2: @@ ClearReplies()
0x6b3: Pop(0)
0x6b4: Push((int) 5609)
0x6b5: Push((int) -1)
0x6b6: Push((int) 6183)
0x6b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b8: Pop(3)
0x6b9: Push((int) 5610)
0x6ba: Push((int) -1)
0x6bb: Push((int) 6184)
0x6bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6bd: Pop(3)
0x6be: Return(); Pop(0)

0x6bf: Push((int) 6187)
0x6c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6c1: IF (Stack[-1] == 0) GOTO 0x6d1; Pop(1)

0x6c2: PushEmpty(string)
0x6c3: Stack[-1] = "Neutral"
0x6c4: Call 0x471

0x6c5: Pop(1)
0x6c6: Push((int) 5612)
0x6c7: @@ SetMessage(Stack[-1])
0x6c8: Pop(1)
0x6c9: @@ ClearReplies()
0x6ca: Pop(0)
0x6cb: Push((int) 5613)
0x6cc: Push((int) -1)
0x6cd: Push((int) 6188)
0x6ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6cf: Pop(3)
0x6d0: Return(); Pop(0)

0x6d1: Push((int) 6901)
0x6d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d3: IF (Stack[-1] == 0) GOTO 0x6ed; Pop(1)

0x6d4: PushEmpty(string)
0x6d5: Stack[-1] = "Neutral"
0x6d6: Call 0x471

0x6d7: Pop(1)
0x6d8: Push((int) 6238)
0x6d9: @@ SetMessage(Stack[-1])
0x6da: Pop(1)
0x6db: @@ ClearReplies()
0x6dc: Pop(0)
0x6dd: Push((int) 6239)
0x6de: Push((int) -1)
0x6df: Push((int) 6902)
0x6e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e1: Pop(3)
0x6e2: Push((int) 6240)
0x6e3: Push((int) -1)
0x6e4: Push((int) 6903)
0x6e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e6: Pop(3)
0x6e7: Push((int) 6241)
0x6e8: Push((int) -1)
0x6e9: Push((int) 6904)
0x6ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6eb: Pop(3)
0x6ec: Return(); Pop(0)

0x6ed: Push((int) 6145)
0x6ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ef: IF (Stack[-1] == 0) GOTO 0x704; Pop(1)

0x6f0: PushEmpty(string)
0x6f1: Stack[-1] = "Neutral"
0x6f2: Call 0x471

0x6f3: Pop(1)
0x6f4: Push((int) 5576)
0x6f5: @@ SetMessage(Stack[-1])
0x6f6: Pop(1)
0x6f7: @@ ClearReplies()
0x6f8: Pop(0)
0x6f9: Push((int) 5577)
0x6fa: Push((int) 6147)
0x6fb: Push((int) 6146)
0x6fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6fd: Pop(3)
0x6fe: Push((int) 5603)
0x6ff: Push((int) 6149)
0x700: Push((int) 6176)
0x701: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x702: Pop(3)
0x703: Return(); Pop(0)

0x704: Push((int) 6147)
0x705: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x706: IF (Stack[-1] == 0) GOTO 0x720; Pop(1)

0x707: PushEmpty(string)
0x708: Stack[-1] = "Neutral"
0x709: Call 0x471

0x70a: Pop(1)
0x70b: Push((int) 5578)
0x70c: @@ SetMessage(Stack[-1])
0x70d: Pop(1)
0x70e: @@ ClearReplies()
0x70f: Pop(0)
0x710: Push((int) 5579)
0x711: Push((int) 6149)
0x712: Push((int) 6148)
0x713: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x714: Pop(3)
0x715: Push((int) 5595)
0x716: Push((int) 6149)
0x717: Push((int) 6165)
0x718: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x719: Pop(3)
0x71a: Push((int) 5596)
0x71b: Push((int) 6168)
0x71c: Push((int) 6167)
0x71d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71e: Pop(3)
0x71f: Return(); Pop(0)

0x720: Push((int) 6168)
0x721: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x722: IF (Stack[-1] == 0) GOTO 0x737; Pop(1)

0x723: PushEmpty(string)
0x724: Stack[-1] = "Neutral"
0x725: Call 0x471

0x726: Pop(1)
0x727: Push((int) 5597)
0x728: @@ SetMessage(Stack[-1])
0x729: Pop(1)
0x72a: @@ ClearReplies()
0x72b: Pop(0)
0x72c: Push((int) 5598)
0x72d: Push((int) 6151)
0x72e: Push((int) 6169)
0x72f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x730: Pop(3)
0x731: Push((int) 5599)
0x732: Push((int) 6172)
0x733: Push((int) 6171)
0x734: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x735: Pop(3)
0x736: Return(); Pop(0)

0x737: Push((int) 6172)
0x738: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x739: IF (Stack[-1] == 0) GOTO 0x74e; Pop(1)

0x73a: PushEmpty(string)
0x73b: Stack[-1] = "Neutral"
0x73c: Call 0x471

0x73d: Pop(1)
0x73e: Push((int) 5600)
0x73f: @@ SetMessage(Stack[-1])
0x740: Pop(1)
0x741: @@ ClearReplies()
0x742: Pop(0)
0x743: Push((int) 5601)
0x744: Push((int) -1)
0x745: Push((int) 6173)
0x746: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x747: Pop(3)
0x748: Push((int) 5602)
0x749: Push((int) 6151)
0x74a: Push((int) 6174)
0x74b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74c: Pop(3)
0x74d: Return(); Pop(0)

0x74e: Push((int) 6149)
0x74f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x750: IF (Stack[-1] == 0) GOTO 0x765; Pop(1)

0x751: PushEmpty(string)
0x752: Stack[-1] = "Neutral"
0x753: Call 0x471

0x754: Pop(1)
0x755: Push((int) 5580)
0x756: @@ SetMessage(Stack[-1])
0x757: Pop(1)
0x758: @@ ClearReplies()
0x759: Pop(0)
0x75a: Push((int) 5581)
0x75b: Push((int) 6151)
0x75c: Push((int) 6150)
0x75d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75e: Pop(3)
0x75f: Push((int) 5591)
0x760: Push((int) 6161)
0x761: Push((int) 6160)
0x762: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x763: Pop(3)
0x764: Return(); Pop(0)

0x765: Push((int) 6161)
0x766: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x767: IF (Stack[-1] == 0) GOTO 0x77c; Pop(1)

0x768: PushEmpty(string)
0x769: Stack[-1] = "Neutral"
0x76a: Call 0x471

0x76b: Pop(1)
0x76c: Push((int) 5592)
0x76d: @@ SetMessage(Stack[-1])
0x76e: Pop(1)
0x76f: @@ ClearReplies()
0x770: Pop(0)
0x771: Push((int) 5593)
0x772: Push((int) 6157)
0x773: Push((int) 6162)
0x774: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x775: Pop(3)
0x776: Push((int) 5594)
0x777: Push((int) -1)
0x778: Push((int) 6164)
0x779: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77a: Pop(3)
0x77b: Return(); Pop(0)

0x77c: Push((int) 6151)
0x77d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x77e: IF (Stack[-1] == 0) GOTO 0x793; Pop(1)

0x77f: PushEmpty(string)
0x780: Stack[-1] = "Neutral"
0x781: Call 0x471

0x782: Pop(1)
0x783: Push((int) 5582)
0x784: @@ SetMessage(Stack[-1])
0x785: Pop(1)
0x786: @@ ClearReplies()
0x787: Pop(0)
0x788: Push((int) 5583)
0x789: Push((int) 6153)
0x78a: Push((int) 6152)
0x78b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78c: Pop(3)
0x78d: Push((int) 5587)
0x78e: Push((int) 6157)
0x78f: Push((int) 6156)
0x790: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x791: Pop(3)
0x792: Return(); Pop(0)

0x793: Push((int) 6157)
0x794: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x795: IF (Stack[-1] == 0) GOTO 0x7aa; Pop(1)

0x796: PushEmpty(string)
0x797: Stack[-1] = "Neutral"
0x798: Call 0x471

0x799: Pop(1)
0x79a: Push((int) 5588)
0x79b: @@ SetMessage(Stack[-1])
0x79c: Pop(1)
0x79d: @@ ClearReplies()
0x79e: Pop(0)
0x79f: Push((int) 5589)
0x7a0: Push((int) -1)
0x7a1: Push((int) 6158)
0x7a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a3: Pop(3)
0x7a4: Push((int) 5590)
0x7a5: Push((int) -1)
0x7a6: Push((int) 6159)
0x7a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a8: Pop(3)
0x7a9: Return(); Pop(0)

0x7aa: Push((int) 6153)
0x7ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7ac: IF (Stack[-1] == 0) GOTO 0x7c1; Pop(1)

0x7ad: PushEmpty(string)
0x7ae: Stack[-1] = "Neutral"
0x7af: Call 0x471

0x7b0: Pop(1)
0x7b1: Push((int) 5584)
0x7b2: @@ SetMessage(Stack[-1])
0x7b3: Pop(1)
0x7b4: @@ ClearReplies()
0x7b5: Pop(0)
0x7b6: Push((int) 5585)
0x7b7: Push((int) -1)
0x7b8: Push((int) 6154)
0x7b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ba: Pop(3)
0x7bb: Push((int) 5586)
0x7bc: Push((int) -1)
0x7bd: Push((int) 6155)
0x7be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7bf: Pop(3)
0x7c0: Return(); Pop(0)

0x7c1: Push((int) 6140)
0x7c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7c3: IF (Stack[-1] == 0) GOTO 0x7d3; Pop(1)

0x7c4: PushEmpty(string)
0x7c5: Stack[-1] = "Neutral"
0x7c6: Call 0x471

0x7c7: Pop(1)
0x7c8: Push((int) 5572)
0x7c9: @@ SetMessage(Stack[-1])
0x7ca: Pop(1)
0x7cb: @@ ClearReplies()
0x7cc: Pop(0)
0x7cd: Push((int) 5573)
0x7ce: Push((int) 6099)
0x7cf: Push((int) 6141)
0x7d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d1: Pop(3)
0x7d2: Return(); Pop(0)

0x7d3: Push((int) 6099)
0x7d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7d5: IF (Stack[-1] == 0) GOTO 0x7e5; Pop(1)

0x7d6: PushEmpty(string)
0x7d7: Stack[-1] = "Neutral"
0x7d8: Call 0x471

0x7d9: Pop(1)
0x7da: Push((int) 5535)
0x7db: @@ SetMessage(Stack[-1])
0x7dc: Pop(1)
0x7dd: @@ ClearReplies()
0x7de: Pop(0)
0x7df: Push((int) 5536)
0x7e0: Push((int) 6101)
0x7e1: Push((int) 6100)
0x7e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e3: Pop(3)
0x7e4: Return(); Pop(0)

0x7e5: Push((int) 6101)
0x7e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7e7: IF (Stack[-1] == 0) GOTO 0x7fc; Pop(1)

0x7e8: PushEmpty(string)
0x7e9: Stack[-1] = "Neutral"
0x7ea: Call 0x471

0x7eb: Pop(1)
0x7ec: Push((int) 5537)
0x7ed: @@ SetMessage(Stack[-1])
0x7ee: Pop(1)
0x7ef: @@ ClearReplies()
0x7f0: Pop(0)
0x7f1: Push((int) 5538)
0x7f2: Push((int) 6103)
0x7f3: Push((int) 6102)
0x7f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f5: Pop(3)
0x7f6: Push((int) 5565)
0x7f7: Push((int) 6132)
0x7f8: Push((int) 6131)
0x7f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7fa: Pop(3)
0x7fb: Return(); Pop(0)

0x7fc: Push((int) 6132)
0x7fd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7fe: IF (Stack[-1] == 0) GOTO 0x813; Pop(1)

0x7ff: PushEmpty(string)
0x800: Stack[-1] = "Neutral"
0x801: Call 0x471

0x802: Pop(1)
0x803: Push((int) 5566)
0x804: @@ SetMessage(Stack[-1])
0x805: Pop(1)
0x806: @@ ClearReplies()
0x807: Pop(0)
0x808: Push((int) 5567)
0x809: Push((int) 6103)
0x80a: Push((int) 6133)
0x80b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80c: Pop(3)
0x80d: Push((int) 5568)
0x80e: Push((int) 6136)
0x80f: Push((int) 6135)
0x810: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x811: Pop(3)
0x812: Return(); Pop(0)

0x813: Push((int) 6136)
0x814: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x815: IF (Stack[-1] == 0) GOTO 0x825; Pop(1)

0x816: PushEmpty(string)
0x817: Stack[-1] = "Neutral"
0x818: Call 0x471

0x819: Pop(1)
0x81a: Push((int) 5569)
0x81b: @@ SetMessage(Stack[-1])
0x81c: Pop(1)
0x81d: @@ ClearReplies()
0x81e: Pop(0)
0x81f: Push((int) 5570)
0x820: Push((int) 6103)
0x821: Push((int) 6137)
0x822: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x823: Pop(3)
0x824: Return(); Pop(0)

0x825: Push((int) 6103)
0x826: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x827: IF (Stack[-1] == 0) GOTO 0x837; Pop(1)

0x828: PushEmpty(string)
0x829: Stack[-1] = "Neutral"
0x82a: Call 0x471

0x82b: Pop(1)
0x82c: Push((int) 5539)
0x82d: @@ SetMessage(Stack[-1])
0x82e: Pop(1)
0x82f: @@ ClearReplies()
0x830: Pop(0)
0x831: Push((int) 5540)
0x832: Push((int) 6105)
0x833: Push((int) 6104)
0x834: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x835: Pop(3)
0x836: Return(); Pop(0)

0x837: Push((int) 6105)
0x838: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x839: IF (Stack[-1] == 0) GOTO 0x84e; Pop(1)

0x83a: PushEmpty(string)
0x83b: Stack[-1] = "Neutral"
0x83c: Call 0x471

0x83d: Pop(1)
0x83e: Push((int) 5541)
0x83f: @@ SetMessage(Stack[-1])
0x840: Pop(1)
0x841: @@ ClearReplies()
0x842: Pop(0)
0x843: Push((int) 5542)
0x844: Push((int) 6107)
0x845: Push((int) 6106)
0x846: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x847: Pop(3)
0x848: Push((int) 5551)
0x849: Push((int) 6117)
0x84a: Push((int) 6116)
0x84b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x84c: Pop(3)
0x84d: Return(); Pop(0)

0x84e: Push((int) 6117)
0x84f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x850: IF (Stack[-1] == 0) GOTO 0x865; Pop(1)

0x851: PushEmpty(string)
0x852: Stack[-1] = "Neutral"
0x853: Call 0x471

0x854: Pop(1)
0x855: Push((int) 5552)
0x856: @@ SetMessage(Stack[-1])
0x857: Pop(1)
0x858: @@ ClearReplies()
0x859: Pop(0)
0x85a: Push((int) 5553)
0x85b: Push((int) 6119)
0x85c: Push((int) 6118)
0x85d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x85e: Pop(3)
0x85f: Push((int) 5564)
0x860: Push((int) 6111)
0x861: Push((int) 6129)
0x862: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x863: Pop(3)
0x864: Return(); Pop(0)

0x865: Push((int) 6119)
0x866: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x867: IF (Stack[-1] == 0) GOTO 0x881; Pop(1)

0x868: PushEmpty(string)
0x869: Stack[-1] = "Neutral"
0x86a: Call 0x471

0x86b: Pop(1)
0x86c: Push((int) 5554)
0x86d: @@ SetMessage(Stack[-1])
0x86e: Pop(1)
0x86f: @@ ClearReplies()
0x870: Pop(0)
0x871: Push((int) 5555)
0x872: Push((int) 6121)
0x873: Push((int) 6120)
0x874: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x875: Pop(3)
0x876: Push((int) 5559)
0x877: Push((int) -1)
0x878: Push((int) 6124)
0x879: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87a: Pop(3)
0x87b: Push((int) 5560)
0x87c: Push((int) 6126)
0x87d: Push((int) 6125)
0x87e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87f: Pop(3)
0x880: Return(); Pop(0)

0x881: Push((int) 6126)
0x882: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x883: IF (Stack[-1] == 0) GOTO 0x898; Pop(1)

0x884: PushEmpty(string)
0x885: Stack[-1] = "Neutral"
0x886: Call 0x471

0x887: Pop(1)
0x888: Push((int) 5561)
0x889: @@ SetMessage(Stack[-1])
0x88a: Pop(1)
0x88b: @@ ClearReplies()
0x88c: Pop(0)
0x88d: Push((int) 5562)
0x88e: Push((int) -1)
0x88f: Push((int) 6127)
0x890: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x891: Pop(3)
0x892: Push((int) 5563)
0x893: Push((int) -1)
0x894: Push((int) 6128)
0x895: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x896: Pop(3)
0x897: Return(); Pop(0)

0x898: Push((int) 6121)
0x899: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x89a: IF (Stack[-1] == 0) GOTO 0x8af; Pop(1)

0x89b: PushEmpty(string)
0x89c: Stack[-1] = "Neutral"
0x89d: Call 0x471

0x89e: Pop(1)
0x89f: Push((int) 5556)
0x8a0: @@ SetMessage(Stack[-1])
0x8a1: Pop(1)
0x8a2: @@ ClearReplies()
0x8a3: Pop(0)
0x8a4: Push((int) 5557)
0x8a5: Push((int) -1)
0x8a6: Push((int) 6122)
0x8a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a8: Pop(3)
0x8a9: Push((int) 5558)
0x8aa: Push((int) -1)
0x8ab: Push((int) 6123)
0x8ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ad: Pop(3)
0x8ae: Return(); Pop(0)

0x8af: Push((int) 6107)
0x8b0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8b1: IF (Stack[-1] == 0) GOTO 0x8c6; Pop(1)

0x8b2: PushEmpty(string)
0x8b3: Stack[-1] = "Neutral"
0x8b4: Call 0x471

0x8b5: Pop(1)
0x8b6: Push((int) 5543)
0x8b7: @@ SetMessage(Stack[-1])
0x8b8: Pop(1)
0x8b9: @@ ClearReplies()
0x8ba: Pop(0)
0x8bb: Push((int) 5544)
0x8bc: Push((int) 6109)
0x8bd: Push((int) 6108)
0x8be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8bf: Pop(3)
0x8c0: Push((int) 5550)
0x8c1: Push((int) 6111)
0x8c2: Push((int) 6114)
0x8c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c4: Pop(3)
0x8c5: Return(); Pop(0)

0x8c6: Push((int) 6109)
0x8c7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8c8: IF (Stack[-1] == 0) GOTO 0x8d8; Pop(1)

0x8c9: PushEmpty(string)
0x8ca: Stack[-1] = "Neutral"
0x8cb: Call 0x471

0x8cc: Pop(1)
0x8cd: Push((int) 5545)
0x8ce: @@ SetMessage(Stack[-1])
0x8cf: Pop(1)
0x8d0: @@ ClearReplies()
0x8d1: Pop(0)
0x8d2: Push((int) 5546)
0x8d3: Push((int) 6111)
0x8d4: Push((int) 6110)
0x8d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d6: Pop(3)
0x8d7: Return(); Pop(0)

0x8d8: Push((int) 6111)
0x8d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8da: IF (Stack[-1] == 0) GOTO 0x8ef; Pop(1)

0x8db: PushEmpty(string)
0x8dc: Stack[-1] = "Neutral"
0x8dd: Call 0x471

0x8de: Pop(1)
0x8df: Push((int) 5547)
0x8e0: @@ SetMessage(Stack[-1])
0x8e1: Pop(1)
0x8e2: @@ ClearReplies()
0x8e3: Pop(0)
0x8e4: Push((int) 5548)
0x8e5: Push((int) -1)
0x8e6: Push((int) 6112)
0x8e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e8: Pop(3)
0x8e9: Push((int) 5549)
0x8ea: Push((int) -1)
0x8eb: Push((int) 6113)
0x8ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ed: Pop(3)
0x8ee: Return(); Pop(0)

0x8ef: Push((int) 6926)
0x8f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8f1: IF (Stack[-1] == 0) GOTO 0x901; Pop(1)

0x8f2: PushEmpty(string)
0x8f3: Stack[-1] = "Neutral"
0x8f4: Call 0x471

0x8f5: Pop(1)
0x8f6: Push((int) 6260)
0x8f7: @@ SetMessage(Stack[-1])
0x8f8: Pop(1)
0x8f9: @@ ClearReplies()
0x8fa: Pop(0)
0x8fb: Push((int) 6261)
0x8fc: Push((int) 6924)
0x8fd: Push((int) 6927)
0x8fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ff: Pop(3)
0x900: Return(); Pop(0)

0x901: Push((int) 6921)
0x902: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x903: IF (Stack[-1] == 0) GOTO 0x918; Pop(1)

0x904: PushEmpty(string)
0x905: Stack[-1] = "Neutral"
0x906: Call 0x471

0x907: Pop(1)
0x908: Push((int) 6255)
0x909: @@ SetMessage(Stack[-1])
0x90a: Pop(1)
0x90b: @@ ClearReplies()
0x90c: Pop(0)
0x90d: Push((int) 6256)
0x90e: Push((int) -1)
0x90f: Push((int) 6922)
0x910: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x911: Pop(3)
0x912: Push((int) 6257)
0x913: Push((int) 6924)
0x914: Push((int) 6923)
0x915: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x916: Pop(3)
0x917: Return(); Pop(0)

0x918: Push((int) 6924)
0x919: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x91a: IF (Stack[-1] == 0) GOTO 0x92a; Pop(1)

0x91b: PushEmpty(string)
0x91c: Stack[-1] = "Neutral"
0x91d: Call 0x471

0x91e: Pop(1)
0x91f: Push((int) 6258)
0x920: @@ SetMessage(Stack[-1])
0x921: Pop(1)
0x922: @@ ClearReplies()
0x923: Pop(0)
0x924: Push((int) 6262)
0x925: Push((int) -1)
0x926: Push((int) 6929)
0x927: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x928: Pop(3)
0x929: Return(); Pop(0)

0x92a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x92b: PushEmpty(bool)
0x92c: Call 0x12c8

0x92d: Pop(0)
0x92e: IF (Stack[-1] == 0) GOTO 0x932; Pop(1)

0x92f: @ lshStopAnimation()
0x930: Pop(0)
0x931: GOTO 0x934

0x932: @ StopAnimation()
0x933: Pop(0)
0x934: Return(); Pop(0)

0x935: GOTO 0x482

0x936: Return(); Pop(0)

0x937: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x938: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x939: PushEmpty(bool, object)
0x93a: Stack[-1] = Stack[-11]
0x93b: Call 0x1243

0x93c: Pop(1)
0x93d: Pop(1); Push((bool) Stack[-1] == 0)
0x93e: IF (Stack[-1] == 0) GOTO 0x941; Pop(1)

0x93f: Stack[-10] = (int) -2
0x940: Return(); Pop(8)

0x941: @ CreateDialog(Stack[-4])
0x942: Pop(0)
0x943: PushEmpty(int)
0x944: Call 0x12c4

0x945: Pop(0)
0x946: @@ SetNPCName(Stack[-1])
0x947: Pop(1)
0x948: PushEmpty(string)
0x949: Call 0x12c6

0x94a: Pop(0)
0x94b: @@ SetPhoto(Stack[-1])
0x94c: Pop(1)
0x94d: PushEmpty(int)
0x94e: Call 0x155e

0x94f: Pop(0)
0x950: @@ SetPlayerName(Stack[-1])
0x951: Pop(1)
0x952: Stack[-2] = (int) -1
0x953: @ IsOverrideActive(Stack[-3])
0x954: Pop(0)
0x955: Push(Stack[-3])
0x956: IF (Stack[-1] == 0) GOTO 0x959; Pop(1)

0x957: Stack[-10] = (int) -2
0x958: Return(); Pop(8)

0x959: @ DoDialog(Stack[-4])
0x95a: Pop(0)
0x95b: PushEmpty(object, object)
0x95c: Stack[-2] = Stack[-11]
0x95d: Stack[-1] = Stack[-6]
0x95e: Push(-2, 4); TaskCall(9)
0x95f: Call 0x976

0x960: Pop(-2, 4); TaskReturn
0x961: Pop(2)
0x962: @@ IsDialogEnd(Stack[-1])
0x963: Pop(0)
0x964: Pop(0); Push((bool) Stack[-1] == 0)
0x965: IF (Stack[-1] == 0) GOTO 0x96b; Pop(1)

0x966: @ sync()
0x967: Pop(0)
0x968: @@ IsDialogEnd(Stack[-1])
0x969: Pop(0)
0x96a: GOTO 0x964

0x96b: PushEmpty(object)
0x96c: Stack[-1] = Stack[-10]
0x96d: Call 0x127b

0x96e: Pop(1)
0x96f: @ StopDialog(Stack[-4])
0x970: Pop(0)
0x971: @@ GetReturnValue(Stack[-2])
0x972: Pop(0)
0x973: Stack[-10] = Stack[-2]
0x974: Return(); Pop(8)

0x975: Stack[-4] = 0
0x976: PushEmpty()
0x977: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x978: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x979: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x97a: Push((int) 1)
0x97b: IF (Stack[-1] == 0) GOTO 0x9f4; Pop(1)

0x97c: PushEmpty(bool, object)
0x97d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x97e: Call 0x149c

0x97f: Pop(1)
0x980: IF (Stack[-1] == 0) GOTO 0x995; Pop(1)

0x981: PushEmpty(object, object)
0x982: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x983: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x984: Call 0x134c

0x985: Pop(2)
0x986: PushEmpty(string)
0x987: Stack[-1] = "Neutral"
0x988: Call 0xa12

0x989: Pop(1)
0x98a: Push((int) 14519)
0x98b: @@ SetMessage(Stack[-1])
0x98c: Pop(1)
0x98d: @@ ClearReplies()
0x98e: Pop(0)
0x98f: Push((int) 14520)
0x990: Push((int) 15760)
0x991: Push((int) 15759)
0x992: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x993: Pop(3)
0x994: GOTO 0x9f4

0x995: PushEmpty(string)
0x996: Stack[-1] = "Neutral"
0x997: Call 0xa12

0x998: Pop(1)
0x999: Push((int) 6887)
0x99a: @@ SetMessage(Stack[-1])
0x99b: Pop(1)
0x99c: @@ ClearReplies()
0x99d: Pop(0)
0x99e: PushEmpty(bool)
0x99f: Stack[-1] = (bool) 0
0x9a0: PushEmpty(bool, object)
0x9a1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9a2: Call 0x13c6

0x9a3: Pop(1)
0x9a4: IF (Stack[-1] == 0) GOTO 0x9ab; Pop(1)

0x9a5: PushEmpty(bool, object)
0x9a6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9a7: Call 0x13de

0x9a8: Pop(1)
0x9a9: IF (Stack[-1] == 0) GOTO 0x9ab; Pop(1)

0x9aa: Stack[-1] = (bool) 1
0x9ab: IF (Stack[-1] == 0) GOTO 0x9b1; Pop(1)

0x9ac: Push((int) 6888)
0x9ad: Push((int) 7595)
0x9ae: Push((int) 7594)
0x9af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b0: Pop(3)
0x9b1: PushEmpty(bool)
0x9b2: Stack[-1] = (bool) 0
0x9b3: PushEmpty(bool, object)
0x9b4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9b5: Call 0x13d2

0x9b6: Pop(1)
0x9b7: IF (Stack[-1] == 0) GOTO 0x9be; Pop(1)

0x9b8: PushEmpty(bool, object)
0x9b9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9ba: Call 0x1400

0x9bb: Pop(1)
0x9bc: IF (Stack[-1] == 0) GOTO 0x9be; Pop(1)

0x9bd: Stack[-1] = (bool) 1
0x9be: IF (Stack[-1] == 0) GOTO 0x9c4; Pop(1)

0x9bf: Push((int) 6918)
0x9c0: Push((int) 7625)
0x9c1: Push((int) 7624)
0x9c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c3: Pop(3)
0x9c4: Push((int) 7400)
0x9c5: Push((int) -1)
0x9c6: Push((int) 8166)
0x9c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c8: Pop(3)
0x9c9: GOTO 0x9f4

0x9ca: PushEmpty(string)
0x9cb: Stack[-1] = "Neutral"
0x9cc: Call 0xa12

0x9cd: Pop(1)
0x9ce: Push((int) 9351)
0x9cf: @@ SetMessage(Stack[-1])
0x9d0: Pop(1)
0x9d1: @@ ClearReplies()
0x9d2: Pop(0)
0x9d3: Push((int) 9352)
0x9d4: Push((int) 10275)
0x9d5: Push((int) 10274)
0x9d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d7: Pop(3)
0x9d8: Push((int) 9361)
0x9d9: Push((int) 10275)
0x9da: Push((int) 10284)
0x9db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9dc: Pop(3)
0x9dd: GOTO 0x9f4

0x9de: PushEmpty(string)
0x9df: Stack[-1] = "Neutral"
0x9e0: Call 0xa12

0x9e1: Pop(1)
0x9e2: Push((int) 9362)
0x9e3: @@ SetMessage(Stack[-1])
0x9e4: Pop(1)
0x9e5: @@ ClearReplies()
0x9e6: Pop(0)
0x9e7: Push((int) 9363)
0x9e8: Push((int) 10288)
0x9e9: Push((int) 10287)
0x9ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9eb: Pop(3)
0x9ec: Push((int) 9371)
0x9ed: Push((int) 10296)
0x9ee: Push((int) 10295)
0x9ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f0: Pop(3)
0x9f1: GOTO 0x9f4

0x9f2: Return(); Pop(0)

0x9f3: GOTO 0x97a

0x9f4: PushEmpty(bool)
0x9f5: Call 0x12c8

0x9f6: Pop(0)
0x9f7: IF (Stack[-1] == 0) GOTO 0xa03; Pop(1)

0x9f8: @ lshWaitForAnimEnd()
0x9f9: Pop(0)
0x9fa: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9fb: IF (Stack[-1] == 0) GOTO 0x9fd; Pop(1)

0x9fc: GOTO 0xa02

0x9fd: PushEmpty(string)
0x9fe: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9ff: Call 0x127f

0xa00: Pop(1)
0xa01: GOTO 0x9f8

0xa02: GOTO 0xa11

0xa03: Push("all")
0xa04: Push("idle")
0xa05: @ PlayAnimation(Stack[-2], Stack[-1])
0xa06: Pop(2)
0xa07: @ WaitForAnimEnd()
0xa08: Pop(0)
0xa09: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa0a: IF (Stack[-1] == 0) GOTO 0xa0c; Pop(1)

0xa0b: GOTO 0xa11

0xa0c: Push("all")
0xa0d: Push("idle")
0xa0e: @ PlayAnimation(Stack[-2], Stack[-1])
0xa0f: Pop(2)
0xa10: GOTO 0xa07

0xa11: Return(); Pop(0)

0xa12: PushEmpty()
0xa13: PushEmpty(bool)
0xa14: Call 0x12c8

0xa15: Pop(0)
0xa16: Pop(1); Push((bool) Stack[-1] == 0)
0xa17: IF (Stack[-1] == 0) GOTO 0xa19; Pop(1)

0xa18: Return(); Pop(0)

0xa19: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa1a: IF (Stack[-1] == 0) GOTO 0xa1c; Pop(1)

0xa1b: Return(); Pop(0)

0xa1c: PushEmpty(string)
0xa1d: Stack[-1] = Stack[-2]
0xa1e: Call 0x127f

0xa1f: Pop(1)
0xa20: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa21: Return(); Pop(0)

0xa22: PushEmpty()
0xa23: Push((int) 1)
0xa24: IF (Stack[-1] == 0) GOTO 0xc8a; Pop(1)

0xa25: PushEmpty()
0xa26: Call 0x1291

0xa27: Pop(0)
0xa28: Push((int) 15761)
0xa29: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa2a: IF (Stack[-1] == 0) GOTO 0xa35; Pop(1)

0xa2b: PushEmpty(object, object)
0xa2c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa2d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa2e: Call 0x1352

0xa2f: Pop(2)
0xa30: PushEmpty(object, object)
0xa31: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa32: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa33: Call 0x135b

0xa34: Pop(2)
0xa35: Push((int) 15762)
0xa36: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa37: IF (Stack[-1] == 0) GOTO 0xa42; Pop(1)

0xa38: PushEmpty(object, object)
0xa39: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa3a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa3b: Call 0x1352

0xa3c: Pop(2)
0xa3d: PushEmpty(object, object)
0xa3e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa3f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa40: Call 0x135b

0xa41: Pop(2)
0xa42: Push((int) 8183)
0xa43: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa44: IF (Stack[-1] == 0) GOTO 0xa4f; Pop(1)

0xa45: PushEmpty(object, object)
0xa46: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa47: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa48: Call 0x12f3

0xa49: Pop(2)
0xa4a: PushEmpty(object, object)
0xa4b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa4c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa4d: Call 0x12ff

0xa4e: Pop(2)
0xa4f: Push((int) 8187)
0xa50: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa51: IF (Stack[-1] == 0) GOTO 0xa57; Pop(1)

0xa52: PushEmpty(object, object)
0xa53: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa54: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa55: Call 0x12f3

0xa56: Pop(2)
0xa57: Push((int) 8171)
0xa58: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa59: IF (Stack[-1] == 0) GOTO 0xa6e; Pop(1)

0xa5a: PushEmpty(object, object)
0xa5b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa5c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa5d: Call 0x12f9

0xa5e: Pop(2)
0xa5f: PushEmpty(object, object)
0xa60: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa61: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa62: Call 0x1316

0xa63: Pop(2)
0xa64: PushEmpty(object, object)
0xa65: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa66: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa67: Call 0x12ed

0xa68: Pop(2)
0xa69: PushEmpty(object, object)
0xa6a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa6b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa6c: Call 0x12e2

0xa6d: Pop(2)
0xa6e: Push((int) 8170)
0xa6f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa70: IF (Stack[-1] == 0) GOTO 0xa80; Pop(1)

0xa71: PushEmpty(object, object)
0xa72: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa73: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa74: Call 0x12f9

0xa75: Pop(2)
0xa76: PushEmpty(object, object)
0xa77: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa78: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa79: Call 0x12ed

0xa7a: Pop(2)
0xa7b: PushEmpty(object, object)
0xa7c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa7d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa7e: Call 0x12e2

0xa7f: Pop(2)
0xa80: Push((int) 15758)
0xa81: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa82: IF (Stack[-1] == 0) GOTO 0xaf9; Pop(1)

0xa83: PushEmpty(bool, object)
0xa84: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa85: Call 0x149c

0xa86: Pop(1)
0xa87: IF (Stack[-1] == 0) GOTO 0xa9c; Pop(1)

0xa88: PushEmpty(object, object)
0xa89: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa8a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa8b: Call 0x134c

0xa8c: Pop(2)
0xa8d: PushEmpty(string)
0xa8e: Stack[-1] = "Neutral"
0xa8f: Call 0xa12

0xa90: Pop(1)
0xa91: Push((int) 14519)
0xa92: @@ SetMessage(Stack[-1])
0xa93: Pop(1)
0xa94: @@ ClearReplies()
0xa95: Pop(0)
0xa96: Push((int) 14520)
0xa97: Push((int) 15760)
0xa98: Push((int) 15759)
0xa99: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa9a: Pop(3)
0xa9b: Return(); Pop(0)

0xa9c: PushEmpty(string)
0xa9d: Stack[-1] = "Neutral"
0xa9e: Call 0xa12

0xa9f: Pop(1)
0xaa0: Push((int) 6887)
0xaa1: @@ SetMessage(Stack[-1])
0xaa2: Pop(1)
0xaa3: @@ ClearReplies()
0xaa4: Pop(0)
0xaa5: PushEmpty(bool)
0xaa6: Stack[-1] = (bool) 0
0xaa7: PushEmpty(bool, object)
0xaa8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaa9: Call 0x13c6

0xaaa: Pop(1)
0xaab: IF (Stack[-1] == 0) GOTO 0xab2; Pop(1)

0xaac: PushEmpty(bool, object)
0xaad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaae: Call 0x13de

0xaaf: Pop(1)
0xab0: IF (Stack[-1] == 0) GOTO 0xab2; Pop(1)

0xab1: Stack[-1] = (bool) 1
0xab2: IF (Stack[-1] == 0) GOTO 0xab8; Pop(1)

0xab3: Push((int) 6888)
0xab4: Push((int) 7595)
0xab5: Push((int) 7594)
0xab6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab7: Pop(3)
0xab8: PushEmpty(bool)
0xab9: Stack[-1] = (bool) 0
0xaba: PushEmpty(bool, object)
0xabb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xabc: Call 0x13d2

0xabd: Pop(1)
0xabe: IF (Stack[-1] == 0) GOTO 0xac5; Pop(1)

0xabf: PushEmpty(bool, object)
0xac0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xac1: Call 0x1400

0xac2: Pop(1)
0xac3: IF (Stack[-1] == 0) GOTO 0xac5; Pop(1)

0xac4: Stack[-1] = (bool) 1
0xac5: IF (Stack[-1] == 0) GOTO 0xacb; Pop(1)

0xac6: Push((int) 6918)
0xac7: Push((int) 7625)
0xac8: Push((int) 7624)
0xac9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaca: Pop(3)
0xacb: Push((int) 7400)
0xacc: Push((int) -1)
0xacd: Push((int) 8166)
0xace: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xacf: Pop(3)
0xad0: Return(); Pop(0)

0xad1: PushEmpty(string)
0xad2: Stack[-1] = "Neutral"
0xad3: Call 0xa12

0xad4: Pop(1)
0xad5: Push((int) 9351)
0xad6: @@ SetMessage(Stack[-1])
0xad7: Pop(1)
0xad8: @@ ClearReplies()
0xad9: Pop(0)
0xada: Push((int) 9352)
0xadb: Push((int) 10275)
0xadc: Push((int) 10274)
0xadd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xade: Pop(3)
0xadf: Push((int) 9361)
0xae0: Push((int) 10275)
0xae1: Push((int) 10284)
0xae2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xae3: Pop(3)
0xae4: Return(); Pop(0)

0xae5: PushEmpty(string)
0xae6: Stack[-1] = "Neutral"
0xae7: Call 0xa12

0xae8: Pop(1)
0xae9: Push((int) 9362)
0xaea: @@ SetMessage(Stack[-1])
0xaeb: Pop(1)
0xaec: @@ ClearReplies()
0xaed: Pop(0)
0xaee: Push((int) 9363)
0xaef: Push((int) 10288)
0xaf0: Push((int) 10287)
0xaf1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf2: Pop(3)
0xaf3: Push((int) 9371)
0xaf4: Push((int) 10296)
0xaf5: Push((int) 10295)
0xaf6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf7: Pop(3)
0xaf8: Return(); Pop(0)

0xaf9: Push((int) 10296)
0xafa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xafb: IF (Stack[-1] == 0) GOTO 0xb10; Pop(1)

0xafc: PushEmpty(string)
0xafd: Stack[-1] = "Neutral"
0xafe: Call 0xa12

0xaff: Pop(1)
0xb00: Push((int) 9372)
0xb01: @@ SetMessage(Stack[-1])
0xb02: Pop(1)
0xb03: @@ ClearReplies()
0xb04: Pop(0)
0xb05: Push((int) 9373)
0xb06: Push((int) 10298)
0xb07: Push((int) 10297)
0xb08: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb09: Pop(3)
0xb0a: Push((int) 9376)
0xb0b: Push((int) 10288)
0xb0c: Push((int) 10300)
0xb0d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb0e: Pop(3)
0xb0f: Return(); Pop(0)

0xb10: Push((int) 10298)
0xb11: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb12: IF (Stack[-1] == 0) GOTO 0xb22; Pop(1)

0xb13: PushEmpty(string)
0xb14: Stack[-1] = "Neutral"
0xb15: Call 0xa12

0xb16: Pop(1)
0xb17: Push((int) 9374)
0xb18: @@ SetMessage(Stack[-1])
0xb19: Pop(1)
0xb1a: @@ ClearReplies()
0xb1b: Pop(0)
0xb1c: Push((int) 9375)
0xb1d: Push((int) -1)
0xb1e: Push((int) 10299)
0xb1f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb20: Pop(3)
0xb21: Return(); Pop(0)

0xb22: Push((int) 10288)
0xb23: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb24: IF (Stack[-1] == 0) GOTO 0xb39; Pop(1)

0xb25: PushEmpty(string)
0xb26: Stack[-1] = "Neutral"
0xb27: Call 0xa12

0xb28: Pop(1)
0xb29: Push((int) 9364)
0xb2a: @@ SetMessage(Stack[-1])
0xb2b: Pop(1)
0xb2c: @@ ClearReplies()
0xb2d: Pop(0)
0xb2e: Push((int) 9365)
0xb2f: Push((int) 10290)
0xb30: Push((int) 10289)
0xb31: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb32: Pop(3)
0xb33: Push((int) 9368)
0xb34: Push((int) 10293)
0xb35: Push((int) 10292)
0xb36: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb37: Pop(3)
0xb38: Return(); Pop(0)

0xb39: Push((int) 10293)
0xb3a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb3b: IF (Stack[-1] == 0) GOTO 0xb4b; Pop(1)

0xb3c: PushEmpty(string)
0xb3d: Stack[-1] = "Neutral"
0xb3e: Call 0xa12

0xb3f: Pop(1)
0xb40: Push((int) 9369)
0xb41: @@ SetMessage(Stack[-1])
0xb42: Pop(1)
0xb43: @@ ClearReplies()
0xb44: Pop(0)
0xb45: Push((int) 9370)
0xb46: Push((int) -1)
0xb47: Push((int) 10294)
0xb48: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb49: Pop(3)
0xb4a: Return(); Pop(0)

0xb4b: Push((int) 10290)
0xb4c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb4d: IF (Stack[-1] == 0) GOTO 0xb5d; Pop(1)

0xb4e: PushEmpty(string)
0xb4f: Stack[-1] = "Neutral"
0xb50: Call 0xa12

0xb51: Pop(1)
0xb52: Push((int) 9366)
0xb53: @@ SetMessage(Stack[-1])
0xb54: Pop(1)
0xb55: @@ ClearReplies()
0xb56: Pop(0)
0xb57: Push((int) 9367)
0xb58: Push((int) -1)
0xb59: Push((int) 10291)
0xb5a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5b: Pop(3)
0xb5c: Return(); Pop(0)

0xb5d: Push((int) 10275)
0xb5e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb5f: IF (Stack[-1] == 0) GOTO 0xb79; Pop(1)

0xb60: PushEmpty(string)
0xb61: Stack[-1] = "Neutral"
0xb62: Call 0xa12

0xb63: Pop(1)
0xb64: Push((int) 9353)
0xb65: @@ SetMessage(Stack[-1])
0xb66: Pop(1)
0xb67: @@ ClearReplies()
0xb68: Pop(0)
0xb69: Push((int) 9354)
0xb6a: Push((int) 10277)
0xb6b: Push((int) 10276)
0xb6c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb6d: Pop(3)
0xb6e: Push((int) 9359)
0xb6f: Push((int) 10277)
0xb70: Push((int) 10281)
0xb71: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb72: Pop(3)
0xb73: Push((int) 9360)
0xb74: Push((int) -1)
0xb75: Push((int) 10283)
0xb76: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb77: Pop(3)
0xb78: Return(); Pop(0)

0xb79: Push((int) 10277)
0xb7a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb7b: IF (Stack[-1] == 0) GOTO 0xb95; Pop(1)

0xb7c: PushEmpty(string)
0xb7d: Stack[-1] = "Neutral"
0xb7e: Call 0xa12

0xb7f: Pop(1)
0xb80: Push((int) 9355)
0xb81: @@ SetMessage(Stack[-1])
0xb82: Pop(1)
0xb83: @@ ClearReplies()
0xb84: Pop(0)
0xb85: Push((int) 9356)
0xb86: Push((int) -1)
0xb87: Push((int) 10278)
0xb88: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb89: Pop(3)
0xb8a: Push((int) 9357)
0xb8b: Push((int) -1)
0xb8c: Push((int) 10279)
0xb8d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb8e: Pop(3)
0xb8f: Push((int) 9358)
0xb90: Push((int) -1)
0xb91: Push((int) 10280)
0xb92: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb93: Pop(3)
0xb94: Return(); Pop(0)

0xb95: Push((int) 7625)
0xb96: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb97: IF (Stack[-1] == 0) GOTO 0xba7; Pop(1)

0xb98: PushEmpty(string)
0xb99: Stack[-1] = "Neutral"
0xb9a: Call 0xa12

0xb9b: Pop(1)
0xb9c: Push((int) 6919)
0xb9d: @@ SetMessage(Stack[-1])
0xb9e: Pop(1)
0xb9f: @@ ClearReplies()
0xba0: Pop(0)
0xba1: Push((int) 7401)
0xba2: Push((int) 8168)
0xba3: Push((int) 8167)
0xba4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xba5: Pop(3)
0xba6: Return(); Pop(0)

0xba7: Push((int) 8168)
0xba8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xba9: IF (Stack[-1] == 0) GOTO 0xbc3; Pop(1)

0xbaa: PushEmpty(string)
0xbab: Stack[-1] = "Neutral"
0xbac: Call 0xa12

0xbad: Pop(1)
0xbae: Push((int) 7402)
0xbaf: @@ SetMessage(Stack[-1])
0xbb0: Pop(1)
0xbb1: @@ ClearReplies()
0xbb2: Pop(0)
0xbb3: PushEmpty(bool, object)
0xbb4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbb5: Call 0x13f4

0xbb6: Pop(1)
0xbb7: IF (Stack[-1] == 0) GOTO 0xbbd; Pop(1)

0xbb8: Push((int) 6920)
0xbb9: Push((int) 7628)
0xbba: Push((int) 7626)
0xbbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbbc: Pop(3)
0xbbd: Push((int) 6921)
0xbbe: Push((int) 8169)
0xbbf: Push((int) 7627)
0xbc0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc1: Pop(3)
0xbc2: Return(); Pop(0)

0xbc3: Push((int) 8169)
0xbc4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbc5: IF (Stack[-1] == 0) GOTO 0xbd5; Pop(1)

0xbc6: PushEmpty(string)
0xbc7: Stack[-1] = "Neutral"
0xbc8: Call 0xa12

0xbc9: Pop(1)
0xbca: Push((int) 7403)
0xbcb: @@ SetMessage(Stack[-1])
0xbcc: Pop(1)
0xbcd: @@ ClearReplies()
0xbce: Pop(0)
0xbcf: Push((int) 7404)
0xbd0: Push((int) -1)
0xbd1: Push((int) 8170)
0xbd2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbd3: Pop(3)
0xbd4: Return(); Pop(0)

0xbd5: Push((int) 7628)
0xbd6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbd7: IF (Stack[-1] == 0) GOTO 0xbe7; Pop(1)

0xbd8: PushEmpty(string)
0xbd9: Stack[-1] = "Neutral"
0xbda: Call 0xa12

0xbdb: Pop(1)
0xbdc: Push((int) 6922)
0xbdd: @@ SetMessage(Stack[-1])
0xbde: Pop(1)
0xbdf: @@ ClearReplies()
0xbe0: Pop(0)
0xbe1: Push((int) 7405)
0xbe2: Push((int) -1)
0xbe3: Push((int) 8171)
0xbe4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbe5: Pop(3)
0xbe6: Return(); Pop(0)

0xbe7: Push((int) 7595)
0xbe8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbe9: IF (Stack[-1] == 0) GOTO 0xbfe; Pop(1)

0xbea: PushEmpty(string)
0xbeb: Stack[-1] = "Neutral"
0xbec: Call 0xa12

0xbed: Pop(1)
0xbee: Push((int) 6889)
0xbef: @@ SetMessage(Stack[-1])
0xbf0: Pop(1)
0xbf1: @@ ClearReplies()
0xbf2: Pop(0)
0xbf3: Push((int) 7406)
0xbf4: Push((int) 8174)
0xbf5: Push((int) 8172)
0xbf6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbf7: Pop(3)
0xbf8: Push((int) 6890)
0xbf9: Push((int) 7597)
0xbfa: Push((int) 7596)
0xbfb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbfc: Pop(3)
0xbfd: Return(); Pop(0)

0xbfe: Push((int) 7597)
0xbff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc00: IF (Stack[-1] == 0) GOTO 0xc15; Pop(1)

0xc01: PushEmpty(string)
0xc02: Stack[-1] = "Neutral"
0xc03: Call 0xa12

0xc04: Pop(1)
0xc05: Push((int) 6891)
0xc06: @@ SetMessage(Stack[-1])
0xc07: Pop(1)
0xc08: @@ ClearReplies()
0xc09: Pop(0)
0xc0a: Push((int) 7407)
0xc0b: Push((int) 8184)
0xc0c: Push((int) 8173)
0xc0d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc0e: Pop(3)
0xc0f: Push((int) 7417)
0xc10: Push((int) 8184)
0xc11: Push((int) 8185)
0xc12: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc13: Pop(3)
0xc14: Return(); Pop(0)

0xc15: Push((int) 8184)
0xc16: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc17: IF (Stack[-1] == 0) GOTO 0xc27; Pop(1)

0xc18: PushEmpty(string)
0xc19: Stack[-1] = "Neutral"
0xc1a: Call 0xa12

0xc1b: Pop(1)
0xc1c: Push((int) 7416)
0xc1d: @@ SetMessage(Stack[-1])
0xc1e: Pop(1)
0xc1f: @@ ClearReplies()
0xc20: Pop(0)
0xc21: Push((int) 7418)
0xc22: Push((int) -1)
0xc23: Push((int) 8187)
0xc24: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc25: Pop(3)
0xc26: Return(); Pop(0)

0xc27: Push((int) 8174)
0xc28: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc29: IF (Stack[-1] == 0) GOTO 0xc43; Pop(1)

0xc2a: PushEmpty(string)
0xc2b: Stack[-1] = "Neutral"
0xc2c: Call 0xa12

0xc2d: Pop(1)
0xc2e: Push((int) 7408)
0xc2f: @@ SetMessage(Stack[-1])
0xc30: Pop(1)
0xc31: @@ ClearReplies()
0xc32: Pop(0)
0xc33: Push((int) 7409)
0xc34: Push((int) 8178)
0xc35: Push((int) 8175)
0xc36: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc37: Pop(3)
0xc38: Push((int) 7410)
0xc39: Push((int) 8178)
0xc3a: Push((int) 8176)
0xc3b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc3c: Pop(3)
0xc3d: Push((int) 7411)
0xc3e: Push((int) 8178)
0xc3f: Push((int) 8177)
0xc40: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc41: Pop(3)
0xc42: Return(); Pop(0)

0xc43: Push((int) 8178)
0xc44: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc45: IF (Stack[-1] == 0) GOTO 0xc55; Pop(1)

0xc46: PushEmpty(string)
0xc47: Stack[-1] = "Neutral"
0xc48: Call 0xa12

0xc49: Pop(1)
0xc4a: Push((int) 7412)
0xc4b: @@ SetMessage(Stack[-1])
0xc4c: Pop(1)
0xc4d: @@ ClearReplies()
0xc4e: Pop(0)
0xc4f: Push((int) 7413)
0xc50: Push((int) 8182)
0xc51: Push((int) 8181)
0xc52: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc53: Pop(3)
0xc54: Return(); Pop(0)

0xc55: Push((int) 8182)
0xc56: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc57: IF (Stack[-1] == 0) GOTO 0xc67; Pop(1)

0xc58: PushEmpty(string)
0xc59: Stack[-1] = "Neutral"
0xc5a: Call 0xa12

0xc5b: Pop(1)
0xc5c: Push((int) 7414)
0xc5d: @@ SetMessage(Stack[-1])
0xc5e: Pop(1)
0xc5f: @@ ClearReplies()
0xc60: Pop(0)
0xc61: Push((int) 7415)
0xc62: Push((int) -1)
0xc63: Push((int) 8183)
0xc64: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc65: Pop(3)
0xc66: Return(); Pop(0)

0xc67: Push((int) 15760)
0xc68: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc69: IF (Stack[-1] == 0) GOTO 0xc7e; Pop(1)

0xc6a: PushEmpty(string)
0xc6b: Stack[-1] = "Neutral"
0xc6c: Call 0xa12

0xc6d: Pop(1)
0xc6e: Push((int) 14521)
0xc6f: @@ SetMessage(Stack[-1])
0xc70: Pop(1)
0xc71: @@ ClearReplies()
0xc72: Pop(0)
0xc73: Push((int) 14522)
0xc74: Push((int) -1)
0xc75: Push((int) 15761)
0xc76: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc77: Pop(3)
0xc78: Push((int) 14523)
0xc79: Push((int) -1)
0xc7a: Push((int) 15762)
0xc7b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7c: Pop(3)
0xc7d: Return(); Pop(0)

0xc7e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xc7f: PushEmpty(bool)
0xc80: Call 0x12c8

0xc81: Pop(0)
0xc82: IF (Stack[-1] == 0) GOTO 0xc86; Pop(1)

0xc83: @ lshStopAnimation()
0xc84: Pop(0)
0xc85: GOTO 0xc88

0xc86: @ StopAnimation()
0xc87: Pop(0)
0xc88: Return(); Pop(0)

0xc89: GOTO 0xa23

0xc8a: Return(); Pop(0)

0xc8b: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xc8c: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xc8d: PushEmpty(bool, object)
0xc8e: Stack[-1] = Stack[-11]
0xc8f: Call 0x1243

0xc90: Pop(1)
0xc91: Pop(1); Push((bool) Stack[-1] == 0)
0xc92: IF (Stack[-1] == 0) GOTO 0xc95; Pop(1)

0xc93: Stack[-10] = (int) -2
0xc94: Return(); Pop(8)

0xc95: @ CreateDialog(Stack[-4])
0xc96: Pop(0)
0xc97: PushEmpty(int)
0xc98: Call 0x12c4

0xc99: Pop(0)
0xc9a: @@ SetNPCName(Stack[-1])
0xc9b: Pop(1)
0xc9c: PushEmpty(string)
0xc9d: Call 0x12c6

0xc9e: Pop(0)
0xc9f: @@ SetPhoto(Stack[-1])
0xca0: Pop(1)
0xca1: PushEmpty(int)
0xca2: Call 0x155e

0xca3: Pop(0)
0xca4: @@ SetPlayerName(Stack[-1])
0xca5: Pop(1)
0xca6: Stack[-2] = (int) -1
0xca7: @ IsOverrideActive(Stack[-3])
0xca8: Pop(0)
0xca9: Push(Stack[-3])
0xcaa: IF (Stack[-1] == 0) GOTO 0xcad; Pop(1)

0xcab: Stack[-10] = (int) -2
0xcac: Return(); Pop(8)

0xcad: @ DoDialog(Stack[-4])
0xcae: Pop(0)
0xcaf: PushEmpty(object, object)
0xcb0: Stack[-2] = Stack[-11]
0xcb1: Stack[-1] = Stack[-6]
0xcb2: Push(-2, 4); TaskCall(11)
0xcb3: Call 0xcca

0xcb4: Pop(-2, 4); TaskReturn
0xcb5: Pop(2)
0xcb6: @@ IsDialogEnd(Stack[-1])
0xcb7: Pop(0)
0xcb8: Pop(0); Push((bool) Stack[-1] == 0)
0xcb9: IF (Stack[-1] == 0) GOTO 0xcbf; Pop(1)

0xcba: @ sync()
0xcbb: Pop(0)
0xcbc: @@ IsDialogEnd(Stack[-1])
0xcbd: Pop(0)
0xcbe: GOTO 0xcb8

0xcbf: PushEmpty(object)
0xcc0: Stack[-1] = Stack[-10]
0xcc1: Call 0x127b

0xcc2: Pop(1)
0xcc3: @ StopDialog(Stack[-4])
0xcc4: Pop(0)
0xcc5: @@ GetReturnValue(Stack[-2])
0xcc6: Pop(0)
0xcc7: Stack[-10] = Stack[-2]
0xcc8: Return(); Pop(8)

0xcc9: Stack[-4] = 0
0xcca: PushEmpty()
0xccb: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xccc: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xccd: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xcce: Push((int) 1)
0xccf: IF (Stack[-1] == 0) GOTO 0xcff; Pop(1)

0xcd0: PushEmpty(bool, object)
0xcd1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcd2: Call 0x143c

0xcd3: Pop(1)
0xcd4: IF (Stack[-1] == 0) GOTO 0xcee; Pop(1)

0xcd5: PushEmpty(object, object)
0xcd6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcd7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcd8: Call 0x132e

0xcd9: Pop(2)
0xcda: PushEmpty(string)
0xcdb: Stack[-1] = "Neutral"
0xcdc: Call 0xd1d

0xcdd: Pop(1)
0xcde: Push((int) 12310)
0xcdf: @@ SetMessage(Stack[-1])
0xce0: Pop(1)
0xce1: @@ ClearReplies()
0xce2: Pop(0)
0xce3: Push((int) 12311)
0xce4: Push((int) 13471)
0xce5: Push((int) 13470)
0xce6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce7: Pop(3)
0xce8: Push((int) 12313)
0xce9: Push((int) 13473)
0xcea: Push((int) 13472)
0xceb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcec: Pop(3)
0xced: GOTO 0xcff

0xcee: PushEmpty(string)
0xcef: Stack[-1] = "Neutral"
0xcf0: Call 0xd1d

0xcf1: Pop(1)
0xcf2: Push((int) 13777)
0xcf3: @@ SetMessage(Stack[-1])
0xcf4: Pop(1)
0xcf5: @@ ClearReplies()
0xcf6: Pop(0)
0xcf7: Push((int) 13778)
0xcf8: Push((int) -1)
0xcf9: Push((int) 15014)
0xcfa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcfb: Pop(3)
0xcfc: GOTO 0xcff

0xcfd: Return(); Pop(0)

0xcfe: GOTO 0xcce

0xcff: PushEmpty(bool)
0xd00: Call 0x12c8

0xd01: Pop(0)
0xd02: IF (Stack[-1] == 0) GOTO 0xd0e; Pop(1)

0xd03: @ lshWaitForAnimEnd()
0xd04: Pop(0)
0xd05: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd06: IF (Stack[-1] == 0) GOTO 0xd08; Pop(1)

0xd07: GOTO 0xd0d

0xd08: PushEmpty(string)
0xd09: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xd0a: Call 0x127f

0xd0b: Pop(1)
0xd0c: GOTO 0xd03

0xd0d: GOTO 0xd1c

0xd0e: Push("all")
0xd0f: Push("idle")
0xd10: @ PlayAnimation(Stack[-2], Stack[-1])
0xd11: Pop(2)
0xd12: @ WaitForAnimEnd()
0xd13: Pop(0)
0xd14: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd15: IF (Stack[-1] == 0) GOTO 0xd17; Pop(1)

0xd16: GOTO 0xd1c

0xd17: Push("all")
0xd18: Push("idle")
0xd19: @ PlayAnimation(Stack[-2], Stack[-1])
0xd1a: Pop(2)
0xd1b: GOTO 0xd12

0xd1c: Return(); Pop(0)

0xd1d: PushEmpty()
0xd1e: PushEmpty(bool)
0xd1f: Call 0x12c8

0xd20: Pop(0)
0xd21: Pop(1); Push((bool) Stack[-1] == 0)
0xd22: IF (Stack[-1] == 0) GOTO 0xd24; Pop(1)

0xd23: Return(); Pop(0)

0xd24: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd25: IF (Stack[-1] == 0) GOTO 0xd27; Pop(1)

0xd26: Return(); Pop(0)

0xd27: PushEmpty(string)
0xd28: Stack[-1] = Stack[-2]
0xd29: Call 0x127f

0xd2a: Pop(1)
0xd2b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd2c: Return(); Pop(0)

0xd2d: PushEmpty()
0xd2e: Push((int) 1)
0xd2f: IF (Stack[-1] == 0) GOTO 0xdff; Pop(1)

0xd30: PushEmpty()
0xd31: Call 0x1291

0xd32: Pop(0)
0xd33: Push((int) 13469)
0xd34: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd35: IF (Stack[-1] == 0) GOTO 0xd63; Pop(1)

0xd36: PushEmpty(bool, object)
0xd37: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd38: Call 0x143c

0xd39: Pop(1)
0xd3a: IF (Stack[-1] == 0) GOTO 0xd54; Pop(1)

0xd3b: PushEmpty(object, object)
0xd3c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd3d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd3e: Call 0x132e

0xd3f: Pop(2)
0xd40: PushEmpty(string)
0xd41: Stack[-1] = "Neutral"
0xd42: Call 0xd1d

0xd43: Pop(1)
0xd44: Push((int) 12310)
0xd45: @@ SetMessage(Stack[-1])
0xd46: Pop(1)
0xd47: @@ ClearReplies()
0xd48: Pop(0)
0xd49: Push((int) 12311)
0xd4a: Push((int) 13471)
0xd4b: Push((int) 13470)
0xd4c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd4d: Pop(3)
0xd4e: Push((int) 12313)
0xd4f: Push((int) 13473)
0xd50: Push((int) 13472)
0xd51: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd52: Pop(3)
0xd53: Return(); Pop(0)

0xd54: PushEmpty(string)
0xd55: Stack[-1] = "Neutral"
0xd56: Call 0xd1d

0xd57: Pop(1)
0xd58: Push((int) 13777)
0xd59: @@ SetMessage(Stack[-1])
0xd5a: Pop(1)
0xd5b: @@ ClearReplies()
0xd5c: Pop(0)
0xd5d: Push((int) 13778)
0xd5e: Push((int) -1)
0xd5f: Push((int) 15014)
0xd60: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd61: Pop(3)
0xd62: Return(); Pop(0)

0xd63: Push((int) 13473)
0xd64: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd65: IF (Stack[-1] == 0) GOTO 0xd75; Pop(1)

0xd66: PushEmpty(string)
0xd67: Stack[-1] = "Neutral"
0xd68: Call 0xd1d

0xd69: Pop(1)
0xd6a: Push((int) 12314)
0xd6b: @@ SetMessage(Stack[-1])
0xd6c: Pop(1)
0xd6d: @@ ClearReplies()
0xd6e: Pop(0)
0xd6f: Push((int) 12315)
0xd70: Push((int) 13475)
0xd71: Push((int) 13474)
0xd72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd73: Pop(3)
0xd74: Return(); Pop(0)

0xd75: Push((int) 13475)
0xd76: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd77: IF (Stack[-1] == 0) GOTO 0xd87; Pop(1)

0xd78: PushEmpty(string)
0xd79: Stack[-1] = "Neutral"
0xd7a: Call 0xd1d

0xd7b: Pop(1)
0xd7c: Push((int) 12316)
0xd7d: @@ SetMessage(Stack[-1])
0xd7e: Pop(1)
0xd7f: @@ ClearReplies()
0xd80: Pop(0)
0xd81: Push((int) 12317)
0xd82: Push((int) 13477)
0xd83: Push((int) 13476)
0xd84: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd85: Pop(3)
0xd86: Return(); Pop(0)

0xd87: Push((int) 13477)
0xd88: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd89: IF (Stack[-1] == 0) GOTO 0xd99; Pop(1)

0xd8a: PushEmpty(string)
0xd8b: Stack[-1] = "Neutral"
0xd8c: Call 0xd1d

0xd8d: Pop(1)
0xd8e: Push((int) 12318)
0xd8f: @@ SetMessage(Stack[-1])
0xd90: Pop(1)
0xd91: @@ ClearReplies()
0xd92: Pop(0)
0xd93: Push((int) 12319)
0xd94: Push((int) 13482)
0xd95: Push((int) 13478)
0xd96: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd97: Pop(3)
0xd98: Return(); Pop(0)

0xd99: Push((int) 13482)
0xd9a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd9b: IF (Stack[-1] == 0) GOTO 0xdab; Pop(1)

0xd9c: PushEmpty(string)
0xd9d: Stack[-1] = "Neutral"
0xd9e: Call 0xd1d

0xd9f: Pop(1)
0xda0: Push((int) 12323)
0xda1: @@ SetMessage(Stack[-1])
0xda2: Pop(1)
0xda3: @@ ClearReplies()
0xda4: Pop(0)
0xda5: Push((int) 12324)
0xda6: Push((int) 13484)
0xda7: Push((int) 13483)
0xda8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xda9: Pop(3)
0xdaa: Return(); Pop(0)

0xdab: Push((int) 13484)
0xdac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdad: IF (Stack[-1] == 0) GOTO 0xdbd; Pop(1)

0xdae: PushEmpty(string)
0xdaf: Stack[-1] = "Neutral"
0xdb0: Call 0xd1d

0xdb1: Pop(1)
0xdb2: Push((int) 12325)
0xdb3: @@ SetMessage(Stack[-1])
0xdb4: Pop(1)
0xdb5: @@ ClearReplies()
0xdb6: Pop(0)
0xdb7: Push((int) 12326)
0xdb8: Push((int) 13486)
0xdb9: Push((int) 13485)
0xdba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdbb: Pop(3)
0xdbc: Return(); Pop(0)

0xdbd: Push((int) 13486)
0xdbe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdbf: IF (Stack[-1] == 0) GOTO 0xdcf; Pop(1)

0xdc0: PushEmpty(string)
0xdc1: Stack[-1] = "Neutral"
0xdc2: Call 0xd1d

0xdc3: Pop(1)
0xdc4: Push((int) 12327)
0xdc5: @@ SetMessage(Stack[-1])
0xdc6: Pop(1)
0xdc7: @@ ClearReplies()
0xdc8: Pop(0)
0xdc9: Push((int) 12328)
0xdca: Push((int) -1)
0xdcb: Push((int) 13487)
0xdcc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdcd: Pop(3)
0xdce: Return(); Pop(0)

0xdcf: Push((int) 13471)
0xdd0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdd1: IF (Stack[-1] == 0) GOTO 0xde1; Pop(1)

0xdd2: PushEmpty(string)
0xdd3: Stack[-1] = "Neutral"
0xdd4: Call 0xd1d

0xdd5: Pop(1)
0xdd6: Push((int) 12312)
0xdd7: @@ SetMessage(Stack[-1])
0xdd8: Pop(1)
0xdd9: @@ ClearReplies()
0xdda: Pop(0)
0xddb: Push((int) 12320)
0xddc: Push((int) 13480)
0xddd: Push((int) 13479)
0xdde: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xddf: Pop(3)
0xde0: Return(); Pop(0)

0xde1: Push((int) 13480)
0xde2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xde3: IF (Stack[-1] == 0) GOTO 0xdf3; Pop(1)

0xde4: PushEmpty(string)
0xde5: Stack[-1] = "Neutral"
0xde6: Call 0xd1d

0xde7: Pop(1)
0xde8: Push((int) 12321)
0xde9: @@ SetMessage(Stack[-1])
0xdea: Pop(1)
0xdeb: @@ ClearReplies()
0xdec: Pop(0)
0xded: Push((int) 12322)
0xdee: Push((int) -1)
0xdef: Push((int) 13481)
0xdf0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf1: Pop(3)
0xdf2: Return(); Pop(0)

0xdf3: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xdf4: PushEmpty(bool)
0xdf5: Call 0x12c8

0xdf6: Pop(0)
0xdf7: IF (Stack[-1] == 0) GOTO 0xdfb; Pop(1)

0xdf8: @ lshStopAnimation()
0xdf9: Pop(0)
0xdfa: GOTO 0xdfd

0xdfb: @ StopAnimation()
0xdfc: Pop(0)
0xdfd: Return(); Pop(0)

0xdfe: GOTO 0xd2e

0xdff: Return(); Pop(0)

0xe00: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xe01: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xe02: PushEmpty(bool, object)
0xe03: Stack[-1] = Stack[-11]
0xe04: Call 0x1243

0xe05: Pop(1)
0xe06: Pop(1); Push((bool) Stack[-1] == 0)
0xe07: IF (Stack[-1] == 0) GOTO 0xe0a; Pop(1)

0xe08: Stack[-10] = (int) -2
0xe09: Return(); Pop(8)

0xe0a: @ CreateDialog(Stack[-4])
0xe0b: Pop(0)
0xe0c: PushEmpty(int)
0xe0d: Call 0x12c4

0xe0e: Pop(0)
0xe0f: @@ SetNPCName(Stack[-1])
0xe10: Pop(1)
0xe11: PushEmpty(string)
0xe12: Call 0x12c6

0xe13: Pop(0)
0xe14: @@ SetPhoto(Stack[-1])
0xe15: Pop(1)
0xe16: PushEmpty(int)
0xe17: Call 0x155e

0xe18: Pop(0)
0xe19: @@ SetPlayerName(Stack[-1])
0xe1a: Pop(1)
0xe1b: Stack[-2] = (int) -1
0xe1c: @ IsOverrideActive(Stack[-3])
0xe1d: Pop(0)
0xe1e: Push(Stack[-3])
0xe1f: IF (Stack[-1] == 0) GOTO 0xe22; Pop(1)

0xe20: Stack[-10] = (int) -2
0xe21: Return(); Pop(8)

0xe22: @ DoDialog(Stack[-4])
0xe23: Pop(0)
0xe24: PushEmpty(object, object)
0xe25: Stack[-2] = Stack[-11]
0xe26: Stack[-1] = Stack[-6]
0xe27: Push(-2, 4); TaskCall(13)
0xe28: Call 0xe3f

0xe29: Pop(-2, 4); TaskReturn
0xe2a: Pop(2)
0xe2b: @@ IsDialogEnd(Stack[-1])
0xe2c: Pop(0)
0xe2d: Pop(0); Push((bool) Stack[-1] == 0)
0xe2e: IF (Stack[-1] == 0) GOTO 0xe34; Pop(1)

0xe2f: @ sync()
0xe30: Pop(0)
0xe31: @@ IsDialogEnd(Stack[-1])
0xe32: Pop(0)
0xe33: GOTO 0xe2d

0xe34: PushEmpty(object)
0xe35: Stack[-1] = Stack[-10]
0xe36: Call 0x127b

0xe37: Pop(1)
0xe38: @ StopDialog(Stack[-4])
0xe39: Pop(0)
0xe3a: @@ GetReturnValue(Stack[-2])
0xe3b: Pop(0)
0xe3c: Stack[-10] = Stack[-2]
0xe3d: Return(); Pop(8)

0xe3e: Stack[-4] = 0
0xe3f: PushEmpty()
0xe40: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xe41: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xe42: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xe43: Push((int) 1)
0xe44: IF (Stack[-1] == 0) GOTO 0xe88; Pop(1)

0xe45: PushEmpty(bool)
0xe46: Stack[-1] = (bool) 0
0xe47: PushEmpty(bool)
0xe48: Stack[-1] = (bool) 0
0xe49: PushEmpty(bool, object)
0xe4a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe4b: Call 0x14fc

0xe4c: Pop(1)
0xe4d: IF (Stack[-1] == 0) GOTO 0xe55; Pop(1)

0xe4e: PushEmpty(bool, object)
0xe4f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe50: Call 0x14f0

0xe51: Pop(1)
0xe52: Pop(1); Push((bool) Stack[-1] == 0)
0xe53: IF (Stack[-1] == 0) GOTO 0xe55; Pop(1)

0xe54: Stack[-1] = (bool) 1
0xe55: IF (Stack[-1] == 0) GOTO 0xe5d; Pop(1)

0xe56: PushEmpty(bool, object)
0xe57: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe58: Call 0x14e4

0xe59: Pop(1)
0xe5a: Pop(1); Push((bool) Stack[-1] == 0)
0xe5b: IF (Stack[-1] == 0) GOTO 0xe5d; Pop(1)

0xe5c: Stack[-1] = (bool) 1
0xe5d: IF (Stack[-1] == 0) GOTO 0xe77; Pop(1)

0xe5e: PushEmpty(object, object)
0xe5f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe60: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe61: Call 0x137e

0xe62: Pop(2)
0xe63: PushEmpty(string)
0xe64: Stack[-1] = "Neutral"
0xe65: Call 0xea6

0xe66: Pop(1)
0xe67: Push((int) 12892)
0xe68: @@ SetMessage(Stack[-1])
0xe69: Pop(1)
0xe6a: @@ ClearReplies()
0xe6b: Pop(0)
0xe6c: Push((int) 12893)
0xe6d: Push((int) 14096)
0xe6e: Push((int) 14095)
0xe6f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe70: Pop(3)
0xe71: Push((int) 12969)
0xe72: Push((int) 14175)
0xe73: Push((int) 14174)
0xe74: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe75: Pop(3)
0xe76: GOTO 0xe88

0xe77: PushEmpty(string)
0xe78: Stack[-1] = "Neutral"
0xe79: Call 0xea6

0xe7a: Pop(1)
0xe7b: Push((int) 12974)
0xe7c: @@ SetMessage(Stack[-1])
0xe7d: Pop(1)
0xe7e: @@ ClearReplies()
0xe7f: Pop(0)
0xe80: Push((int) 12975)
0xe81: Push((int) -1)
0xe82: Push((int) 14180)
0xe83: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe84: Pop(3)
0xe85: GOTO 0xe88

0xe86: Return(); Pop(0)

0xe87: GOTO 0xe43

0xe88: PushEmpty(bool)
0xe89: Call 0x12c8

0xe8a: Pop(0)
0xe8b: IF (Stack[-1] == 0) GOTO 0xe97; Pop(1)

0xe8c: @ lshWaitForAnimEnd()
0xe8d: Pop(0)
0xe8e: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe8f: IF (Stack[-1] == 0) GOTO 0xe91; Pop(1)

0xe90: GOTO 0xe96

0xe91: PushEmpty(string)
0xe92: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xe93: Call 0x127f

0xe94: Pop(1)
0xe95: GOTO 0xe8c

0xe96: GOTO 0xea5

0xe97: Push("all")
0xe98: Push("idle")
0xe99: @ PlayAnimation(Stack[-2], Stack[-1])
0xe9a: Pop(2)
0xe9b: @ WaitForAnimEnd()
0xe9c: Pop(0)
0xe9d: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe9e: IF (Stack[-1] == 0) GOTO 0xea0; Pop(1)

0xe9f: GOTO 0xea5

0xea0: Push("all")
0xea1: Push("idle")
0xea2: @ PlayAnimation(Stack[-2], Stack[-1])
0xea3: Pop(2)
0xea4: GOTO 0xe9b

0xea5: Return(); Pop(0)

0xea6: PushEmpty()
0xea7: PushEmpty(bool)
0xea8: Call 0x12c8

0xea9: Pop(0)
0xeaa: Pop(1); Push((bool) Stack[-1] == 0)
0xeab: IF (Stack[-1] == 0) GOTO 0xead; Pop(1)

0xeac: Return(); Pop(0)

0xead: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xeae: IF (Stack[-1] == 0) GOTO 0xeb0; Pop(1)

0xeaf: Return(); Pop(0)

0xeb0: PushEmpty(string)
0xeb1: Stack[-1] = Stack[-2]
0xeb2: Call 0x127f

0xeb3: Pop(1)
0xeb4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xeb5: Return(); Pop(0)

0xeb6: PushEmpty()
0xeb7: Push((int) 1)
0xeb8: IF (Stack[-1] == 0) GOTO 0xf5c; Pop(1)

0xeb9: PushEmpty()
0xeba: Call 0x1291

0xebb: Pop(0)
0xebc: Push((int) 14178)
0xebd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xebe: IF (Stack[-1] == 0) GOTO 0xec4; Pop(1)

0xebf: PushEmpty(object, object)
0xec0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xec1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xec2: Call 0x1384

0xec3: Pop(2)
0xec4: Push((int) 14094)
0xec5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xec6: IF (Stack[-1] == 0) GOTO 0xf08; Pop(1)

0xec7: PushEmpty(bool)
0xec8: Stack[-1] = (bool) 0
0xec9: PushEmpty(bool)
0xeca: Stack[-1] = (bool) 0
0xecb: PushEmpty(bool, object)
0xecc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xecd: Call 0x14fc

0xece: Pop(1)
0xecf: IF (Stack[-1] == 0) GOTO 0xed7; Pop(1)

0xed0: PushEmpty(bool, object)
0xed1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xed2: Call 0x14f0

0xed3: Pop(1)
0xed4: Pop(1); Push((bool) Stack[-1] == 0)
0xed5: IF (Stack[-1] == 0) GOTO 0xed7; Pop(1)

0xed6: Stack[-1] = (bool) 1
0xed7: IF (Stack[-1] == 0) GOTO 0xedf; Pop(1)

0xed8: PushEmpty(bool, object)
0xed9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xeda: Call 0x14e4

0xedb: Pop(1)
0xedc: Pop(1); Push((bool) Stack[-1] == 0)
0xedd: IF (Stack[-1] == 0) GOTO 0xedf; Pop(1)

0xede: Stack[-1] = (bool) 1
0xedf: IF (Stack[-1] == 0) GOTO 0xef9; Pop(1)

0xee0: PushEmpty(object, object)
0xee1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xee2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xee3: Call 0x137e

0xee4: Pop(2)
0xee5: PushEmpty(string)
0xee6: Stack[-1] = "Neutral"
0xee7: Call 0xea6

0xee8: Pop(1)
0xee9: Push((int) 12892)
0xeea: @@ SetMessage(Stack[-1])
0xeeb: Pop(1)
0xeec: @@ ClearReplies()
0xeed: Pop(0)
0xeee: Push((int) 12893)
0xeef: Push((int) 14096)
0xef0: Push((int) 14095)
0xef1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef2: Pop(3)
0xef3: Push((int) 12969)
0xef4: Push((int) 14175)
0xef5: Push((int) 14174)
0xef6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef7: Pop(3)
0xef8: Return(); Pop(0)

0xef9: PushEmpty(string)
0xefa: Stack[-1] = "Neutral"
0xefb: Call 0xea6

0xefc: Pop(1)
0xefd: Push((int) 12974)
0xefe: @@ SetMessage(Stack[-1])
0xeff: Pop(1)
0xf00: @@ ClearReplies()
0xf01: Pop(0)
0xf02: Push((int) 12975)
0xf03: Push((int) -1)
0xf04: Push((int) 14180)
0xf05: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf06: Pop(3)
0xf07: Return(); Pop(0)

0xf08: Push((int) 14175)
0xf09: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf0a: IF (Stack[-1] == 0) GOTO 0xf1a; Pop(1)

0xf0b: PushEmpty(string)
0xf0c: Stack[-1] = "Neutral"
0xf0d: Call 0xea6

0xf0e: Pop(1)
0xf0f: Push((int) 12970)
0xf10: @@ SetMessage(Stack[-1])
0xf11: Pop(1)
0xf12: @@ ClearReplies()
0xf13: Pop(0)
0xf14: Push((int) 12971)
0xf15: Push((int) 14177)
0xf16: Push((int) 14176)
0xf17: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf18: Pop(3)
0xf19: Return(); Pop(0)

0xf1a: Push((int) 14177)
0xf1b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf1c: IF (Stack[-1] == 0) GOTO 0xf2c; Pop(1)

0xf1d: PushEmpty(string)
0xf1e: Stack[-1] = "Neutral"
0xf1f: Call 0xea6

0xf20: Pop(1)
0xf21: Push((int) 12972)
0xf22: @@ SetMessage(Stack[-1])
0xf23: Pop(1)
0xf24: @@ ClearReplies()
0xf25: Pop(0)
0xf26: Push((int) 12973)
0xf27: Push((int) -1)
0xf28: Push((int) 14178)
0xf29: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf2a: Pop(3)
0xf2b: Return(); Pop(0)

0xf2c: Push((int) 14096)
0xf2d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf2e: IF (Stack[-1] == 0) GOTO 0xf3e; Pop(1)

0xf2f: PushEmpty(string)
0xf30: Stack[-1] = "Neutral"
0xf31: Call 0xea6

0xf32: Pop(1)
0xf33: Push((int) 12894)
0xf34: @@ SetMessage(Stack[-1])
0xf35: Pop(1)
0xf36: @@ ClearReplies()
0xf37: Pop(0)
0xf38: Push((int) 12895)
0xf39: Push((int) 14098)
0xf3a: Push((int) 14097)
0xf3b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf3c: Pop(3)
0xf3d: Return(); Pop(0)

0xf3e: Push((int) 14098)
0xf3f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf40: IF (Stack[-1] == 0) GOTO 0xf50; Pop(1)

0xf41: PushEmpty(string)
0xf42: Stack[-1] = "Neutral"
0xf43: Call 0xea6

0xf44: Pop(1)
0xf45: Push((int) 12896)
0xf46: @@ SetMessage(Stack[-1])
0xf47: Pop(1)
0xf48: @@ ClearReplies()
0xf49: Pop(0)
0xf4a: Push((int) 12897)
0xf4b: Push((int) 14175)
0xf4c: Push((int) 14099)
0xf4d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf4e: Pop(3)
0xf4f: Return(); Pop(0)

0xf50: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf51: PushEmpty(bool)
0xf52: Call 0x12c8

0xf53: Pop(0)
0xf54: IF (Stack[-1] == 0) GOTO 0xf58; Pop(1)

0xf55: @ lshStopAnimation()
0xf56: Pop(0)
0xf57: GOTO 0xf5a

0xf58: @ StopAnimation()
0xf59: Pop(0)
0xf5a: Return(); Pop(0)

0xf5b: GOTO 0xeb7

0xf5c: Return(); Pop(0)

0xf5d: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xf5e: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xf5f: PushEmpty(bool, object)
0xf60: Stack[-1] = Stack[-11]
0xf61: Call 0x1243

0xf62: Pop(1)
0xf63: Pop(1); Push((bool) Stack[-1] == 0)
0xf64: IF (Stack[-1] == 0) GOTO 0xf67; Pop(1)

0xf65: Stack[-10] = (int) -2
0xf66: Return(); Pop(8)

0xf67: @ CreateDialog(Stack[-4])
0xf68: Pop(0)
0xf69: PushEmpty(int)
0xf6a: Call 0x12c4

0xf6b: Pop(0)
0xf6c: @@ SetNPCName(Stack[-1])
0xf6d: Pop(1)
0xf6e: PushEmpty(string)
0xf6f: Call 0x12c6

0xf70: Pop(0)
0xf71: @@ SetPhoto(Stack[-1])
0xf72: Pop(1)
0xf73: PushEmpty(int)
0xf74: Call 0x155e

0xf75: Pop(0)
0xf76: @@ SetPlayerName(Stack[-1])
0xf77: Pop(1)
0xf78: Stack[-2] = (int) -1
0xf79: @ IsOverrideActive(Stack[-3])
0xf7a: Pop(0)
0xf7b: Push(Stack[-3])
0xf7c: IF (Stack[-1] == 0) GOTO 0xf7f; Pop(1)

0xf7d: Stack[-10] = (int) -2
0xf7e: Return(); Pop(8)

0xf7f: @ DoDialog(Stack[-4])
0xf80: Pop(0)
0xf81: PushEmpty(object, object)
0xf82: Stack[-2] = Stack[-11]
0xf83: Stack[-1] = Stack[-6]
0xf84: Push(-2, 4); TaskCall(15)
0xf85: Call 0xf9c

0xf86: Pop(-2, 4); TaskReturn
0xf87: Pop(2)
0xf88: @@ IsDialogEnd(Stack[-1])
0xf89: Pop(0)
0xf8a: Pop(0); Push((bool) Stack[-1] == 0)
0xf8b: IF (Stack[-1] == 0) GOTO 0xf91; Pop(1)

0xf8c: @ sync()
0xf8d: Pop(0)
0xf8e: @@ IsDialogEnd(Stack[-1])
0xf8f: Pop(0)
0xf90: GOTO 0xf8a

0xf91: PushEmpty(object)
0xf92: Stack[-1] = Stack[-10]
0xf93: Call 0x127b

0xf94: Pop(1)
0xf95: @ StopDialog(Stack[-4])
0xf96: Pop(0)
0xf97: @@ GetReturnValue(Stack[-2])
0xf98: Pop(0)
0xf99: Stack[-10] = Stack[-2]
0xf9a: Return(); Pop(8)

0xf9b: Stack[-4] = 0
0xf9c: PushEmpty()
0xf9d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xf9e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xf9f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xfa0: Push((int) 1)
0xfa1: IF (Stack[-1] == 0) GOTO 0x1001; Pop(1)

0xfa2: PushEmpty(bool)
0xfa3: Stack[-1] = (bool) 0
0xfa4: PushEmpty(bool, object)
0xfa5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfa6: Call 0x1454

0xfa7: Pop(1)
0xfa8: IF (Stack[-1] == 0) GOTO 0xfaf; Pop(1)

0xfa9: PushEmpty(bool, object)
0xfaa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfab: Call 0x1460

0xfac: Pop(1)
0xfad: IF (Stack[-1] == 0) GOTO 0xfaf; Pop(1)

0xfae: Stack[-1] = (bool) 1
0xfaf: IF (Stack[-1] == 0) GOTO 0xfc9; Pop(1)

0xfb0: PushEmpty(object, object)
0xfb1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfb2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfb3: Call 0x133a

0xfb4: Pop(2)
0xfb5: PushEmpty(string)
0xfb6: Stack[-1] = "Neutral"
0xfb7: Call 0x101f

0xfb8: Pop(1)
0xfb9: Push((int) 14369)
0xfba: @@ SetMessage(Stack[-1])
0xfbb: Pop(1)
0xfbc: @@ ClearReplies()
0xfbd: Pop(0)
0xfbe: Push((int) 14370)
0xfbf: Push((int) 15594)
0xfc0: Push((int) 15593)
0xfc1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfc2: Pop(3)
0xfc3: Push((int) 14376)
0xfc4: Push((int) -1)
0xfc5: Push((int) 15599)
0xfc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfc7: Pop(3)
0xfc8: GOTO 0x1001

0xfc9: PushEmpty(string)
0xfca: Stack[-1] = "Neutral"
0xfcb: Call 0x101f

0xfcc: Pop(1)
0xfcd: Push((int) 14377)
0xfce: @@ SetMessage(Stack[-1])
0xfcf: Pop(1)
0xfd0: @@ ClearReplies()
0xfd1: Pop(0)
0xfd2: PushEmpty(bool)
0xfd3: Stack[-1] = (bool) 0
0xfd4: PushEmpty(bool)
0xfd5: Stack[-1] = (bool) 0
0xfd6: PushEmpty(bool, object)
0xfd7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfd8: Call 0x1460

0xfd9: Pop(1)
0xfda: Pop(1); Push((bool) Stack[-1] == 0)
0xfdb: IF (Stack[-1] == 0) GOTO 0xfe2; Pop(1)

0xfdc: PushEmpty(bool, object)
0xfdd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfde: Call 0x146c

0xfdf: Pop(1)
0xfe0: IF (Stack[-1] == 0) GOTO 0xfe2; Pop(1)

0xfe1: Stack[-1] = (bool) 1
0xfe2: IF (Stack[-1] == 0) GOTO 0xfe9; Pop(1)

0xfe3: PushEmpty(bool, object)
0xfe4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfe5: Call 0x1478

0xfe6: Pop(1)
0xfe7: IF (Stack[-1] == 0) GOTO 0xfe9; Pop(1)

0xfe8: Stack[-1] = (bool) 1
0xfe9: IF (Stack[-1] == 0) GOTO 0xfef; Pop(1)

0xfea: Push((int) 14378)
0xfeb: Push((int) 15602)
0xfec: Push((int) 15601)
0xfed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfee: Pop(3)
0xfef: PushEmpty(bool, object)
0xff0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xff1: Call 0x1490

0xff2: Pop(1)
0xff3: IF (Stack[-1] == 0) GOTO 0xff9; Pop(1)

0xff4: Push((int) 14400)
0xff5: Push((int) 15626)
0xff6: Push((int) 15625)
0xff7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff8: Pop(3)
0xff9: Push((int) 14419)
0xffa: Push((int) -1)
0xffb: Push((int) 15644)
0xffc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xffd: Pop(3)
0xffe: GOTO 0x1001

0xfff: Return(); Pop(0)

0x1000: GOTO 0xfa0

0x1001: PushEmpty(bool)
0x1002: Call 0x12c8

0x1003: Pop(0)
0x1004: IF (Stack[-1] == 0) GOTO 0x1010; Pop(1)

0x1005: @ lshWaitForAnimEnd()
0x1006: Pop(0)
0x1007: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1008: IF (Stack[-1] == 0) GOTO 0x100a; Pop(1)

0x1009: GOTO 0x100f

0x100a: PushEmpty(string)
0x100b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x100c: Call 0x127f

0x100d: Pop(1)
0x100e: GOTO 0x1005

0x100f: GOTO 0x101e

0x1010: Push("all")
0x1011: Push("idle")
0x1012: @ PlayAnimation(Stack[-2], Stack[-1])
0x1013: Pop(2)
0x1014: @ WaitForAnimEnd()
0x1015: Pop(0)
0x1016: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1017: IF (Stack[-1] == 0) GOTO 0x1019; Pop(1)

0x1018: GOTO 0x101e

0x1019: Push("all")
0x101a: Push("idle")
0x101b: @ PlayAnimation(Stack[-2], Stack[-1])
0x101c: Pop(2)
0x101d: GOTO 0x1014

0x101e: Return(); Pop(0)

0x101f: PushEmpty()
0x1020: PushEmpty(bool)
0x1021: Call 0x12c8

0x1022: Pop(0)
0x1023: Pop(1); Push((bool) Stack[-1] == 0)
0x1024: IF (Stack[-1] == 0) GOTO 0x1026; Pop(1)

0x1025: Return(); Pop(0)

0x1026: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1027: IF (Stack[-1] == 0) GOTO 0x1029; Pop(1)

0x1028: Return(); Pop(0)

0x1029: PushEmpty(string)
0x102a: Stack[-1] = Stack[-2]
0x102b: Call 0x127f

0x102c: Pop(1)
0x102d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x102e: Return(); Pop(0)

0x102f: PushEmpty()
0x1030: Push((int) 1)
0x1031: IF (Stack[-1] == 0) GOTO 0x122a; Pop(1)

0x1032: PushEmpty()
0x1033: Call 0x1291

0x1034: Pop(0)
0x1035: Push((int) 15601)
0x1036: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1037: IF (Stack[-1] == 0) GOTO 0x103d; Pop(1)

0x1038: PushEmpty(object, object)
0x1039: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x103a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x103b: Call 0x1340

0x103c: Pop(2)
0x103d: Push((int) 15625)
0x103e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x103f: IF (Stack[-1] == 0) GOTO 0x1045; Pop(1)

0x1040: PushEmpty(object, object)
0x1041: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1042: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1043: Call 0x1346

0x1044: Pop(2)
0x1045: Push((int) 15592)
0x1046: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1047: IF (Stack[-1] == 0) GOTO 0x10a5; Pop(1)

0x1048: PushEmpty(bool)
0x1049: Stack[-1] = (bool) 0
0x104a: PushEmpty(bool, object)
0x104b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x104c: Call 0x1454

0x104d: Pop(1)
0x104e: IF (Stack[-1] == 0) GOTO 0x1055; Pop(1)

0x104f: PushEmpty(bool, object)
0x1050: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1051: Call 0x1460

0x1052: Pop(1)
0x1053: IF (Stack[-1] == 0) GOTO 0x1055; Pop(1)

0x1054: Stack[-1] = (bool) 1
0x1055: IF (Stack[-1] == 0) GOTO 0x106f; Pop(1)

0x1056: PushEmpty(object, object)
0x1057: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1058: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1059: Call 0x133a

0x105a: Pop(2)
0x105b: PushEmpty(string)
0x105c: Stack[-1] = "Neutral"
0x105d: Call 0x101f

0x105e: Pop(1)
0x105f: Push((int) 14369)
0x1060: @@ SetMessage(Stack[-1])
0x1061: Pop(1)
0x1062: @@ ClearReplies()
0x1063: Pop(0)
0x1064: Push((int) 14370)
0x1065: Push((int) 15594)
0x1066: Push((int) 15593)
0x1067: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1068: Pop(3)
0x1069: Push((int) 14376)
0x106a: Push((int) -1)
0x106b: Push((int) 15599)
0x106c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x106d: Pop(3)
0x106e: Return(); Pop(0)

0x106f: PushEmpty(string)
0x1070: Stack[-1] = "Neutral"
0x1071: Call 0x101f

0x1072: Pop(1)
0x1073: Push((int) 14377)
0x1074: @@ SetMessage(Stack[-1])
0x1075: Pop(1)
0x1076: @@ ClearReplies()
0x1077: Pop(0)
0x1078: PushEmpty(bool)
0x1079: Stack[-1] = (bool) 0
0x107a: PushEmpty(bool)
0x107b: Stack[-1] = (bool) 0
0x107c: PushEmpty(bool, object)
0x107d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x107e: Call 0x1460

0x107f: Pop(1)
0x1080: Pop(1); Push((bool) Stack[-1] == 0)
0x1081: IF (Stack[-1] == 0) GOTO 0x1088; Pop(1)

0x1082: PushEmpty(bool, object)
0x1083: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1084: Call 0x146c

0x1085: Pop(1)
0x1086: IF (Stack[-1] == 0) GOTO 0x1088; Pop(1)

0x1087: Stack[-1] = (bool) 1
0x1088: IF (Stack[-1] == 0) GOTO 0x108f; Pop(1)

0x1089: PushEmpty(bool, object)
0x108a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x108b: Call 0x1478

0x108c: Pop(1)
0x108d: IF (Stack[-1] == 0) GOTO 0x108f; Pop(1)

0x108e: Stack[-1] = (bool) 1
0x108f: IF (Stack[-1] == 0) GOTO 0x1095; Pop(1)

0x1090: Push((int) 14378)
0x1091: Push((int) 15602)
0x1092: Push((int) 15601)
0x1093: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1094: Pop(3)
0x1095: PushEmpty(bool, object)
0x1096: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1097: Call 0x1490

0x1098: Pop(1)
0x1099: IF (Stack[-1] == 0) GOTO 0x109f; Pop(1)

0x109a: Push((int) 14400)
0x109b: Push((int) 15626)
0x109c: Push((int) 15625)
0x109d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x109e: Pop(3)
0x109f: Push((int) 14419)
0x10a0: Push((int) -1)
0x10a1: Push((int) 15644)
0x10a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10a3: Pop(3)
0x10a4: Return(); Pop(0)

0x10a5: Push((int) 15626)
0x10a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10a7: IF (Stack[-1] == 0) GOTO 0x10b7; Pop(1)

0x10a8: PushEmpty(string)
0x10a9: Stack[-1] = "Neutral"
0x10aa: Call 0x101f

0x10ab: Pop(1)
0x10ac: Push((int) 14401)
0x10ad: @@ SetMessage(Stack[-1])
0x10ae: Pop(1)
0x10af: @@ ClearReplies()
0x10b0: Pop(0)
0x10b1: Push((int) 14402)
0x10b2: Push((int) 15628)
0x10b3: Push((int) 15627)
0x10b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10b5: Pop(3)
0x10b6: Return(); Pop(0)

0x10b7: Push((int) 15628)
0x10b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10b9: IF (Stack[-1] == 0) GOTO 0x10c9; Pop(1)

0x10ba: PushEmpty(string)
0x10bb: Stack[-1] = "Neutral"
0x10bc: Call 0x101f

0x10bd: Pop(1)
0x10be: Push((int) 14403)
0x10bf: @@ SetMessage(Stack[-1])
0x10c0: Pop(1)
0x10c1: @@ ClearReplies()
0x10c2: Pop(0)
0x10c3: Push((int) 14404)
0x10c4: Push((int) 15630)
0x10c5: Push((int) 15629)
0x10c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c7: Pop(3)
0x10c8: Return(); Pop(0)

0x10c9: Push((int) 15630)
0x10ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10cb: IF (Stack[-1] == 0) GOTO 0x10db; Pop(1)

0x10cc: PushEmpty(string)
0x10cd: Stack[-1] = "Neutral"
0x10ce: Call 0x101f

0x10cf: Pop(1)
0x10d0: Push((int) 14405)
0x10d1: @@ SetMessage(Stack[-1])
0x10d2: Pop(1)
0x10d3: @@ ClearReplies()
0x10d4: Pop(0)
0x10d5: Push((int) 14406)
0x10d6: Push((int) 15632)
0x10d7: Push((int) 15631)
0x10d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10d9: Pop(3)
0x10da: Return(); Pop(0)

0x10db: Push((int) 15632)
0x10dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10dd: IF (Stack[-1] == 0) GOTO 0x10ed; Pop(1)

0x10de: PushEmpty(string)
0x10df: Stack[-1] = "Neutral"
0x10e0: Call 0x101f

0x10e1: Pop(1)
0x10e2: Push((int) 14407)
0x10e3: @@ SetMessage(Stack[-1])
0x10e4: Pop(1)
0x10e5: @@ ClearReplies()
0x10e6: Pop(0)
0x10e7: Push((int) 14408)
0x10e8: Push((int) 15634)
0x10e9: Push((int) 15633)
0x10ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10eb: Pop(3)
0x10ec: Return(); Pop(0)

0x10ed: Push((int) 15634)
0x10ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10ef: IF (Stack[-1] == 0) GOTO 0x10ff; Pop(1)

0x10f0: PushEmpty(string)
0x10f1: Stack[-1] = "Neutral"
0x10f2: Call 0x101f

0x10f3: Pop(1)
0x10f4: Push((int) 14409)
0x10f5: @@ SetMessage(Stack[-1])
0x10f6: Pop(1)
0x10f7: @@ ClearReplies()
0x10f8: Pop(0)
0x10f9: Push((int) 14410)
0x10fa: Push((int) 15636)
0x10fb: Push((int) 15635)
0x10fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10fd: Pop(3)
0x10fe: Return(); Pop(0)

0x10ff: Push((int) 15636)
0x1100: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1101: IF (Stack[-1] == 0) GOTO 0x1111; Pop(1)

0x1102: PushEmpty(string)
0x1103: Stack[-1] = "Neutral"
0x1104: Call 0x101f

0x1105: Pop(1)
0x1106: Push((int) 14411)
0x1107: @@ SetMessage(Stack[-1])
0x1108: Pop(1)
0x1109: @@ ClearReplies()
0x110a: Pop(0)
0x110b: Push((int) 14412)
0x110c: Push((int) 15638)
0x110d: Push((int) 15637)
0x110e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x110f: Pop(3)
0x1110: Return(); Pop(0)

0x1111: Push((int) 15638)
0x1112: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1113: IF (Stack[-1] == 0) GOTO 0x1123; Pop(1)

0x1114: PushEmpty(string)
0x1115: Stack[-1] = "Neutral"
0x1116: Call 0x101f

0x1117: Pop(1)
0x1118: Push((int) 14413)
0x1119: @@ SetMessage(Stack[-1])
0x111a: Pop(1)
0x111b: @@ ClearReplies()
0x111c: Pop(0)
0x111d: Push((int) 14414)
0x111e: Push((int) 15640)
0x111f: Push((int) 15639)
0x1120: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1121: Pop(3)
0x1122: Return(); Pop(0)

0x1123: Push((int) 15640)
0x1124: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1125: IF (Stack[-1] == 0) GOTO 0x113f; Pop(1)

0x1126: PushEmpty(string)
0x1127: Stack[-1] = "Neutral"
0x1128: Call 0x101f

0x1129: Pop(1)
0x112a: Push((int) 14415)
0x112b: @@ SetMessage(Stack[-1])
0x112c: Pop(1)
0x112d: @@ ClearReplies()
0x112e: Pop(0)
0x112f: Push((int) 14416)
0x1130: Push((int) -1)
0x1131: Push((int) 15641)
0x1132: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1133: Pop(3)
0x1134: Push((int) 14417)
0x1135: Push((int) -1)
0x1136: Push((int) 15642)
0x1137: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1138: Pop(3)
0x1139: Push((int) 14418)
0x113a: Push((int) -1)
0x113b: Push((int) 15643)
0x113c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x113d: Pop(3)
0x113e: Return(); Pop(0)

0x113f: Push((int) 15602)
0x1140: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1141: IF (Stack[-1] == 0) GOTO 0x1156; Pop(1)

0x1142: PushEmpty(string)
0x1143: Stack[-1] = "Neutral"
0x1144: Call 0x101f

0x1145: Pop(1)
0x1146: Push((int) 14379)
0x1147: @@ SetMessage(Stack[-1])
0x1148: Pop(1)
0x1149: @@ ClearReplies()
0x114a: Pop(0)
0x114b: Push((int) 14380)
0x114c: Push((int) 15604)
0x114d: Push((int) 15603)
0x114e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x114f: Pop(3)
0x1150: Push((int) 14399)
0x1151: Push((int) 15604)
0x1152: Push((int) 15623)
0x1153: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1154: Pop(3)
0x1155: Return(); Pop(0)

0x1156: Push((int) 15604)
0x1157: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1158: IF (Stack[-1] == 0) GOTO 0x1168; Pop(1)

0x1159: PushEmpty(string)
0x115a: Stack[-1] = "Neutral"
0x115b: Call 0x101f

0x115c: Pop(1)
0x115d: Push((int) 14381)
0x115e: @@ SetMessage(Stack[-1])
0x115f: Pop(1)
0x1160: @@ ClearReplies()
0x1161: Pop(0)
0x1162: Push((int) 14382)
0x1163: Push((int) 15606)
0x1164: Push((int) 15605)
0x1165: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1166: Pop(3)
0x1167: Return(); Pop(0)

0x1168: Push((int) 15606)
0x1169: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x116a: IF (Stack[-1] == 0) GOTO 0x117a; Pop(1)

0x116b: PushEmpty(string)
0x116c: Stack[-1] = "Neutral"
0x116d: Call 0x101f

0x116e: Pop(1)
0x116f: Push((int) 14383)
0x1170: @@ SetMessage(Stack[-1])
0x1171: Pop(1)
0x1172: @@ ClearReplies()
0x1173: Pop(0)
0x1174: Push((int) 14384)
0x1175: Push((int) 15608)
0x1176: Push((int) 15607)
0x1177: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1178: Pop(3)
0x1179: Return(); Pop(0)

0x117a: Push((int) 15608)
0x117b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x117c: IF (Stack[-1] == 0) GOTO 0x1196; Pop(1)

0x117d: PushEmpty(string)
0x117e: Stack[-1] = "Neutral"
0x117f: Call 0x101f

0x1180: Pop(1)
0x1181: Push((int) 14385)
0x1182: @@ SetMessage(Stack[-1])
0x1183: Pop(1)
0x1184: @@ ClearReplies()
0x1185: Pop(0)
0x1186: PushEmpty(bool, object)
0x1187: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1188: Call 0x1484

0x1189: Pop(1)
0x118a: IF (Stack[-1] == 0) GOTO 0x1190; Pop(1)

0x118b: Push((int) 14386)
0x118c: Push((int) 15610)
0x118d: Push((int) 15609)
0x118e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x118f: Pop(3)
0x1190: Push((int) 14398)
0x1191: Push((int) -1)
0x1192: Push((int) 15622)
0x1193: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1194: Pop(3)
0x1195: Return(); Pop(0)

0x1196: Push((int) 15610)
0x1197: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1198: IF (Stack[-1] == 0) GOTO 0x11a8; Pop(1)

0x1199: PushEmpty(string)
0x119a: Stack[-1] = "Neutral"
0x119b: Call 0x101f

0x119c: Pop(1)
0x119d: Push((int) 14387)
0x119e: @@ SetMessage(Stack[-1])
0x119f: Pop(1)
0x11a0: @@ ClearReplies()
0x11a1: Pop(0)
0x11a2: Push((int) 14388)
0x11a3: Push((int) 15612)
0x11a4: Push((int) 15611)
0x11a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11a6: Pop(3)
0x11a7: Return(); Pop(0)

0x11a8: Push((int) 15612)
0x11a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11aa: IF (Stack[-1] == 0) GOTO 0x11ba; Pop(1)

0x11ab: PushEmpty(string)
0x11ac: Stack[-1] = "Neutral"
0x11ad: Call 0x101f

0x11ae: Pop(1)
0x11af: Push((int) 14389)
0x11b0: @@ SetMessage(Stack[-1])
0x11b1: Pop(1)
0x11b2: @@ ClearReplies()
0x11b3: Pop(0)
0x11b4: Push((int) 14390)
0x11b5: Push((int) 15614)
0x11b6: Push((int) 15613)
0x11b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11b8: Pop(3)
0x11b9: Return(); Pop(0)

0x11ba: Push((int) 15614)
0x11bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11bc: IF (Stack[-1] == 0) GOTO 0x11d1; Pop(1)

0x11bd: PushEmpty(string)
0x11be: Stack[-1] = "Neutral"
0x11bf: Call 0x101f

0x11c0: Pop(1)
0x11c1: Push((int) 14391)
0x11c2: @@ SetMessage(Stack[-1])
0x11c3: Pop(1)
0x11c4: @@ ClearReplies()
0x11c5: Pop(0)
0x11c6: Push((int) 14392)
0x11c7: Push((int) 15616)
0x11c8: Push((int) 15615)
0x11c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11ca: Pop(3)
0x11cb: Push((int) 14397)
0x11cc: Push((int) 15616)
0x11cd: Push((int) 15620)
0x11ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11cf: Pop(3)
0x11d0: Return(); Pop(0)

0x11d1: Push((int) 15616)
0x11d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11d3: IF (Stack[-1] == 0) GOTO 0x11e3; Pop(1)

0x11d4: PushEmpty(string)
0x11d5: Stack[-1] = "Neutral"
0x11d6: Call 0x101f

0x11d7: Pop(1)
0x11d8: Push((int) 14393)
0x11d9: @@ SetMessage(Stack[-1])
0x11da: Pop(1)
0x11db: @@ ClearReplies()
0x11dc: Pop(0)
0x11dd: Push((int) 14394)
0x11de: Push((int) 15618)
0x11df: Push((int) 15617)
0x11e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11e1: Pop(3)
0x11e2: Return(); Pop(0)

0x11e3: Push((int) 15618)
0x11e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11e5: IF (Stack[-1] == 0) GOTO 0x11f5; Pop(1)

0x11e6: PushEmpty(string)
0x11e7: Stack[-1] = "Neutral"
0x11e8: Call 0x101f

0x11e9: Pop(1)
0x11ea: Push((int) 14395)
0x11eb: @@ SetMessage(Stack[-1])
0x11ec: Pop(1)
0x11ed: @@ ClearReplies()
0x11ee: Pop(0)
0x11ef: Push((int) 14396)
0x11f0: Push((int) -1)
0x11f1: Push((int) 15619)
0x11f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11f3: Pop(3)
0x11f4: Return(); Pop(0)

0x11f5: Push((int) 15594)
0x11f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11f7: IF (Stack[-1] == 0) GOTO 0x1207; Pop(1)

0x11f8: PushEmpty(string)
0x11f9: Stack[-1] = "Neutral"
0x11fa: Call 0x101f

0x11fb: Pop(1)
0x11fc: Push((int) 14371)
0x11fd: @@ SetMessage(Stack[-1])
0x11fe: Pop(1)
0x11ff: @@ ClearReplies()
0x1200: Pop(0)
0x1201: Push((int) 14372)
0x1202: Push((int) 15596)
0x1203: Push((int) 15595)
0x1204: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1205: Pop(3)
0x1206: Return(); Pop(0)

0x1207: Push((int) 15596)
0x1208: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1209: IF (Stack[-1] == 0) GOTO 0x121e; Pop(1)

0x120a: PushEmpty(string)
0x120b: Stack[-1] = "Neutral"
0x120c: Call 0x101f

0x120d: Pop(1)
0x120e: Push((int) 14373)
0x120f: @@ SetMessage(Stack[-1])
0x1210: Pop(1)
0x1211: @@ ClearReplies()
0x1212: Pop(0)
0x1213: Push((int) 14374)
0x1214: Push((int) -1)
0x1215: Push((int) 15597)
0x1216: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1217: Pop(3)
0x1218: Push((int) 14375)
0x1219: Push((int) -1)
0x121a: Push((int) 15598)
0x121b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x121c: Pop(3)
0x121d: Return(); Pop(0)

0x121e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x121f: PushEmpty(bool)
0x1220: Call 0x12c8

0x1221: Pop(0)
0x1222: IF (Stack[-1] == 0) GOTO 0x1226; Pop(1)

0x1223: @ lshStopAnimation()
0x1224: Pop(0)
0x1225: GOTO 0x1228

0x1226: @ StopAnimation()
0x1227: Pop(0)
0x1228: Return(); Pop(0)

0x1229: GOTO 0x1030

0x122a: Return(); Pop(0)

0x122b: PushEmpty(int, int)
0x122c: @@ GetProperty(Stack[-4], Stack[-1])
0x122d: Pop(0)
0x122e: Pop(0); Push(Stack[-1] + Stack[-3]);
0x122f: @@ SetProperty(Stack[-5], Stack[-1])
0x1230: Pop(1)
0x1231: Return(); Pop(2)

0x1232: PushEmpty(cvector, cvector, cvector, bool, cvector, cvector, cvector, bool)
0x1233: @@ GetPosition(Stack[-4])
0x1234: Pop(0)
0x1235: @ GetPosition(Stack[-3])
0x1236: Pop(0)
0x1237: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x1238: Push(CvectorIndex(Stack[-2], 0))
0x1239: Push(CvectorIndex(Stack[-3], 2))
0x123a: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x123b: Pop(2)
0x123c: Stack[-10] = Stack[-1]
0x123d: Return(); Pop(8)

0x123e: PushEmpty(bool, bool)
0x123f: @ IsLoaded(Stack[-1])
0x1240: Pop(0)
0x1241: Stack[-3] = Stack[-1]
0x1242: Return(); Pop(2)

0x1243: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x1244: @@ GetPosition(Stack[-7])
0x1245: Pop(0)
0x1246: @@ GetEyesHeight(Stack[-8])
0x1247: Pop(0)
0x1248: Push(CvectorIndex(Stack[-7], 1))
0x1249: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x124a: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x124b: @ GetPosition(Stack[-6])
0x124c: Pop(0)
0x124d: @ GetEyesHeight(Stack[-8])
0x124e: Pop(0)
0x124f: Push(CvectorIndex(Stack[-6], 1))
0x1250: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1251: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1252: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x1253: Push(CvectorIndex(Stack[-5], 1))
0x1254: Stack[-1] = (int) 0
0x1255: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x1256: Pop(0); Push(Stack[-5] | Stack[-5]);
0x1257: Pop(1); Push(Sqrt(Stack[-1]))
0x1258: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x1259: Stack[-4] = -Stack[-5]; Pop(0);
0x125a: Push((int) 70)
0x125b: Pop(1); Push(Stack[-6] * Stack[-1]);
0x125c: PushEmpty(cvector, cvector)
0x125d: Push(CVector(0.0, 1.0, 0.0))
0x125e: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x125f: Call 0x1298

0x1260: Pop(1)
0x1261: Push((int) 25)
0x1262: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1263: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1264: Push(CVector(0.0, 10.0, 0.0))
0x1265: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x1266: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x1267: @ IsOverrideActive(Stack[-1])
0x1268: Pop(0)
0x1269: Push(Stack[-1])
0x126a: IF (Stack[-1] == 0) GOTO 0x126d; Pop(1)

0x126b: Stack[-18] = (bool) 0
0x126c: Return(); Pop(16)

0x126d: @ StopWorld()
0x126e: Pop(0)
0x126f: @ CameraTransit(Stack[-2], Stack[-4])
0x1270: Pop(0)
0x1271: Push(CvectorIndex(Stack[-3], 0))
0x1272: Push(CvectorIndex(Stack[-4], 2))
0x1273: @ Rotate(Stack[-2], Stack[-1])
0x1274: Pop(2)
0x1275: @ CameraWaitForPlayFinish()
0x1276: Pop(0)
0x1277: @ ResumeWorld()
0x1278: Pop(0)
0x1279: Stack[-18] = (bool) 1
0x127a: Return(); Pop(16)

0x127b: PushEmpty()
0x127c: @ CameraSwitchToNormal()
0x127d: Pop(0)
0x127e: Return(); Pop(0)

0x127f: PushEmpty(float, float, float, float)
0x1280: Push("playing ")
0x1281: Pop(1); Push(Stack[-1] + Stack[-6]);
0x1282: @ Trace(Stack[-1])
0x1283: Pop(1)
0x1284: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x1285: Pop(0)
0x1286: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x1287: Pop(0)
0x1288: Push("start: ")
0x1289: Pop(1); Push(Stack[-1] + Stack[-3]);
0x128a: @ Trace(Stack[-1])
0x128b: Pop(1)
0x128c: Push("end: ")
0x128d: Pop(1); Push(Stack[-1] + Stack[-2]);
0x128e: @ Trace(Stack[-1])
0x128f: Pop(1)
0x1290: Return(); Pop(4)

0x1291: PushEmpty(bool)
0x1292: Call 0x12c8

0x1293: Pop(0)
0x1294: IF (Stack[-1] == 0) GOTO 0x1297; Pop(1)

0x1295: @ lshStopSpeech()
0x1296: Pop(0)
0x1297: Return(); Pop(0)

0x1298: PushEmpty(float, float)
0x1299: Pop(0); Push(Stack[-3] | Stack[-3]);
0x129a: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x129b: Push((float)0.0)
0x129c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x129d: IF (Stack[-1] == 0) GOTO 0x12a0; Pop(1)

0x129e: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x129f: Return(); Pop(2)

0x12a0: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x12a1: Return(); Pop(2)

0x12a2: PushEmpty(int, int)
0x12a3: @ GetVariable(Stack[-3], Stack[-1])
0x12a4: Pop(0)
0x12a5: Stack[-4] = Stack[-1]
0x12a6: Return(); Pop(2)

0x12a7: PushEmpty(float, float)
0x12a8: @ GetGameTime(Stack[-1])
0x12a9: Pop(0)
0x12aa: Stack[-3] = Stack[-1]
0x12ab: Return(); Pop(2)

0x12ac: PushEmpty(float, float)
0x12ad: @ GetGameTime(Stack[-1])
0x12ae: Pop(0)
0x12af: Push((int) 1)
0x12b0: PushEmpty(int)
0x12b1: Push((int) 24)
0x12b2: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x12b3: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x12b4: Return(); Pop(2)

0x12b5: PushEmpty()
0x12b6: PushEmpty(int)
0x12b7: Call 0x12ac

0x12b8: Pop(0)
0x12b9: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x12ba: Return(); Pop(0)

0x12bb: PushEmpty(bool, bool)
0x12bc: PushEmpty(string)
0x12bd: Stack[-1] = "No"
0x12be: Call 0x127f

0x12bf: Pop(1)
0x12c0: @ lshWaitForAnimEnd(Stack[-1])
0x12c1: Pop(0)
0x12c2: Stack[-3] = Stack[-1]
0x12c3: Return(); Pop(2)

0x12c4: Stack[-1] = (int) 2868
0x12c5: Return(); Pop(0)

0x12c6: Stack[-1] = "ui/NPC_Maria.png"
0x12c7: Return(); Pop(0)

0x12c8: Stack[-1] = (bool) 1
0x12c9: Return(); Pop(0)

0x12ca: PushEmpty()
0x12cb: Push("ood1Maria1")
0x12cc: Push((int) 1)
0x12cd: @ SetVariable(Stack[-2], Stack[-1])
0x12ce: Pop(2)
0x12cf: Return(); Pop(0)

0x12d0: PushEmpty()
0x12d1: Push("ood1Maria2")
0x12d2: Push((int) 1)
0x12d3: @ SetVariable(Stack[-2], Stack[-1])
0x12d4: Pop(2)
0x12d5: Return(); Pop(0)

0x12d6: PushEmpty()
0x12d7: Push("ood1Maria3")
0x12d8: Push((int) 1)
0x12d9: @ SetVariable(Stack[-2], Stack[-1])
0x12da: Pop(2)
0x12db: Return(); Pop(0)

0x12dc: PushEmpty()
0x12dd: Push("ood1Maria4")
0x12de: Push((int) 1)
0x12df: @ SetVariable(Stack[-2], Stack[-1])
0x12e0: Pop(2)
0x12e1: Return(); Pop(0)

0x12e2: PushEmpty()
0x12e3: Push("money500 is given")
0x12e4: @ Trace(Stack[-1])
0x12e5: Pop(1)
0x12e6: PushEmpty(object, string, int)
0x12e7: Stack[-3] = Stack[-5]
0x12e8: Stack[-2] = "money"
0x12e9: Stack[-1] = (int) 500
0x12ea: Call 0x122b

0x12eb: Pop(3)
0x12ec: Return(); Pop(0)

0x12ed: PushEmpty()
0x12ee: Push("playsound")
0x12ef: Push("givemoney")
0x12f0: @ TriggerWorld(Stack[-2], Stack[-1])
0x12f1: Pop(2)
0x12f2: Return(); Pop(0)

0x12f3: PushEmpty()
0x12f4: Push("ood2Maria1")
0x12f5: Push((int) 1)
0x12f6: @ SetVariable(Stack[-2], Stack[-1])
0x12f7: Pop(2)
0x12f8: Return(); Pop(0)

0x12f9: PushEmpty()
0x12fa: Push("ood2Maria2")
0x12fb: Push((int) 1)
0x12fc: @ SetVariable(Stack[-2], Stack[-1])
0x12fd: Pop(2)
0x12fe: Return(); Pop(0)

0x12ff: PushEmpty(object, object)
0x1300: Push("d2q02")
0x1301: Push((int) 4)
0x1302: @ SetVariable(Stack[-2], Stack[-1])
0x1303: Pop(2)
0x1304: PushEmpty(object)
0x1305: Call 0x154d

0x1306: Stack[-2] = Stack[-1]
0x1307: Pop(1)
0x1308: Push("d2q02MariaGotoPetr")
0x1309: Push("pt_map_petr")
0x130a: Push((int) 0)
0x130b: Push((int) 15275)
0x130c: PushEmpty(float)
0x130d: Call 0x12a7

0x130e: Pop(0)
0x130f: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1310: Pop(5)
0x1311: PushEmpty()
0x1312: Call 0x156f

0x1313: Pop(0)
0x1314: Return(); Pop(2)

0x1315: Stack[-1] = 0
0x1316: PushEmpty()
0x1317: Push("d2q03MariaGotoViktor")
0x1318: Push((int) 1)
0x1319: @ SetVariable(Stack[-2], Stack[-1])
0x131a: Pop(2)
0x131b: Return(); Pop(0)

0x131c: PushEmpty()
0x131d: Push("KnowViktor")
0x131e: Push((int) 1)
0x131f: @ SetVariable(Stack[-2], Stack[-1])
0x1320: Pop(2)
0x1321: Return(); Pop(0)

0x1322: PushEmpty()
0x1323: Push("ood6Maria1")
0x1324: Push((int) 1)
0x1325: @ SetVariable(Stack[-2], Stack[-1])
0x1326: Pop(2)
0x1327: Return(); Pop(0)

0x1328: PushEmpty()
0x1329: Push("ood6Maria2")
0x132a: Push((int) 1)
0x132b: @ SetVariable(Stack[-2], Stack[-1])
0x132c: Pop(2)
0x132d: Return(); Pop(0)

0x132e: PushEmpty()
0x132f: Push("ood8Maria1")
0x1330: Push((int) 1)
0x1331: @ SetVariable(Stack[-2], Stack[-1])
0x1332: Pop(2)
0x1333: Return(); Pop(0)

0x1334: PushEmpty()
0x1335: Push("KnowMaria")
0x1336: Push((int) 1)
0x1337: @ SetVariable(Stack[-2], Stack[-1])
0x1338: Pop(2)
0x1339: Return(); Pop(0)

0x133a: PushEmpty()
0x133b: Push("ood11Maria1")
0x133c: Push((int) 1)
0x133d: @ SetVariable(Stack[-2], Stack[-1])
0x133e: Pop(2)
0x133f: Return(); Pop(0)

0x1340: PushEmpty()
0x1341: Push("ood11Maria2")
0x1342: Push((int) 1)
0x1343: @ SetVariable(Stack[-2], Stack[-1])
0x1344: Pop(2)
0x1345: Return(); Pop(0)

0x1346: PushEmpty()
0x1347: Push("ood11Maria3")
0x1348: Push((int) 1)
0x1349: @ SetVariable(Stack[-2], Stack[-1])
0x134a: Pop(2)
0x134b: Return(); Pop(0)

0x134c: PushEmpty()
0x134d: Push("ood2Maria3")
0x134e: Push((int) 1)
0x134f: @ SetVariable(Stack[-2], Stack[-1])
0x1350: Pop(2)
0x1351: Return(); Pop(0)

0x1352: PushEmpty()
0x1353: Push("resque_list")
0x1354: Push((int) 1)
0x1355: @ SetVariable(Stack[-2], Stack[-1])
0x1356: Pop(2)
0x1357: PushEmpty()
0x1358: Call 0x158b

0x1359: Pop(0)
0x135a: Return(); Pop(0)

0x135b: PushEmpty()
0x135c: Push((int) 2000)
0x135d: @@ SetReturnValue(Stack[-1])
0x135e: Pop(1)
0x135f: Return(); Pop(0)

0x1360: PushEmpty()
0x1361: Push("ood1Maria5")
0x1362: Push((int) 1)
0x1363: @ SetVariable(Stack[-2], Stack[-1])
0x1364: Pop(2)
0x1365: Return(); Pop(0)

0x1366: PushEmpty()
0x1367: Push("ood1Maria6")
0x1368: Push((int) 1)
0x1369: @ SetVariable(Stack[-2], Stack[-1])
0x136a: Pop(2)
0x136b: Return(); Pop(0)

0x136c: PushEmpty()
0x136d: Push("ood1Maria7")
0x136e: Push((int) 1)
0x136f: @ SetVariable(Stack[-2], Stack[-1])
0x1370: Pop(2)
0x1371: Return(); Pop(0)

0x1372: PushEmpty()
0x1373: Push("ood1Maria8")
0x1374: Push((int) 1)
0x1375: @ SetVariable(Stack[-2], Stack[-1])
0x1376: Pop(2)
0x1377: Return(); Pop(0)

0x1378: PushEmpty()
0x1379: Push("d6MariaVisit")
0x137a: Push((int) 1)
0x137b: @ SetVariable(Stack[-2], Stack[-1])
0x137c: Pop(2)
0x137d: Return(); Pop(0)

0x137e: PushEmpty()
0x137f: Push("ood10Maria1")
0x1380: Push((int) 1)
0x1381: @ SetVariable(Stack[-2], Stack[-1])
0x1382: Pop(2)
0x1383: Return(); Pop(0)

0x1384: PushEmpty()
0x1385: Push("d10q01MariaSavePetr")
0x1386: Push((int) 1)
0x1387: @ SetVariable(Stack[-2], Stack[-1])
0x1388: Pop(2)
0x1389: Return(); Pop(0)

0x138a: PushEmpty()
0x138b: PushEmpty(int, string)
0x138c: Stack[-1] = "ood1Maria1"
0x138d: Call 0x12a2

0x138e: Pop(1)
0x138f: Push((int) 0)
0x1390: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1391: IF (Stack[-1] == 0) GOTO 0x1394; Pop(1)

0x1392: Stack[-2] = (bool) 1
0x1393: Return(); Pop(0)

0x1394: Stack[-2] = (bool) 0
0x1395: Return(); Pop(0)

0x1396: PushEmpty()
0x1397: PushEmpty(int, string)
0x1398: Stack[-1] = "ood1Maria2"
0x1399: Call 0x12a2

0x139a: Pop(1)
0x139b: Push((int) 0)
0x139c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x139d: IF (Stack[-1] == 0) GOTO 0x13a0; Pop(1)

0x139e: Stack[-2] = (bool) 1
0x139f: Return(); Pop(0)

0x13a0: Stack[-2] = (bool) 0
0x13a1: Return(); Pop(0)

0x13a2: PushEmpty()
0x13a3: PushEmpty(int, string)
0x13a4: Stack[-1] = "ood1Maria3"
0x13a5: Call 0x12a2

0x13a6: Pop(1)
0x13a7: Push((int) 0)
0x13a8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13a9: IF (Stack[-1] == 0) GOTO 0x13ac; Pop(1)

0x13aa: Stack[-2] = (bool) 1
0x13ab: Return(); Pop(0)

0x13ac: Stack[-2] = (bool) 0
0x13ad: Return(); Pop(0)

0x13ae: PushEmpty()
0x13af: PushEmpty(int, string)
0x13b0: Stack[-1] = "ood1Maria4"
0x13b1: Call 0x12a2

0x13b2: Pop(1)
0x13b3: Push((int) 0)
0x13b4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13b5: IF (Stack[-1] == 0) GOTO 0x13b8; Pop(1)

0x13b6: Stack[-2] = (bool) 1
0x13b7: Return(); Pop(0)

0x13b8: Stack[-2] = (bool) 0
0x13b9: Return(); Pop(0)

0x13ba: PushEmpty()
0x13bb: PushEmpty(int, string)
0x13bc: Stack[-1] = "d1q01FirstGeorgVisit"
0x13bd: Call 0x12a2

0x13be: Pop(1)
0x13bf: Push((int) 1)
0x13c0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13c1: IF (Stack[-1] == 0) GOTO 0x13c4; Pop(1)

0x13c2: Stack[-2] = (bool) 1
0x13c3: Return(); Pop(0)

0x13c4: Stack[-2] = (bool) 0
0x13c5: Return(); Pop(0)

0x13c6: PushEmpty()
0x13c7: PushEmpty(int, string)
0x13c8: Stack[-1] = "ood2Maria1"
0x13c9: Call 0x12a2

0x13ca: Pop(1)
0x13cb: Push((int) 0)
0x13cc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13cd: IF (Stack[-1] == 0) GOTO 0x13d0; Pop(1)

0x13ce: Stack[-2] = (bool) 1
0x13cf: Return(); Pop(0)

0x13d0: Stack[-2] = (bool) 0
0x13d1: Return(); Pop(0)

0x13d2: PushEmpty()
0x13d3: PushEmpty(int, string)
0x13d4: Stack[-1] = "ood2Maria2"
0x13d5: Call 0x12a2

0x13d6: Pop(1)
0x13d7: Push((int) 0)
0x13d8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13d9: IF (Stack[-1] == 0) GOTO 0x13dc; Pop(1)

0x13da: Stack[-2] = (bool) 1
0x13db: Return(); Pop(0)

0x13dc: Stack[-2] = (bool) 0
0x13dd: Return(); Pop(0)

0x13de: PushEmpty()
0x13df: PushEmpty(int, string)
0x13e0: Stack[-1] = "d2q02"
0x13e1: Call 0x12a2

0x13e2: Pop(1)
0x13e3: Push((int) 3)
0x13e4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13e5: IF (Stack[-1] == 0) GOTO 0x13e8; Pop(1)

0x13e6: Stack[-2] = (bool) 1
0x13e7: Return(); Pop(0)

0x13e8: Stack[-2] = (bool) 0
0x13e9: Return(); Pop(0)

0x13ea: PushEmpty()
0x13eb: PushEmpty(bool, object)
0x13ec: Stack[-1] = Stack[-3]
0x13ed: Call 0x1520

0x13ee: Pop(1)
0x13ef: IF (Stack[-1] == 0) GOTO 0x13f2; Pop(1)

0x13f0: Stack[-2] = (bool) 1
0x13f1: Return(); Pop(0)

0x13f2: Stack[-2] = (bool) 0
0x13f3: Return(); Pop(0)

0x13f4: PushEmpty()
0x13f5: PushEmpty(int, string)
0x13f6: Stack[-1] = "d2q01"
0x13f7: Call 0x12a2

0x13f8: Pop(1)
0x13f9: Push((int) 1000)
0x13fa: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13fb: IF (Stack[-1] == 0) GOTO 0x13fe; Pop(1)

0x13fc: Stack[-2] = (bool) 1
0x13fd: Return(); Pop(0)

0x13fe: Stack[-2] = (bool) 0
0x13ff: Return(); Pop(0)

0x1400: PushEmpty()
0x1401: PushEmpty(int, string)
0x1402: Stack[-1] = "d2q03"
0x1403: Call 0x12a2

0x1404: Pop(1)
0x1405: Push((int) 1)
0x1406: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1407: IF (Stack[-1] == 0) GOTO 0x140a; Pop(1)

0x1408: Stack[-2] = (bool) 1
0x1409: Return(); Pop(0)

0x140a: Stack[-2] = (bool) 0
0x140b: Return(); Pop(0)

0x140c: PushEmpty()
0x140d: PushEmpty(int, string)
0x140e: Stack[-1] = "KnowMark"
0x140f: Call 0x12a2

0x1410: Pop(1)
0x1411: Push((int) 1)
0x1412: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1413: IF (Stack[-1] == 0) GOTO 0x1416; Pop(1)

0x1414: Stack[-2] = (bool) 1
0x1415: Return(); Pop(0)

0x1416: Stack[-2] = (bool) 0
0x1417: Return(); Pop(0)

0x1418: PushEmpty()
0x1419: PushEmpty(int, string)
0x141a: Stack[-1] = "d6q01"
0x141b: Call 0x12a2

0x141c: Pop(1)
0x141d: Push((int) 0)
0x141e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x141f: IF (Stack[-1] == 0) GOTO 0x1422; Pop(1)

0x1420: Stack[-2] = (bool) 1
0x1421: Return(); Pop(0)

0x1422: Stack[-2] = (bool) 0
0x1423: Return(); Pop(0)

0x1424: PushEmpty()
0x1425: PushEmpty(int, string)
0x1426: Stack[-1] = "ood6Maria1"
0x1427: Call 0x12a2

0x1428: Pop(1)
0x1429: Push((int) 0)
0x142a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x142b: IF (Stack[-1] == 0) GOTO 0x142e; Pop(1)

0x142c: Stack[-2] = (bool) 1
0x142d: Return(); Pop(0)

0x142e: Stack[-2] = (bool) 0
0x142f: Return(); Pop(0)

0x1430: PushEmpty()
0x1431: PushEmpty(int, string)
0x1432: Stack[-1] = "ood6Maria2"
0x1433: Call 0x12a2

0x1434: Pop(1)
0x1435: Push((int) 0)
0x1436: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1437: IF (Stack[-1] == 0) GOTO 0x143a; Pop(1)

0x1438: Stack[-2] = (bool) 1
0x1439: Return(); Pop(0)

0x143a: Stack[-2] = (bool) 0
0x143b: Return(); Pop(0)

0x143c: PushEmpty()
0x143d: PushEmpty(int, string)
0x143e: Stack[-1] = "ood8Maria1"
0x143f: Call 0x12a2

0x1440: Pop(1)
0x1441: Push((int) 0)
0x1442: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1443: IF (Stack[-1] == 0) GOTO 0x1446; Pop(1)

0x1444: Stack[-2] = (bool) 1
0x1445: Return(); Pop(0)

0x1446: Stack[-2] = (bool) 0
0x1447: Return(); Pop(0)

0x1448: PushEmpty()
0x1449: PushEmpty(int, string)
0x144a: Stack[-1] = "KnowGeorg"
0x144b: Call 0x12a2

0x144c: Pop(1)
0x144d: Push((int) 1)
0x144e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x144f: IF (Stack[-1] == 0) GOTO 0x1452; Pop(1)

0x1450: Stack[-2] = (bool) 1
0x1451: Return(); Pop(0)

0x1452: Stack[-2] = (bool) 0
0x1453: Return(); Pop(0)

0x1454: PushEmpty()
0x1455: PushEmpty(int, string)
0x1456: Stack[-1] = "d11q01"
0x1457: Call 0x12a2

0x1458: Pop(1)
0x1459: Push((int) 1)
0x145a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x145b: IF (Stack[-1] == 0) GOTO 0x145e; Pop(1)

0x145c: Stack[-2] = (bool) 1
0x145d: Return(); Pop(0)

0x145e: Stack[-2] = (bool) 0
0x145f: Return(); Pop(0)

0x1460: PushEmpty()
0x1461: PushEmpty(int, string)
0x1462: Stack[-1] = "ood11Maria1"
0x1463: Call 0x12a2

0x1464: Pop(1)
0x1465: Push((int) 0)
0x1466: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1467: IF (Stack[-1] == 0) GOTO 0x146a; Pop(1)

0x1468: Stack[-2] = (bool) 1
0x1469: Return(); Pop(0)

0x146a: Stack[-2] = (bool) 0
0x146b: Return(); Pop(0)

0x146c: PushEmpty()
0x146d: PushEmpty(int, string)
0x146e: Stack[-1] = "ood11Maria2"
0x146f: Call 0x12a2

0x1470: Pop(1)
0x1471: Push((int) 0)
0x1472: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1473: IF (Stack[-1] == 0) GOTO 0x1476; Pop(1)

0x1474: Stack[-2] = (bool) 1
0x1475: Return(); Pop(0)

0x1476: Stack[-2] = (bool) 0
0x1477: Return(); Pop(0)

0x1478: PushEmpty()
0x1479: PushEmpty(int, string)
0x147a: Stack[-1] = "d11q01"
0x147b: Call 0x12a2

0x147c: Pop(1)
0x147d: Push((int) 4)
0x147e: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x147f: IF (Stack[-1] == 0) GOTO 0x1482; Pop(1)

0x1480: Stack[-2] = (bool) 1
0x1481: Return(); Pop(0)

0x1482: Stack[-2] = (bool) 0
0x1483: Return(); Pop(0)

0x1484: PushEmpty()
0x1485: PushEmpty(int, string)
0x1486: Stack[-1] = "d11q01"
0x1487: Call 0x12a2

0x1488: Pop(1)
0x1489: Push((int) 1000)
0x148a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x148b: IF (Stack[-1] == 0) GOTO 0x148e; Pop(1)

0x148c: Stack[-2] = (bool) 1
0x148d: Return(); Pop(0)

0x148e: Stack[-2] = (bool) 0
0x148f: Return(); Pop(0)

0x1490: PushEmpty()
0x1491: PushEmpty(int, string)
0x1492: Stack[-1] = "ood11Maria3"
0x1493: Call 0x12a2

0x1494: Pop(1)
0x1495: Push((int) 0)
0x1496: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1497: IF (Stack[-1] == 0) GOTO 0x149a; Pop(1)

0x1498: Stack[-2] = (bool) 1
0x1499: Return(); Pop(0)

0x149a: Stack[-2] = (bool) 0
0x149b: Return(); Pop(0)

0x149c: PushEmpty()
0x149d: PushEmpty(int, string)
0x149e: Stack[-1] = "ood2Maria3"
0x149f: Call 0x12a2

0x14a0: Pop(1)
0x14a1: Push((int) 0)
0x14a2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14a3: IF (Stack[-1] == 0) GOTO 0x14a6; Pop(1)

0x14a4: Stack[-2] = (bool) 1
0x14a5: Return(); Pop(0)

0x14a6: Stack[-2] = (bool) 0
0x14a7: Return(); Pop(0)

0x14a8: PushEmpty()
0x14a9: PushEmpty(int, string)
0x14aa: Stack[-1] = "KnowKaterina"
0x14ab: Call 0x12a2

0x14ac: Pop(1)
0x14ad: Push((int) 1)
0x14ae: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14af: IF (Stack[-1] == 0) GOTO 0x14b2; Pop(1)

0x14b0: Stack[-2] = (bool) 1
0x14b1: Return(); Pop(0)

0x14b2: Stack[-2] = (bool) 0
0x14b3: Return(); Pop(0)

0x14b4: PushEmpty()
0x14b5: PushEmpty(int, string)
0x14b6: Stack[-1] = "ood1Maria5"
0x14b7: Call 0x12a2

0x14b8: Pop(1)
0x14b9: Push((int) 0)
0x14ba: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14bb: IF (Stack[-1] == 0) GOTO 0x14be; Pop(1)

0x14bc: Stack[-2] = (bool) 1
0x14bd: Return(); Pop(0)

0x14be: Stack[-2] = (bool) 0
0x14bf: Return(); Pop(0)

0x14c0: PushEmpty()
0x14c1: PushEmpty(int, string)
0x14c2: Stack[-1] = "ood1Maria6"
0x14c3: Call 0x12a2

0x14c4: Pop(1)
0x14c5: Push((int) 0)
0x14c6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14c7: IF (Stack[-1] == 0) GOTO 0x14ca; Pop(1)

0x14c8: Stack[-2] = (bool) 1
0x14c9: Return(); Pop(0)

0x14ca: Stack[-2] = (bool) 0
0x14cb: Return(); Pop(0)

0x14cc: PushEmpty()
0x14cd: PushEmpty(int, string)
0x14ce: Stack[-1] = "ood1Maria7"
0x14cf: Call 0x12a2

0x14d0: Pop(1)
0x14d1: Push((int) 0)
0x14d2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14d3: IF (Stack[-1] == 0) GOTO 0x14d6; Pop(1)

0x14d4: Stack[-2] = (bool) 1
0x14d5: Return(); Pop(0)

0x14d6: Stack[-2] = (bool) 0
0x14d7: Return(); Pop(0)

0x14d8: PushEmpty()
0x14d9: PushEmpty(int, string)
0x14da: Stack[-1] = "ood1Maria8"
0x14db: Call 0x12a2

0x14dc: Pop(1)
0x14dd: Push((int) 0)
0x14de: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14df: IF (Stack[-1] == 0) GOTO 0x14e2; Pop(1)

0x14e0: Stack[-2] = (bool) 1
0x14e1: Return(); Pop(0)

0x14e2: Stack[-2] = (bool) 0
0x14e3: Return(); Pop(0)

0x14e4: PushEmpty()
0x14e5: PushEmpty(int, string)
0x14e6: Stack[-1] = "d10q01"
0x14e7: Call 0x12a2

0x14e8: Pop(1)
0x14e9: Push((int) 0)
0x14ea: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14eb: IF (Stack[-1] == 0) GOTO 0x14ee; Pop(1)

0x14ec: Stack[-2] = (bool) 1
0x14ed: Return(); Pop(0)

0x14ee: Stack[-2] = (bool) 0
0x14ef: Return(); Pop(0)

0x14f0: PushEmpty()
0x14f1: PushEmpty(int, string)
0x14f2: Stack[-1] = "d10q01"
0x14f3: Call 0x12a2

0x14f4: Pop(1)
0x14f5: Push((int) 1000)
0x14f6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14f7: IF (Stack[-1] == 0) GOTO 0x14fa; Pop(1)

0x14f8: Stack[-2] = (bool) 1
0x14f9: Return(); Pop(0)

0x14fa: Stack[-2] = (bool) 0
0x14fb: Return(); Pop(0)

0x14fc: PushEmpty()
0x14fd: PushEmpty(int, string)
0x14fe: Stack[-1] = "ood10Maria1"
0x14ff: Call 0x12a2

0x1500: Pop(1)
0x1501: Push((int) 0)
0x1502: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1503: IF (Stack[-1] == 0) GOTO 0x1506; Pop(1)

0x1504: Stack[-2] = (bool) 1
0x1505: Return(); Pop(0)

0x1506: Stack[-2] = (bool) 0
0x1507: Return(); Pop(0)

0x1508: PushEmpty()
0x1509: PushEmpty(int, string)
0x150a: Stack[-1] = "KnowKapella"
0x150b: Call 0x12a2

0x150c: Pop(1)
0x150d: Push((int) 1)
0x150e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x150f: IF (Stack[-1] == 0) GOTO 0x1512; Pop(1)

0x1510: Stack[-2] = (bool) 1
0x1511: Return(); Pop(0)

0x1512: Stack[-2] = (bool) 0
0x1513: Return(); Pop(0)

0x1514: PushEmpty()
0x1515: PushEmpty(int, string)
0x1516: Stack[-1] = "KnowStamatins"
0x1517: Call 0x12a2

0x1518: Pop(1)
0x1519: Push((int) 1)
0x151a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x151b: IF (Stack[-1] == 0) GOTO 0x151e; Pop(1)

0x151c: Stack[-2] = (bool) 1
0x151d: Return(); Pop(0)

0x151e: Stack[-2] = (bool) 0
0x151f: Return(); Pop(0)

0x1520: PushEmpty()
0x1521: Stack[-2] = (bool) 0
0x1522: Return(); Pop(0)

0x1523: PushEmpty(object, object)
0x1524: @ GetDiaryRoot(Stack[-1])
0x1525: Pop(0)
0x1526: Pop(0); Push((bool) Stack[-1] == 0)
0x1527: IF (Stack[-1] == 0) GOTO 0x152d; Pop(1)

0x1528: Push("Can't retrieve diary root")
0x1529: @ Trace(Stack[-1])
0x152a: Pop(1)
0x152b: Stack[-3] = (bool) 0
0x152c: Return(); Pop(2)

0x152d: Stack[-3] = Stack[-1]
0x152e: Return(); Pop(2)

0x152f: Stack[-1] = 0
0x1530: PushEmpty(object, object, int, object, object, int)
0x1531: PushEmpty(object)
0x1532: Call 0x1523

0x1533: Stack[-4] = Stack[-1]
0x1534: Pop(1)
0x1535: @@ Find(Stack[-7], Stack[-2])
0x1536: Pop(0)
0x1537: Pop(0); Push((bool) Stack[-2] == 0)
0x1538: IF (Stack[-1] == 0) GOTO 0x153f; Pop(1)

0x1539: Push("Can't find diary parent with id: ")
0x153a: Pop(1); Push(Stack[-1] + Stack[-8]);
0x153b: @ Trace(Stack[-1])
0x153c: Pop(1)
0x153d: Stack[-9] = (bool) 0
0x153e: Return(); Pop(6)

0x153f: @@ AddChild(Stack[-8])
0x1540: Pop(0)
0x1541: Push("player_diary")
0x1542: Push((int) 1)
0x1543: @ SetVariable(Stack[-2], Stack[-1])
0x1544: Pop(2)
0x1545: @@ GetCategory(Stack[-1])
0x1546: Pop(0)
0x1547: @ SetDiarySection(Stack[-1])
0x1548: Pop(0)
0x1549: Stack[-9] = (bool) 0
0x154a: Return(); Pop(6)

0x154b: Stack[-2] = 0
0x154c: Stack[-3] = 0
0x154d: PushEmpty(object, object, object, object)
0x154e: @ GetMainOutdoorScene(Stack[-2])
0x154f: Pop(0)
0x1550: Pop(0); Push((bool) Stack[-2] == 0)
0x1551: IF (Stack[-1] == 0) GOTO 0x1558; Pop(1)

0x1552: Push("Can't find main outdoor scene")
0x1553: @ Trace(Stack[-1])
0x1554: Pop(1)
0x1555: Stack[-1] = 0
0x1556: Stack[-5] = Stack[-1]
0x1557: Return(); Pop(4)

0x1558: @@ GetMap(Stack[-1])
0x1559: Pop(0)
0x155a: Stack[-5] = Stack[-1]
0x155b: Return(); Pop(4)

0x155c: Stack[-1] = 0
0x155d: Stack[-2] = 0
0x155e: PushEmpty(int, int)
0x155f: Push("player")
0x1560: @ GetVariable(Stack[-1], Stack[-2])
0x1561: Pop(1)
0x1562: Push((int) 0)
0x1563: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1564: IF (Stack[-1] == 0) GOTO 0x1568; Pop(1)

0x1565: Stack[-3] = (int) 200001
0x1566: Return(); Pop(2)

0x1567: GOTO 0x156d

0x1568: Push((int) 1)
0x1569: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x156a: IF (Stack[-1] == 0) GOTO 0x156d; Pop(1)

0x156b: Stack[-3] = (int) 200002
0x156c: Return(); Pop(2)

0x156d: Stack[-3] = (int) 200003
0x156e: Return(); Pop(2)

0x156f: PushEmpty(object, object)
0x1570: Push("Adding diary entry")
0x1571: @ Trace(Stack[-1])
0x1572: Pop(1)
0x1573: Push((int) 134)
0x1574: Push((int) 2)
0x1575: Push((int) 15285)
0x1576: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1577: Pop(3)
0x1578: PushEmpty(bool, object, int)
0x1579: Stack[-2] = Stack[-4]
0x157a: Stack[-1] = (int) 11
0x157b: Call 0x1530

0x157c: Pop(3)
0x157d: Return(); Pop(2)

0x157e: Stack[-1] = 0
0x157f: PushEmpty(int, int)
0x1580: Push("vol_")
0x1581: Pop(1); Push(Stack[-1] + Stack[-4]);
0x1582: @ GetVariable(Stack[-1], Stack[-2])
0x1583: Pop(1)
0x1584: Push("vol_")
0x1585: Pop(1); Push(Stack[-1] + Stack[-4]);
0x1586: Push((int) 8)
0x1587: Pop(1); Push(Stack[-3] | Stack[-1]);
0x1588: @ SetVariable(Stack[-2], Stack[-1])
0x1589: Pop(2)
0x158a: Return(); Pop(2)

0x158b: PushEmpty(int, int, int, int)
0x158c: Stack[-2] = (int) 0
0x158d: Push((int) 3)
0x158e: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x158f: IF (Stack[-1] == 0) GOTO 0x15fd; Pop(1)

0x1590: Push((int) 13)
0x1591: @ irand(Stack[-2], Stack[-1])
0x1592: Pop(1)
0x1593: Push((int) 0)
0x1594: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1595: IF (Stack[-1] == 0) GOTO 0x159b; Pop(1)

0x1596: PushEmpty(int)
0x1597: Stack[-1] = (int) 11
0x1598: Call 0x157f

0x1599: Pop(1)
0x159a: GOTO 0x15fa

0x159b: Push((int) 1)
0x159c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x159d: IF (Stack[-1] == 0) GOTO 0x15a3; Pop(1)

0x159e: PushEmpty(int)
0x159f: Stack[-1] = (int) 18
0x15a0: Call 0x157f

0x15a1: Pop(1)
0x15a2: GOTO 0x15fa

0x15a3: Push((int) 2)
0x15a4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15a5: IF (Stack[-1] == 0) GOTO 0x15ab; Pop(1)

0x15a6: PushEmpty(int)
0x15a7: Stack[-1] = (int) 21
0x15a8: Call 0x157f

0x15a9: Pop(1)
0x15aa: GOTO 0x15fa

0x15ab: Push((int) 3)
0x15ac: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15ad: IF (Stack[-1] == 0) GOTO 0x15b3; Pop(1)

0x15ae: PushEmpty(int)
0x15af: Stack[-1] = (int) 2
0x15b0: Call 0x157f

0x15b1: Pop(1)
0x15b2: GOTO 0x15fa

0x15b3: Push((int) 4)
0x15b4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15b5: IF (Stack[-1] == 0) GOTO 0x15bb; Pop(1)

0x15b6: PushEmpty(int)
0x15b7: Stack[-1] = (int) 9
0x15b8: Call 0x157f

0x15b9: Pop(1)
0x15ba: GOTO 0x15fa

0x15bb: Push((int) 5)
0x15bc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15bd: IF (Stack[-1] == 0) GOTO 0x15c3; Pop(1)

0x15be: PushEmpty(int)
0x15bf: Stack[-1] = (int) 13
0x15c0: Call 0x157f

0x15c1: Pop(1)
0x15c2: GOTO 0x15fa

0x15c3: Push((int) 6)
0x15c4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15c5: IF (Stack[-1] == 0) GOTO 0x15cb; Pop(1)

0x15c6: PushEmpty(int)
0x15c7: Stack[-1] = (int) 24
0x15c8: Call 0x157f

0x15c9: Pop(1)
0x15ca: GOTO 0x15fa

0x15cb: Push((int) 7)
0x15cc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15cd: IF (Stack[-1] == 0) GOTO 0x15d3; Pop(1)

0x15ce: PushEmpty(int)
0x15cf: Stack[-1] = (int) 10
0x15d0: Call 0x157f

0x15d1: Pop(1)
0x15d2: GOTO 0x15fa

0x15d3: Push((int) 8)
0x15d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15d5: IF (Stack[-1] == 0) GOTO 0x15db; Pop(1)

0x15d6: PushEmpty(int)
0x15d7: Stack[-1] = (int) 20
0x15d8: Call 0x157f

0x15d9: Pop(1)
0x15da: GOTO 0x15fa

0x15db: Push((int) 9)
0x15dc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15dd: IF (Stack[-1] == 0) GOTO 0x15e3; Pop(1)

0x15de: PushEmpty(int)
0x15df: Stack[-1] = (int) 21
0x15e0: Call 0x157f

0x15e1: Pop(1)
0x15e2: GOTO 0x15fa

0x15e3: Push((int) 10)
0x15e4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15e5: IF (Stack[-1] == 0) GOTO 0x15eb; Pop(1)

0x15e6: PushEmpty(int)
0x15e7: Stack[-1] = (int) 3
0x15e8: Call 0x157f

0x15e9: Pop(1)
0x15ea: GOTO 0x15fa

0x15eb: Push((int) 11)
0x15ec: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15ed: IF (Stack[-1] == 0) GOTO 0x15f3; Pop(1)

0x15ee: PushEmpty(int)
0x15ef: Stack[-1] = (int) 19
0x15f0: Call 0x157f

0x15f1: Pop(1)
0x15f2: GOTO 0x15fa

0x15f3: Push((int) 12)
0x15f4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15f5: IF (Stack[-1] == 0) GOTO 0x15fa; Pop(1)

0x15f6: PushEmpty(int)
0x15f7: Stack[-1] = (int) 26
0x15f8: Call 0x157f

0x15f9: Pop(1)
0x15fa: Push((int) 1)
0x15fb: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x15fc: GOTO 0x158d

0x15fd: Return(); Pop(4)

0x15fe: Push(GlobalVars[1])
0x15ff: Stack[-1] = (bool) 0
0x1600: GlobalVars[1] = Stack[-1]; Pop(1)
0x1601: Return(); Pop(0)

0x1602: PushEmpty()
0x1603: Push(GlobalVars[1])
0x1604: Pop(1); Push((bool) Stack[-1] == 0)
0x1605: IF (Stack[-1] == 0) GOTO 0x160f; Pop(1)

0x1606: PushEmpty(int, object)
0x1607: Stack[-1] = Stack[-3]
0x1608: Push(-2, 1); TaskCall(2)
0x1609: Call 0x31

0x160a: Pop(-2, 1); TaskReturn
0x160b: Pop(2)
0x160c: Push(GlobalVars[1])
0x160d: Stack[-1] = (bool) 1
0x160e: GlobalVars[1] = Stack[-1]; Pop(1)
0x160f: PushEmpty(bool, int)
0x1610: Stack[-1] = (int) 1
0x1611: Call 0x12b5

0x1612: Pop(1)
0x1613: IF (Stack[-1] == 0) GOTO 0x161b; Pop(1)

0x1614: PushEmpty(int, object)
0x1615: Stack[-1] = Stack[-3]
0x1616: Push(-2, 1); TaskCall(6)
0x1617: Call 0x312

0x1618: Pop(-2, 1); TaskReturn
0x1619: Pop(2)
0x161a: Return(); Pop(0)

0x161b: PushEmpty(bool, int)
0x161c: Stack[-1] = (int) 2
0x161d: Call 0x12b5

0x161e: Pop(1)
0x161f: IF (Stack[-1] == 0) GOTO 0x162e; Pop(1)

0x1620: Push((int) 2000)
0x1621: PushEmpty(int, object)
0x1622: Stack[-1] = Stack[-4]
0x1623: Push(-2, 1); TaskCall(8)
0x1624: Call 0x937

0x1625: Pop(-2, 1); TaskReturn
0x1626: Pop(1)
0x1627: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1628: IF (Stack[-1] == 0) GOTO 0x162d; Pop(1)

0x1629: Push("people.xml")
0x162a: Push((bool) 1)
0x162b: @ ShowWindow(Stack[-2], Stack[-1])
0x162c: Pop(2)
0x162d: Return(); Pop(0)

0x162e: PushEmpty(bool, int)
0x162f: Stack[-1] = (int) 6
0x1630: Call 0x12b5

0x1631: Pop(1)
0x1632: IF (Stack[-1] == 0) GOTO 0x163a; Pop(1)

0x1633: PushEmpty(int, object)
0x1634: Stack[-1] = Stack[-3]
0x1635: Push(-2, 1); TaskCall(4)
0x1636: Call 0x159

0x1637: Pop(-2, 1); TaskReturn
0x1638: Pop(2)
0x1639: Return(); Pop(0)

0x163a: PushEmpty(bool, int)
0x163b: Stack[-1] = (int) 8
0x163c: Call 0x12b5

0x163d: Pop(1)
0x163e: IF (Stack[-1] == 0) GOTO 0x1646; Pop(1)

0x163f: PushEmpty(int, object)
0x1640: Stack[-1] = Stack[-3]
0x1641: Push(-2, 1); TaskCall(10)
0x1642: Call 0xc8b

0x1643: Pop(-2, 1); TaskReturn
0x1644: Pop(2)
0x1645: Return(); Pop(0)

0x1646: PushEmpty(bool, int)
0x1647: Stack[-1] = (int) 10
0x1648: Call 0x12b5

0x1649: Pop(1)
0x164a: IF (Stack[-1] == 0) GOTO 0x1652; Pop(1)

0x164b: PushEmpty(int, object)
0x164c: Stack[-1] = Stack[-3]
0x164d: Push(-2, 1); TaskCall(12)
0x164e: Call 0xe00

0x164f: Pop(-2, 1); TaskReturn
0x1650: Pop(2)
0x1651: Return(); Pop(0)

0x1652: PushEmpty(bool, int)
0x1653: Stack[-1] = (int) 11
0x1654: Call 0x12b5

0x1655: Pop(1)
0x1656: IF (Stack[-1] == 0) GOTO 0x165e; Pop(1)

0x1657: PushEmpty(int, object)
0x1658: Stack[-1] = Stack[-3]
0x1659: Push(-2, 1); TaskCall(14)
0x165a: Call 0xf5d

0x165b: Pop(-2, 1); TaskReturn
0x165c: Pop(2)
0x165d: Return(); Pop(0)

0x165e: PushEmpty(bool)
0x165f: Call 0x12bb

0x1660: Pop(1)
0x1661: Return(); Pop(0)


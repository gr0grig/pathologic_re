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
	GetPosition
	GetEyesHeight
	playing 
	start: 
	end: 
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	playsound
	giveitem
	dreport is given
	d7q01_dreport
	ood7DBirdmask1
	quest_d7_01
	kill_player
	d7q01
	GetItemCount
	bird_mask
	bird_balahon
	GetItem
	IsItemSelected
	ui/NPC_Black.png

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
	GetPosition (1 args)
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
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	FindActor (2 args)
	Trigger (2 args)
	TriggerWorld (2 args)
	SetVariable (2 args)
	GetInvItemByName (2 args)

RunOp = 0x2e4
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xe6 Vars = (int, int)
	GTASK_2  Params = 0
		EVENT_0 Op = 0x2e8 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: Stack[-1] = Stack[-11]
0x4: Call 0x2f0

0x5: Pop(1)
0x6: Pop(1); Push((bool) Stack[-1] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[-10] = (int) -2
0x9: Return(); Pop(8)

0xa: @ CreateDialog(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Call 0x414

0xe: Pop(0)
0xf: @@ SetNPCName(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(string)
0x12: Call 0x416

0x13: Pop(0)
0x14: @@ SetPhoto(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(int)
0x17: Call 0x403

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
0x36: Call 0x328

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
0x44: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0x45: PushEmpty(bool)
0x46: Stack[-1] = (bool) 0
0x47: PushEmpty(bool, object)
0x48: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x49: Call 0x3c4

0x4a: Pop(1)
0x4b: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x4c: PushEmpty(bool, object)
0x4d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4e: Call 0x3ae

0x4f: Pop(1)
0x50: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x51: Stack[-1] = (bool) 1
0x52: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x53: PushEmpty(string)
0x54: Stack[-1] = "Neutral"
0x55: Call 0xd6

0x56: Pop(1)
0x57: Push((int) 13261)
0x58: @@ SetMessage(Stack[-1])
0x59: Pop(1)
0x5a: @@ ClearReplies()
0x5b: Pop(0)
0x5c: Push((int) 13262)
0x5d: Push((int) 14492)
0x5e: Push((int) 14491)
0x5f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x60: Pop(3)
0x61: GOTO 0xb8

0x62: PushEmpty(bool)
0x63: Stack[-1] = (bool) 0
0x64: PushEmpty(bool, object)
0x65: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x66: Call 0x3a2

0x67: Pop(1)
0x68: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x69: PushEmpty(bool, object)
0x6a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6b: Call 0x3ba

0x6c: Pop(1)
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: Stack[-1] = (bool) 1
0x6f: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x70: PushEmpty(string)
0x71: Stack[-1] = "Neutral"
0x72: Call 0xd6

0x73: Pop(1)
0x74: Push((int) 13279)
0x75: @@ SetMessage(Stack[-1])
0x76: Pop(1)
0x77: @@ ClearReplies()
0x78: Pop(0)
0x79: PushEmpty(bool, object)
0x7a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b: Call 0x398

0x7c: Pop(1)
0x7d: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x7e: Push((int) 13280)
0x7f: Push((int) 14511)
0x80: Push((int) 14510)
0x81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82: Pop(3)
0x83: PushEmpty(bool, object)
0x84: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x85: Call 0x398

0x86: Pop(1)
0x87: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x88: Push((int) 13284)
0x89: Push((int) 14515)
0x8a: Push((int) 14514)
0x8b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c: Pop(3)
0x8d: PushEmpty(bool, object)
0x8e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8f: Call 0x398

0x90: Pop(1)
0x91: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x92: Push((int) 13288)
0x93: Push((int) 14511)
0x94: Push((int) 14518)
0x95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x96: Pop(3)
0x97: GOTO 0xb8

0x98: PushEmpty(bool, object)
0x99: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9a: Call 0x3a2

0x9b: Pop(1)
0x9c: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0x9d: PushEmpty(string)
0x9e: Stack[-1] = "Neutral"
0x9f: Call 0xd6

0xa0: Pop(1)
0xa1: Push((int) 13289)
0xa2: @@ SetMessage(Stack[-1])
0xa3: Pop(1)
0xa4: @@ ClearReplies()
0xa5: Pop(0)
0xa6: Push((int) 13290)
0xa7: Push((int) 14522)
0xa8: Push((int) 14521)
0xa9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa: Pop(3)
0xab: Push((int) 13304)
0xac: Push((int) 14538)
0xad: Push((int) 14535)
0xae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf: Pop(3)
0xb0: Push((int) 13305)
0xb1: Push((int) -1)
0xb2: Push((int) 14536)
0xb3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb4: Pop(3)
0xb5: GOTO 0xb8

0xb6: Return(); Pop(0)

0xb7: GOTO 0x43

0xb8: PushEmpty(bool)
0xb9: Call 0x418

0xba: Pop(0)
0xbb: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xbc: @ lshWaitForAnimEnd()
0xbd: Pop(0)
0xbe: Push( Stack[3 + Tasks[-1].StackPointer] )
0xbf: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xc0: GOTO 0xc6

0xc1: PushEmpty(string)
0xc2: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xc3: Call 0x32c

0xc4: Pop(1)
0xc5: GOTO 0xbc

0xc6: GOTO 0xd5

0xc7: Push("all")
0xc8: Push("idle")
0xc9: @ PlayAnimation(Stack[-2], Stack[-1])
0xca: Pop(2)
0xcb: @ WaitForAnimEnd()
0xcc: Pop(0)
0xcd: Push( Stack[3 + Tasks[-1].StackPointer] )
0xce: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xcf: GOTO 0xd5

0xd0: Push("all")
0xd1: Push("idle")
0xd2: @ PlayAnimation(Stack[-2], Stack[-1])
0xd3: Pop(2)
0xd4: GOTO 0xcb

0xd5: Return(); Pop(0)

0xd6: PushEmpty()
0xd7: PushEmpty(bool)
0xd8: Call 0x418

0xd9: Pop(0)
0xda: Pop(1); Push((bool) Stack[-1] == 0)
0xdb: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xdc: Return(); Pop(0)

0xdd: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xde: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xdf: Return(); Pop(0)

0xe0: PushEmpty(string)
0xe1: Stack[-1] = Stack[-2]
0xe2: Call 0x32c

0xe3: Pop(1)
0xe4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xe5: Return(); Pop(0)

0xe6: PushEmpty()
0xe7: Push((int) 1)
0xe8: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0xe9: PushEmpty()
0xea: Call 0x33e

0xeb: Pop(0)
0xec: Push((int) 14497)
0xed: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xee: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xef: PushEmpty(object, object)
0xf0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf2: Call 0x380

0xf3: Pop(2)
0xf4: PushEmpty(object, object)
0xf5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf7: Call 0x38b

0xf8: Pop(2)
0xf9: PushEmpty(object, object)
0xfa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfc: Call 0x37a

0xfd: Pop(2)
0xfe: Push((int) 14502)
0xff: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x100: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x101: PushEmpty(object, object)
0x102: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x103: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x104: Call 0x37a

0x105: Pop(2)
0x106: PushEmpty(object, object)
0x107: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x108: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x109: Call 0x38b

0x10a: Pop(2)
0x10b: PushEmpty(object, object)
0x10c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10e: Call 0x380

0x10f: Pop(2)
0x110: Push((int) 14513)
0x111: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x112: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x113: PushEmpty(object, object)
0x114: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x115: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x116: Call 0x391

0x117: Pop(2)
0x118: Push((int) 14517)
0x119: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11a: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x11b: PushEmpty(object, object)
0x11c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11e: Call 0x391

0x11f: Pop(2)
0x120: Push((int) 14539)
0x121: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x122: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x123: PushEmpty(object, object)
0x124: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x125: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x126: Call 0x391

0x127: Pop(2)
0x128: Push((int) 14490)
0x129: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12a: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x12b: PushEmpty(bool)
0x12c: Stack[-1] = (bool) 0
0x12d: PushEmpty(bool, object)
0x12e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12f: Call 0x3c4

0x130: Pop(1)
0x131: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x132: PushEmpty(bool, object)
0x133: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x134: Call 0x3ae

0x135: Pop(1)
0x136: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x137: Stack[-1] = (bool) 1
0x138: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x139: PushEmpty(string)
0x13a: Stack[-1] = "Neutral"
0x13b: Call 0xd6

0x13c: Pop(1)
0x13d: Push((int) 13261)
0x13e: @@ SetMessage(Stack[-1])
0x13f: Pop(1)
0x140: @@ ClearReplies()
0x141: Pop(0)
0x142: Push((int) 13262)
0x143: Push((int) 14492)
0x144: Push((int) 14491)
0x145: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x146: Pop(3)
0x147: Return(); Pop(0)

0x148: PushEmpty(bool)
0x149: Stack[-1] = (bool) 0
0x14a: PushEmpty(bool, object)
0x14b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14c: Call 0x3a2

0x14d: Pop(1)
0x14e: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x14f: PushEmpty(bool, object)
0x150: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x151: Call 0x3ba

0x152: Pop(1)
0x153: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x154: Stack[-1] = (bool) 1
0x155: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x156: PushEmpty(string)
0x157: Stack[-1] = "Neutral"
0x158: Call 0xd6

0x159: Pop(1)
0x15a: Push((int) 13279)
0x15b: @@ SetMessage(Stack[-1])
0x15c: Pop(1)
0x15d: @@ ClearReplies()
0x15e: Pop(0)
0x15f: PushEmpty(bool, object)
0x160: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x161: Call 0x398

0x162: Pop(1)
0x163: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x164: Push((int) 13280)
0x165: Push((int) 14511)
0x166: Push((int) 14510)
0x167: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x168: Pop(3)
0x169: PushEmpty(bool, object)
0x16a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16b: Call 0x398

0x16c: Pop(1)
0x16d: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x16e: Push((int) 13284)
0x16f: Push((int) 14515)
0x170: Push((int) 14514)
0x171: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x172: Pop(3)
0x173: PushEmpty(bool, object)
0x174: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x175: Call 0x398

0x176: Pop(1)
0x177: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x178: Push((int) 13288)
0x179: Push((int) 14511)
0x17a: Push((int) 14518)
0x17b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17c: Pop(3)
0x17d: Return(); Pop(0)

0x17e: PushEmpty(bool, object)
0x17f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x180: Call 0x3a2

0x181: Pop(1)
0x182: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x183: PushEmpty(string)
0x184: Stack[-1] = "Neutral"
0x185: Call 0xd6

0x186: Pop(1)
0x187: Push((int) 13289)
0x188: @@ SetMessage(Stack[-1])
0x189: Pop(1)
0x18a: @@ ClearReplies()
0x18b: Pop(0)
0x18c: Push((int) 13290)
0x18d: Push((int) 14522)
0x18e: Push((int) 14521)
0x18f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x190: Pop(3)
0x191: Push((int) 13304)
0x192: Push((int) 14538)
0x193: Push((int) 14535)
0x194: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x195: Pop(3)
0x196: Push((int) 13305)
0x197: Push((int) -1)
0x198: Push((int) 14536)
0x199: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19a: Pop(3)
0x19b: Return(); Pop(0)

0x19c: Push((int) 14522)
0x19d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19e: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x19f: PushEmpty(string)
0x1a0: Stack[-1] = "Neutral"
0x1a1: Call 0xd6

0x1a2: Pop(1)
0x1a3: Push((int) 13291)
0x1a4: @@ SetMessage(Stack[-1])
0x1a5: Pop(1)
0x1a6: @@ ClearReplies()
0x1a7: Pop(0)
0x1a8: Push((int) 13292)
0x1a9: Push((int) 14524)
0x1aa: Push((int) 14523)
0x1ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ac: Pop(3)
0x1ad: Push((int) 13296)
0x1ae: Push((int) 14528)
0x1af: Push((int) 14527)
0x1b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b1: Pop(3)
0x1b2: Push((int) 13300)
0x1b3: Push((int) 14532)
0x1b4: Push((int) 14531)
0x1b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b6: Pop(3)
0x1b7: Return(); Pop(0)

0x1b8: Push((int) 14532)
0x1b9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ba: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1bb: PushEmpty(string)
0x1bc: Stack[-1] = "Neutral"
0x1bd: Call 0xd6

0x1be: Pop(1)
0x1bf: Push((int) 13301)
0x1c0: @@ SetMessage(Stack[-1])
0x1c1: Pop(1)
0x1c2: @@ ClearReplies()
0x1c3: Pop(0)
0x1c4: Push((int) 13302)
0x1c5: Push((int) 14540)
0x1c6: Push((int) 14533)
0x1c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c8: Pop(3)
0x1c9: Push((int) 13303)
0x1ca: Push((int) 14538)
0x1cb: Push((int) 14534)
0x1cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cd: Pop(3)
0x1ce: Return(); Pop(0)

0x1cf: Push((int) 14540)
0x1d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d1: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1d2: PushEmpty(string)
0x1d3: Stack[-1] = "Neutral"
0x1d4: Call 0xd6

0x1d5: Pop(1)
0x1d6: Push((int) 13309)
0x1d7: @@ SetMessage(Stack[-1])
0x1d8: Pop(1)
0x1d9: @@ ClearReplies()
0x1da: Pop(0)
0x1db: Push((int) 13310)
0x1dc: Push((int) 14524)
0x1dd: Push((int) 14541)
0x1de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1df: Pop(3)
0x1e0: Return(); Pop(0)

0x1e1: Push((int) 14528)
0x1e2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e3: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1e4: PushEmpty(string)
0x1e5: Stack[-1] = "Neutral"
0x1e6: Call 0xd6

0x1e7: Pop(1)
0x1e8: Push((int) 13297)
0x1e9: @@ SetMessage(Stack[-1])
0x1ea: Pop(1)
0x1eb: @@ ClearReplies()
0x1ec: Pop(0)
0x1ed: Push((int) 13298)
0x1ee: Push((int) -1)
0x1ef: Push((int) 14529)
0x1f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f1: Pop(3)
0x1f2: Push((int) 13299)
0x1f3: Push((int) 14538)
0x1f4: Push((int) 14530)
0x1f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f6: Pop(3)
0x1f7: Return(); Pop(0)

0x1f8: Push((int) 14524)
0x1f9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fa: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x1fb: PushEmpty(string)
0x1fc: Stack[-1] = "Neutral"
0x1fd: Call 0xd6

0x1fe: Pop(1)
0x1ff: Push((int) 13293)
0x200: @@ SetMessage(Stack[-1])
0x201: Pop(1)
0x202: @@ ClearReplies()
0x203: Pop(0)
0x204: Push((int) 13295)
0x205: Push((int) -1)
0x206: Push((int) 14526)
0x207: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x208: Pop(3)
0x209: Push((int) 13306)
0x20a: Push((int) 14538)
0x20b: Push((int) 14537)
0x20c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20d: Pop(3)
0x20e: Return(); Pop(0)

0x20f: Push((int) 14538)
0x210: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x211: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x212: PushEmpty(string)
0x213: Stack[-1] = "Neutral"
0x214: Call 0xd6

0x215: Pop(1)
0x216: Push((int) 13307)
0x217: @@ SetMessage(Stack[-1])
0x218: Pop(1)
0x219: @@ ClearReplies()
0x21a: Pop(0)
0x21b: Push((int) 13308)
0x21c: Push((int) -1)
0x21d: Push((int) 14539)
0x21e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21f: Pop(3)
0x220: Return(); Pop(0)

0x221: Push((int) 14515)
0x222: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x223: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x224: PushEmpty(string)
0x225: Stack[-1] = "Neutral"
0x226: Call 0xd6

0x227: Pop(1)
0x228: Push((int) 13285)
0x229: @@ SetMessage(Stack[-1])
0x22a: Pop(1)
0x22b: @@ ClearReplies()
0x22c: Pop(0)
0x22d: Push((int) 13286)
0x22e: Push((int) -1)
0x22f: Push((int) 14516)
0x230: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x231: Pop(3)
0x232: Push((int) 13287)
0x233: Push((int) -1)
0x234: Push((int) 14517)
0x235: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x236: Pop(3)
0x237: Return(); Pop(0)

0x238: Push((int) 14511)
0x239: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23a: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x23b: PushEmpty(string)
0x23c: Stack[-1] = "Neutral"
0x23d: Call 0xd6

0x23e: Pop(1)
0x23f: Push((int) 13281)
0x240: @@ SetMessage(Stack[-1])
0x241: Pop(1)
0x242: @@ ClearReplies()
0x243: Pop(0)
0x244: Push((int) 13282)
0x245: Push((int) -1)
0x246: Push((int) 14512)
0x247: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x248: Pop(3)
0x249: Push((int) 13283)
0x24a: Push((int) -1)
0x24b: Push((int) 14513)
0x24c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24d: Pop(3)
0x24e: Return(); Pop(0)

0x24f: Push((int) 14492)
0x250: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x251: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x252: PushEmpty(string)
0x253: Stack[-1] = "Neutral"
0x254: Call 0xd6

0x255: Pop(1)
0x256: Push((int) 13263)
0x257: @@ SetMessage(Stack[-1])
0x258: Pop(1)
0x259: @@ ClearReplies()
0x25a: Pop(0)
0x25b: Push((int) 13264)
0x25c: Push((int) 14494)
0x25d: Push((int) 14493)
0x25e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25f: Pop(3)
0x260: Push((int) 13269)
0x261: Push((int) 14506)
0x262: Push((int) 14498)
0x263: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x264: Pop(3)
0x265: Push((int) 13274)
0x266: Push((int) 14504)
0x267: Push((int) 14503)
0x268: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x269: Pop(3)
0x26a: Return(); Pop(0)

0x26b: Push((int) 14504)
0x26c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26d: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x26e: PushEmpty(string)
0x26f: Stack[-1] = "Neutral"
0x270: Call 0xd6

0x271: Pop(1)
0x272: Push((int) 13275)
0x273: @@ SetMessage(Stack[-1])
0x274: Pop(1)
0x275: @@ ClearReplies()
0x276: Pop(0)
0x277: Push((int) 13276)
0x278: Push((int) 14499)
0x279: Push((int) 14505)
0x27a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27b: Pop(3)
0x27c: Return(); Pop(0)

0x27d: Push((int) 14506)
0x27e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x27f: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x280: PushEmpty(string)
0x281: Stack[-1] = "Neutral"
0x282: Call 0xd6

0x283: Pop(1)
0x284: Push((int) 13277)
0x285: @@ SetMessage(Stack[-1])
0x286: Pop(1)
0x287: @@ ClearReplies()
0x288: Pop(0)
0x289: Push((int) 13278)
0x28a: Push((int) 14499)
0x28b: Push((int) 14507)
0x28c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28d: Pop(3)
0x28e: Return(); Pop(0)

0x28f: Push((int) 14499)
0x290: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x291: IF (Stack[-1] == 0) GOTO 0x2a1; Pop(1)

0x292: PushEmpty(string)
0x293: Stack[-1] = "Neutral"
0x294: Call 0xd6

0x295: Pop(1)
0x296: Push((int) 13270)
0x297: @@ SetMessage(Stack[-1])
0x298: Pop(1)
0x299: @@ ClearReplies()
0x29a: Pop(0)
0x29b: Push((int) 13271)
0x29c: Push((int) 14501)
0x29d: Push((int) 14500)
0x29e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29f: Pop(3)
0x2a0: Return(); Pop(0)

0x2a1: Push((int) 14501)
0x2a2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a3: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2a4: PushEmpty(string)
0x2a5: Stack[-1] = "Neutral"
0x2a6: Call 0xd6

0x2a7: Pop(1)
0x2a8: Push((int) 13272)
0x2a9: @@ SetMessage(Stack[-1])
0x2aa: Pop(1)
0x2ab: @@ ClearReplies()
0x2ac: Pop(0)
0x2ad: Push((int) 13273)
0x2ae: Push((int) -1)
0x2af: Push((int) 14502)
0x2b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b1: Pop(3)
0x2b2: Return(); Pop(0)

0x2b3: Push((int) 14494)
0x2b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b5: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2b6: PushEmpty(string)
0x2b7: Stack[-1] = "Neutral"
0x2b8: Call 0xd6

0x2b9: Pop(1)
0x2ba: Push((int) 13265)
0x2bb: @@ SetMessage(Stack[-1])
0x2bc: Pop(1)
0x2bd: @@ ClearReplies()
0x2be: Pop(0)
0x2bf: Push((int) 13266)
0x2c0: Push((int) 14496)
0x2c1: Push((int) 14495)
0x2c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c3: Pop(3)
0x2c4: Return(); Pop(0)

0x2c5: Push((int) 14496)
0x2c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c7: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2c8: PushEmpty(string)
0x2c9: Stack[-1] = "Neutral"
0x2ca: Call 0xd6

0x2cb: Pop(1)
0x2cc: Push((int) 13267)
0x2cd: @@ SetMessage(Stack[-1])
0x2ce: Pop(1)
0x2cf: @@ ClearReplies()
0x2d0: Pop(0)
0x2d1: Push((int) 13268)
0x2d2: Push((int) -1)
0x2d3: Push((int) 14497)
0x2d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d5: Pop(3)
0x2d6: Return(); Pop(0)

0x2d7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2d8: PushEmpty(bool)
0x2d9: Call 0x418

0x2da: Pop(0)
0x2db: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x2dc: @ lshStopAnimation()
0x2dd: Pop(0)
0x2de: GOTO 0x2e1

0x2df: @ StopAnimation()
0x2e0: Pop(0)
0x2e1: Return(); Pop(0)

0x2e2: GOTO 0xe7

0x2e3: Return(); Pop(0)

0x2e4: @ Hold()
0x2e5: Pop(0)
0x2e6: GOTO 0x2e4

0x2e7: Return(); Pop(0)

0x2e8: PushEmpty()
0x2e9: PushEmpty(int, object)
0x2ea: Stack[-1] = Stack[-3]
0x2eb: Push(-2, 1); TaskCall(0)
0x2ec: Call 0x0

0x2ed: Pop(-2, 1); TaskReturn
0x2ee: Pop(2)
0x2ef: Return(); Pop(0)

0x2f0: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x2f1: @@ GetPosition(Stack[-7])
0x2f2: Pop(0)
0x2f3: @@ GetEyesHeight(Stack[-8])
0x2f4: Pop(0)
0x2f5: Push(CvectorIndex(Stack[-7], 1))
0x2f6: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x2f7: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2f8: @ GetPosition(Stack[-6])
0x2f9: Pop(0)
0x2fa: @ GetEyesHeight(Stack[-8])
0x2fb: Pop(0)
0x2fc: Push(CvectorIndex(Stack[-6], 1))
0x2fd: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x2fe: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2ff: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x300: Push(CvectorIndex(Stack[-5], 1))
0x301: Stack[-1] = (int) 0
0x302: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x303: Pop(0); Push(Stack[-5] | Stack[-5]);
0x304: Pop(1); Push(Sqrt(Stack[-1]))
0x305: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x306: Stack[-4] = -Stack[-5]; Pop(0);
0x307: Push((int) 70)
0x308: Pop(1); Push(Stack[-6] * Stack[-1]);
0x309: PushEmpty(cvector, cvector)
0x30a: Push(CVector(0.0, 1.0, 0.0))
0x30b: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x30c: Call 0x345

0x30d: Pop(1)
0x30e: Push((int) 25)
0x30f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x310: Pop(2); Push(Stack[-2] + Stack[-1]);
0x311: Push(CVector(0.0, 10.0, 0.0))
0x312: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x313: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x314: @ IsOverrideActive(Stack[-1])
0x315: Pop(0)
0x316: Push(Stack[-1])
0x317: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x318: Stack[-18] = (bool) 0
0x319: Return(); Pop(16)

0x31a: @ StopWorld()
0x31b: Pop(0)
0x31c: @ CameraTransit(Stack[-2], Stack[-4])
0x31d: Pop(0)
0x31e: Push(CvectorIndex(Stack[-3], 0))
0x31f: Push(CvectorIndex(Stack[-4], 2))
0x320: @ Rotate(Stack[-2], Stack[-1])
0x321: Pop(2)
0x322: @ CameraWaitForPlayFinish()
0x323: Pop(0)
0x324: @ ResumeWorld()
0x325: Pop(0)
0x326: Stack[-18] = (bool) 1
0x327: Return(); Pop(16)

0x328: PushEmpty()
0x329: @ CameraSwitchToNormal()
0x32a: Pop(0)
0x32b: Return(); Pop(0)

0x32c: PushEmpty(float, float, float, float)
0x32d: Push("playing ")
0x32e: Pop(1); Push(Stack[-1] + Stack[-6]);
0x32f: @ Trace(Stack[-1])
0x330: Pop(1)
0x331: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x332: Pop(0)
0x333: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x334: Pop(0)
0x335: Push("start: ")
0x336: Pop(1); Push(Stack[-1] + Stack[-3]);
0x337: @ Trace(Stack[-1])
0x338: Pop(1)
0x339: Push("end: ")
0x33a: Pop(1); Push(Stack[-1] + Stack[-2]);
0x33b: @ Trace(Stack[-1])
0x33c: Pop(1)
0x33d: Return(); Pop(4)

0x33e: PushEmpty(bool)
0x33f: Call 0x418

0x340: Pop(0)
0x341: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x342: @ lshStopSpeech()
0x343: Pop(0)
0x344: Return(); Pop(0)

0x345: PushEmpty(float, float)
0x346: Pop(0); Push(Stack[-3] | Stack[-3]);
0x347: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x348: Push((float)0.0)
0x349: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x34a: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x34b: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x34c: Return(); Pop(2)

0x34d: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x34e: Return(); Pop(2)

0x34f: PushEmpty(int, int)
0x350: @ GetVariable(Stack[-3], Stack[-1])
0x351: Pop(0)
0x352: Stack[-4] = Stack[-1]
0x353: Return(); Pop(2)

0x354: PushEmpty(int, int, bool, int, int, bool)
0x355: @@ GetItemID(Stack[-3])
0x356: Pop(0)
0x357: Push("Category")
0x358: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x359: Pop(1)
0x35a: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x35b: Pop(0)
0x35c: Pop(0); Push((bool) Stack[-1] == 0)
0x35d: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x35e: @@ DropItems(Stack[-8], Stack[-7])
0x35f: Pop(0)
0x360: Return(); Pop(6)

0x361: PushEmpty(object, object)
0x362: @ CreateInvItem(Stack[-1])
0x363: Pop(0)
0x364: @@ SetItemName(Stack[-4])
0x365: Pop(0)
0x366: PushEmpty(object, object, int)
0x367: Stack[-3] = Stack[-8]
0x368: Stack[-2] = Stack[-4]
0x369: Stack[-1] = Stack[-6]
0x36a: Call 0x354

0x36b: Pop(3)
0x36c: Return(); Pop(2)

0x36d: Stack[-1] = 0
0x36e: PushEmpty(object, object)
0x36f: @ FindActor(Stack[-1], Stack[-4])
0x370: Pop(0)
0x371: Pop(0); Push((bool) Stack[-1] == 0)
0x372: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x373: Stack[-5] = (bool) 0
0x374: Return(); Pop(2)

0x375: @ Trigger(Stack[-1], Stack[-3])
0x376: Pop(0)
0x377: Stack[-5] = (bool) 1
0x378: Return(); Pop(2)

0x379: Stack[-1] = 0
0x37a: PushEmpty()
0x37b: Push("playsound")
0x37c: Push("giveitem")
0x37d: @ TriggerWorld(Stack[-2], Stack[-1])
0x37e: Pop(2)
0x37f: Return(); Pop(0)

0x380: PushEmpty()
0x381: Push("dreport is given")
0x382: @ Trace(Stack[-1])
0x383: Pop(1)
0x384: PushEmpty(object, string, int)
0x385: Stack[-3] = Stack[-5]
0x386: Stack[-2] = "d7q01_dreport"
0x387: Stack[-1] = (int) 1
0x388: Call 0x361

0x389: Pop(3)
0x38a: Return(); Pop(0)

0x38b: PushEmpty()
0x38c: Push("ood7DBirdmask1")
0x38d: Push((int) 1)
0x38e: @ SetVariable(Stack[-2], Stack[-1])
0x38f: Pop(2)
0x390: Return(); Pop(0)

0x391: PushEmpty()
0x392: PushEmpty(bool, string, string)
0x393: Stack[-2] = "quest_d7_01"
0x394: Stack[-1] = "kill_player"
0x395: Call 0x36e

0x396: Pop(3)
0x397: Return(); Pop(0)

0x398: PushEmpty()
0x399: PushEmpty(bool, object)
0x39a: Stack[-1] = Stack[-3]
0x39b: Call 0x3d0

0x39c: Pop(1)
0x39d: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x39e: Stack[-2] = (bool) 1
0x39f: Return(); Pop(0)

0x3a0: Stack[-2] = (bool) 0
0x3a1: Return(); Pop(0)

0x3a2: PushEmpty()
0x3a3: PushEmpty(int, string)
0x3a4: Stack[-1] = "d7q01"
0x3a5: Call 0x34f

0x3a6: Pop(1)
0x3a7: Push((int) 2)
0x3a8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3a9: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3aa: Stack[-2] = (bool) 1
0x3ab: Return(); Pop(0)

0x3ac: Stack[-2] = (bool) 0
0x3ad: Return(); Pop(0)

0x3ae: PushEmpty()
0x3af: PushEmpty(int, string)
0x3b0: Stack[-1] = "d7q01"
0x3b1: Call 0x34f

0x3b2: Pop(1)
0x3b3: Push((int) 1)
0x3b4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3b5: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x3b6: Stack[-2] = (bool) 1
0x3b7: Return(); Pop(0)

0x3b8: Stack[-2] = (bool) 0
0x3b9: Return(); Pop(0)

0x3ba: PushEmpty()
0x3bb: PushEmpty(bool, object)
0x3bc: Stack[-1] = Stack[-3]
0x3bd: Call 0x3d3

0x3be: Pop(1)
0x3bf: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x3c0: Stack[-2] = (bool) 1
0x3c1: Return(); Pop(0)

0x3c2: Stack[-2] = (bool) 0
0x3c3: Return(); Pop(0)

0x3c4: PushEmpty()
0x3c5: PushEmpty(int, string)
0x3c6: Stack[-1] = "ood7DBirdmask1"
0x3c7: Call 0x34f

0x3c8: Pop(1)
0x3c9: Push((int) 0)
0x3ca: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3cb: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3cc: Stack[-2] = (bool) 1
0x3cd: Return(); Pop(0)

0x3ce: Stack[-2] = (bool) 0
0x3cf: Return(); Pop(0)

0x3d0: PushEmpty()
0x3d1: Stack[-2] = (bool) 0
0x3d2: Return(); Pop(0)

0x3d3: PushEmpty(int, int, int, bool, bool, int, object, int, bool, bool, int, int, int, bool, bool, int, object, int, bool, bool)
0x3d4: Push((int) 1)
0x3d5: @@ GetItemCount(Stack[-11], Stack[-1])
0x3d6: Pop(1)
0x3d7: Push("bird_mask")
0x3d8: @ GetInvItemByName(Stack[-10], Stack[-1])
0x3d9: Pop(1)
0x3da: Push("bird_balahon")
0x3db: @ GetInvItemByName(Stack[-9], Stack[-1])
0x3dc: Pop(1)
0x3dd: Stack[-7] = (bool) 0
0x3de: Stack[-6] = (bool) 0
0x3df: Stack[-5] = (int) 0
0x3e0: Pop(0); Push((bool) Stack[-5] < Stack[-10])
0x3e1: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3e2: Push((int) 1)
0x3e3: @@ GetItem(Stack[-5], Stack[-6], Stack[-1])
0x3e4: Pop(1)
0x3e5: @@ GetItemID(Stack[-3])
0x3e6: Pop(0)
0x3e7: Pop(0); Push((bool) Stack[-3] == Stack[-9])
0x3e8: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3e9: Push((int) 1)
0x3ea: @@ IsItemSelected(Stack[-3], Stack[-6], Stack[-1])
0x3eb: Pop(1)
0x3ec: Push(Stack[-2])
0x3ed: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3ee: Stack[-7] = (bool) 1
0x3ef: GOTO 0x3f8

0x3f0: Pop(0); Push((bool) Stack[-3] == Stack[-8])
0x3f1: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3f2: Push((int) 1)
0x3f3: @@ IsItemSelected(Stack[-2], Stack[-6], Stack[-1])
0x3f4: Pop(1)
0x3f5: Push(Stack[-1])
0x3f6: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3f7: Stack[-6] = (bool) 1
0x3f8: Stack[-4] = 0
0x3f9: Push((int) 1)
0x3fa: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x3fb: GOTO 0x3e0

0x3fc: Stack[-22] = (bool) 0
0x3fd: Push(Stack[-7])
0x3fe: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3ff: Push(Stack[-6])
0x400: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x401: Stack[-22] = (bool) 1
0x402: Return(); Pop(20)

0x403: PushEmpty(int, int)
0x404: Push("player")
0x405: @ GetVariable(Stack[-1], Stack[-2])
0x406: Pop(1)
0x407: Push((int) 0)
0x408: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x409: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x40a: Stack[-3] = (int) 200001
0x40b: Return(); Pop(2)

0x40c: GOTO 0x412

0x40d: Push((int) 1)
0x40e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x40f: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x410: Stack[-3] = (int) 200002
0x411: Return(); Pop(2)

0x412: Stack[-3] = (int) 200003
0x413: Return(); Pop(2)

0x414: Stack[-1] = (int) 4029
0x415: Return(); Pop(0)

0x416: Stack[-1] = "ui/NPC_Black.png"
0x417: Return(); Pop(0)

0x418: Stack[-1] = (bool) 0
0x419: Return(); Pop(0)


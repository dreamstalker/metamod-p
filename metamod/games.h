// vi: set ts=4 sw=4 :
// vim: set tw=75 :
 
// games.h - list of supported game mods and their data
 
/*
 * Copyright (c) 2001-2013 Will Day <willday@hpgx.net>
 *
 *    This file is part of Metamod.
 *
 *    Metamod is free software; you can redistribute it and/or modify it
 *    under the terms of the GNU General Public License as published by the
 *    Free Software Foundation; either version 2 of the License, or (at
 *    your option) any later version.
 *
 *    Metamod is distributed in the hope that it will be useful, but
 *    WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *    General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with Metamod; if not, write to the Free Software Foundation,
 *    Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *    In addition, as a special exception, the author gives permission to
 *    link the code of this program with the Half-Life Game Engine ("HL
 *    Engine") and Modified Game Libraries ("MODs") developed by Valve,
 *    L.L.C ("Valve").  You must obey the GNU General Public License in all
 *    respects for all of the code used other than the HL Engine and MODs
 *    from Valve.  If you modify this file, you may extend this exception
 *    to your version of the file, but you are not obligated to do so.  If
 *    you do not wish to do so, delete this exception statement from your
 *    version.
 *
 */
 
// This list is now kept in a separate file to facilitate generating the
// list from game data stored in a convenient db.

#if defined(__x86_64__) || defined(__amd64__)
#  define MODARCH(a,b) (a"_amd64"b)
#else
#  define MODARCH(a,b) (a"_i386"b)
#endif

	{"action",             MODARCH("ahl",".so"),          "ahl.dll",           "Action Half-Life"},
	{"ag",                 MODARCH("ag",".so"),           "ag.dll",            "Adrenaline Gamer Steam"},
	{"ag3",                MODARCH("hl",".so"),           "hl.dll",            "Adrenalinegamer 3.x"},
	{"aghl",               MODARCH("ag",".so"),           "ag.dll",            "Adrenalinegamer 4.x"},
	{"arg",                MODARCH("arg",".so"),          "hl.dll",            "Arg!"},
	{"asheep",             MODARCH("hl",".so"),           "hl.dll",            "Azure Sheep"},
	{"bg",                 MODARCH("bg",".so"),           "bg.dll",            "The Battle Grounds"},
	{"bot",                MODARCH("bot",".so"),          "bot.dll",           "Bot"},
	{"brainbread",         MODARCH("bb",".so"),           "bb.dll",            "Brain Bread"},
	{"bumpercars",         MODARCH("hl",".so"),           "hl.dll",            "Bumper Cars"},
	{"buzzybots",          MODARCH("bb",".so"),           "bb.dll",            "BuzzyBots"},
	{"cs13",               MODARCH("cs",".so"),           "mp.dll",            "Counter-Strike 1.3"},
	{"cstrike",            MODARCH("cs",".so"),           "mp.dll",            "Counter-Strike"},
	{"csv15",              MODARCH("cs",".so"),           "mp.dll",            "CS 1.5 for Steam"},
	{"czero",              MODARCH("cs",".so"),           "mp.dll",            "Counter-Strike:Condition Zero"},
	{"dcrisis",            MODARCH("dc",".so"),           "dc.dll",            "Desert Crisis"},
	{"dmc",                MODARCH("dmc",".so"),          "dmc.dll",           "Deathmatch Classic"},
	{"dod",                MODARCH("dod",".so"),          "dod.dll",           "Day of Defeat"},
	{"dpb",               "pb.i386.so",               "pb.dll",            "Digital Paintball"},
	{"dragonmodz",         MODARCH("hl",".so"),           "mp.dll",            "Dragon Mod Z"},
	{"esf",                MODARCH("hl",".so"),           "hl.dll",            "Earth's Special Forces"},
	{"existence",          MODARCH("ex",".so"),           "existence.dll",     "Existence"},
	{"firearms",           MODARCH("fa",".so"),           "firearms.dll",      "Firearms"},
	{"firearms25",         MODARCH("fa",".so"),           "firearms.dll",      "Retro Firearms"},
	{"freeze",             MODARCH("mp",".so"),           "mp.dll",            "Freeze"},
	{"frontline",          MODARCH("front",".so"),        "frontline.dll",     "Frontline Force"},
	{"gangstawars",        MODARCH("gangsta",".so"),      "gwars27.dll",       "Gangsta Wars"},
	{"gangwars",           MODARCH("mp",".so"),           "mp.dll",            "Gangwars"},
	{"gearbox",            MODARCH("opfor",".so"),        "opfor.dll",         "Opposing Force"},
	{"globalwarfare",      MODARCH("gw",".so"),           "mp.dll",            "Global Warfare"},
	{"goldeneye",          MODARCH("golden",".so"),       "mp.dll",            "Goldeneye"},
	{"hl15we",             MODARCH("hl",".so"),           "hl.dll",            "Half-Life 1.5: Weapon Edition"},
	{"hlrally",            MODARCH("hlr",".so"),          "hlrally.dll",       "HL-Rally"},
	{"holywars",           MODARCH("hl",".so"),           "holywars.dll",      "Holy Wars"},
	{"hostileintent",      MODARCH("hl",".so"),           "hl.dll",            "Hostile Intent"},
	{"ios",                MODARCH("ios",".so"),          "ios.dll",           "International Online Soccer"},
	{"judgedm",            MODARCH("judge",".so"),        "mp.dll",            "Judgement"},
	{"kanonball",          MODARCH("hl",".so"),           "kanonball.dll",     "Kanonball"},
	{"monkeystrike",       MODARCH("ms",".so"),           "monkey.dll",        "Monkeystrike"},
	{"MorbidPR",           MODARCH("morbid",".so"),       "morbid.dll",        "Morbid Inclination"},
	{"movein",             MODARCH("hl",".so"),           "hl.dll",            "Move In!"},
	{"ns",                 MODARCH("ns",".so"),           "ns.dll",            "Natural Selection"},
	{"nsp",                MODARCH("ns",".so"),           "ns.dll",            "Natural Selection Beta"},
	{"oel",                MODARCH("hl",".so"),           "hl.dll",            "OeL Half-Life"},
	{"og",                 MODARCH("og",".so"),           "og.dll",            "Over Ground"},
	{"ol",                 MODARCH("ol",".so"),           "hl.dll",            "Outlawsmod"},
	{"ops1942",            MODARCH("spirit",".so"),       "spirit.dll",        "Operations 1942"},
	{"osjb",               MODARCH("osjb",".so"),         "jail.dll",          "Open-Source Jailbreak"},
	{"outbreak",          "none",                     "hl.dll",            "Out Break"},
	{"oz",                 MODARCH("mp",".so"),           "mp.dll",            "Oz Deathmatch"},
	{"paintball",          MODARCH("pb",".so"),           "mp.dll",            "Paintball"},
	{"penemy",             MODARCH("pe",".so"),           "pe.dll",            "Public Enemy"},
	{"phineas",            MODARCH("phineas",".so"),      "phineas.dll",       "Phineas Bot"},
	{"ponreturn",          MODARCH("ponr",".so"),         "mp.dll",            "Point of No Return"},
	{"pvk",                MODARCH("hl",".so"),           "hl.dll",            "Pirates, Vikings and Knights"},
	{"rc2",                MODARCH("rc2",".so"),          "rc2.dll",           "Rocket Crowbar 2"},
	{"retrocs",            MODARCH("rcs",".so"),          "rcs.dll",           "Retro Counter-Strike"},
	{"rewolf",             MODARCH("hl",".so"),           "gunman.dll",        "Gunman Chronicles"},
	{"ricochet",           MODARCH("ricochet",".so"),     "mp.dll",            "Ricochet"},
	{"rockcrowbar",        MODARCH("rc",".so"),           "rc.dll",            "Rocket Crowbar"},
	{"rspecies",           MODARCH("hl",".so"),           "hl.dll",            "Rival Species"},
	{"scihunt",           "shunt.so",                 "shunt.dll",         "Scientist Hunt"},
	{"sdm",                MODARCH("sdmmod",".so"),       "sdmmod.dll",        "Special Death Match"},
	{"Ship",               MODARCH("ship",".so"),         "ship.dll",          "The Ship"},
	{"si",                 MODARCH("si",".so"),           "si.dll",            "Science & Industry"},
	{"snow",               MODARCH("snow",".so"),         "snow.dll",          "Snow-War"},
	{"stargatetc",         MODARCH("hl",".so"),           "hl.dll",            "StargateTC"},
	{"svencoop",           MODARCH("hl",".so"),           "hl.dll",            "Sven Coop"},
	{"swarm",              MODARCH("swarm",".so"),        "swarm.dll",         "Swarm"},
	{"tfc",                MODARCH("tfc",".so"),          "tfc.dll",           "Team Fortress Classic"},
	{"thewastes",          MODARCH("thewastes",".so"),    "thewastes.dll",     "The Wastes"},
	{"timeless",           MODARCH("pt",".so"),           "timeless.dll",      "Project Timeless"},
	{"tod",                MODARCH("hl",".so"),           "hl.dll",            "Tour of Duty"},
	{"trainhunters",       MODARCH("th",".so"),           "th.dll",            "Train Hunters"},
	{"trevenge",          "trevenge.so",              "trevenge.dll",      "The Terrorist Revenge"},
	{"TS",                 MODARCH("ts",".so"),           "mp.dll",            "The Specialists"},
	{"tt",                 MODARCH("tt",".so"),           "tt.dll",            "The Trenches"},
	{"underworld",         MODARCH("uw",".so"),           "uw.dll",            "Underworld Bloodline"},
	{"valve",              MODARCH("hl",".so"),           "hl.dll",            "Half-Life Deathmatch"},
	{"vs",                 MODARCH("vs",".so"),           "mp.dll",            "VampireSlayer"},
	{"wantedhl",           MODARCH("hl",".so"),           "wanted.dll",        "Wanted!"},
	{"wasteland",         "whl_linux.so",             "mp.dll",            "Wasteland"},
	{"weapon_wars",        MODARCH("ww",".so"),           "hl.dll",            "Weapon Wars"},
	{"wizwars",            MODARCH("mp",".so"),           "hl.dll",            "Wizard Wars"},
	{"wormshl",           "wormshl_i586.so",          "wormshl.dll",       "WormsHL"},
	{"zp",                "none",                     "mp.dll",            "Zombie Panic"},

<?php

interface ClassType {
    public function name();
    public function about();
}


class Warrior implements ClassType {

    private $about = 
        "Warriors equip themselves carefully for combat and engage<br> 
        their enemies head-on, letting attacks glance off their heavy armor.<br>
        They use diverse combat tactics and a wide variety of weapon types to<br>
        protect their more vulnerable allies. Warriors must carefully<br>
        master their rage – the power behind their strongest attacks – <br>
        in order to maximize their effectiveness in combat.<br>";

    public function name(){
        return "Warrior";
    }

    public function about(){
        return $this->about;
    }
}

class Paladin implements ClassType {

    private $about = 
        "Paladins stand directly in front of their enemies, relying <br>
        on heavy armor and healing in order to survive incoming attacks. <br>
        Whether with massive shields or crushing two-handed weapons, <br>
        Paladins are able to keep claws and swords from their weaker fellows<br>
        or they use healing magic to ensure that they remain on their feet.<br>";

    public function name(){
        return "Paladin";
    }

    public function about(){
        return $this->about;
    }
}

class Hunter implements ClassType {

    private $about = 
        "Hunters battle their foes at a distance, commanding their pets<br>
        to attack while they nock their arrows and fire their guns.<br>
        Though their missile weapons are effective at short and long ranges,<br>
        hunters are also highly mobile. They can evade or restrain<br>
        their foes to control the arena of battle.<br>";

    public function name(){
        return "Hunter";
    }

    public function about(){
        return $this->about;
    }
}

class Rouge implements ClassType {

    private $about = 
        "Rogues often initiate combat with a surprise attack from the shadows,<br>
        leading with vicious melee strikes. When in protracted battles,<br>
        they utilize a successive combination of carefully chosen attacks<br>
        to soften the enemy up for a killing blow. Rogues must take<br>
        special care when selecting targets so that their combo attacks<br>
        are not wasted, and they must be conscious of when to hide<br>
        or flee if a battle turns against them.<br>";

    public function name(){
        return "Rouge";
    }

    public function about(){
        return $this->about;
    }
}


class Priest implements ClassType {

    private $about = 
        "Priests use powerful healing magic to fortify themselves and<br>
        their allies. They also wield powerful offensive spells from a<br>
        distance, but can be overwhelmed by enemies due to their physical<br>
        frailty and minimal armor. Experienced priests carefully balance <br>
        the use of their offensive powers when tasked with keeping their party alive.<br>";

    public function name(){
        return "Priest";
    }

    public function about(){
        return $this->about;
    }
}

class DeathKnight implements ClassType {

    private $about = 
        "Death Knights engage their foes up-close, supplementing swings of<br>
        their weapons with dark magic that renders enemies vulnerable or<br>
        damages them with unholy power. They drag foes into one-on-one<br>
        conflicts, compelling them to focus their attacks away from<br>
        weaker companions. To prevent their enemies from fleeing<br>
        their grasp, death knights must remain mindful of the power<br>
        they call forth from runes, and pace their attacks appropriately.<br>";

    public function name(){
        return "Death Knight";
    }

    public function about(){
        return $this->about;
    }
}

class Shaman implements ClassType {

    private $about = 
        "During combat, shaman place damaging and controlling totems on<br>
        the ground to maximize their effectiveness while hindering their<br>
        enemies. Shaman are versatile enough to battle foes up close<br>
        or at range, but wise shaman choose their avenue of attack<br>
        based on their enemies’ strengths and weaknesses.<br>";

    public function name(){
        return "Shaman";
    }

    public function about(){
        return $this->about;
    }
}

class Mage implements ClassType {

    private $about =
        "Mages demolish their foes with arcane incantations. Although they<br>
        wield powerful offensive spells, mages are fragile and lightly<br>
        armored, making them particularly vulnerable to close-range attacks.<br>
        Wise mages make careful use of their spells to keep <br>
        their foes at a distance or hold them in place.<br>";

    public function name(){
        return "Mage";
    }

    public function about(){
        return $this->about;
    }
}

class Warlock implements ClassType {

    private $about =
        "Warlocks burn and destroy weakened foes with a combination of<br>
        crippling illnesses and dark magic. While their demon pets protect<br>
        and enhance them, warlocks strike at their enemies from a distance.<br>
        As physically weak spellcasters bereft of heavy armor, cunning warlocks<br>
        allow their minions to take the brunt of enemy attacks in order to save their own skin.<br>";

    public function name(){
        return "Warlock";
    }

    public function about(){
        return $this->about;
    }
}

class Monk implements ClassType {

    private $about =
        "Whatever their combat role, monks rely mainly on their hands<br>
        and feet to do the talking, and on strong connection with their<br>
        inner chi to power their abilities. Abilities such as<br>
        Expel Harm and Chi Wave both heal their allies <br>
        while at the same time damaging their enemies.<br>";

    public function name(){
        return "Monk";
    }

    public function about(){
        return $this->about;
    }
}

class Druid implements ClassType {

    private $about =
        "Druids are versatile combatants, in that they can fulfill<br>
        nearly every role – healing, tanking, and damage dealing.<br>
        It’s critical that druids tailor the form they choose<br>
        to the situation, as each form bears a specific purpose.<br>";

    public function name(){
        return "Druid";
    }

    public function about(){
        return $this->about;
    }
}

class DemonHunter implements ClassType {

    private $about =
        "Forgoing heavy armor, Demon Hunters capitalize on speed,<br>
        closing the distance quickly to strike enemies with<br>
        one-handed weapons. However, Illidari must also use<br>
        their agility defensively to ensure that battles end favorably.<br>";

    public function name(){
        return "Demon Hunter";
    }

    public function about(){
        return $this->about;
    }
}


?>
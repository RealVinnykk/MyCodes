function Pokemon(pokeName, level) {
    pokeName;
    level;
    Hp = level * 1.3;
    ATP = level * 1.1;
    return pokeName + " " + level;
}

function print(text) {
    console.log(text)
}

module.exports = { Pokemon, print }
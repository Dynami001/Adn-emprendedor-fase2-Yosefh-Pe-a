#include <iostream>
#include <string>

using namespace std;

int main() {
    string respuesta;
    bool problemaConocido = true;
    bool tieneClientes = true;
    bool fondoInversion = true;
    bool ideaClara = true;
    bool solucionesSimilares = true;
    bool publicoObjetivo = true;
    bool ideaValidada = true;
    bool planNegocio = true;
    bool dedicacionLargoPlazo = true;
    bool conoceCompetencia = true;
    bool diferenciacion = true;
    bool experienciaSector = true;
    bool equipoTrabajo = true;
    bool preparadoRiesgoFinanciero = true;
    bool accesoRecursos = true;
    bool modeloIngresos = true;
    bool estrategiaMarketing = true;
    bool adaptacionFeedback = true;
    bool desafiosIdentificados = true;
    bool planEscalabilidad = true;
    bool redContactos = true;
    bool regulacionesConocidas = true;
    bool preparadoLiderazgo = true;
    bool planContingencia = true;
    bool tendenciasMercado = true;
    bool objetivosClaros = true;
    bool medicionExito = true;
    bool dispuestoAPivotar = true;
    bool pasionPorSolucionar = true;

    cout << "Cuestionario para evaluar la viabilidad de tu startup\n\n";

    // Pregunta 1
    cout << "1. ¿Tienes una idea clara del problema que tu startup resolverá? (si/no): ";
    cin >> respuesta;
    if (respuesta != "si") ideaClara = false;

    // Pregunta 2
    cout << "2. ¿Conoces sobre el problema que tu startup va a solucionar? (si/no): ";
    cin >> respuesta;
    if (respuesta != "si") problemaConocido = false;

    // Pregunta 3
    cout << "3. ¿Has investigado si ya existen soluciones similares en el mercado? (si/no): ";
    cin >> respuesta;
    if (respuesta != "si") solucionesSimilares = false;

    // Pregunta 4
    cout << "4. ¿Sabes cuál es tu público objetivo? (si/no): ";
    cin >> respuesta;
    if (respuesta != "si") publicoObjetivo = false;

    // Pregunta 5
    cout << "5. ¿Has validado tu idea con posibles clientes o usuarios? (si/no): ";
    cin >> respuesta;
    if (respuesta != "si") ideaValidada = false;

    // Pregunta 6
    cout << "6. ¿Tienes un plan de negocio definido? (si/no): ";
    cin >> respuesta;
    if (respuesta != "si") planNegocio = false;

    // Pregunta 7
    cout << "7. ¿Tu startup tendría una buena cantidad de clientes? (si/no): ";
    cin >> respuesta;
    if (respuesta != "si") tieneClientes = false;

    // Pregunta 8
    cout << "8. ¿Estás dispuesto a dedicar tiempo y esfuerzo a largo plazo en este proyecto? (si/no): ";
    cin >> respuesta;
    if (respuesta != "si") dedicacionLargoPlazo = false;

    // Pregunta 9
    cout << "9. ¿Conoces a tu competencia directa e indirecta? (si/no): ";
    cin >> respuesta;
    if (respuesta != "si") conoceCompetencia = false;

    // Pregunta 10
    cout << "10. ¿Has considerado cómo te diferenciarás de la competencia? (si/no): ";
    cin >> respuesta;
    if (respuesta != "si") diferenciacion = false;

    // Pregunta 11
    cout << "11. ¿Tienes experiencia en el sector en el que quieres emprender? (si/no): ";
    cin >> respuesta;
    if (respuesta != "si") experienciaSector = false;

    // Pregunta 12
    cout << "12. ¿Tienes un fondo de inversión preparado? (si/no): ";
    cin >> respuesta;
    if (respuesta != "si") fondoInversion = false;

    // Pregunta 13
    cout << "13. ¿Cuentas con un equipo de trabajo o socios que complementen tus habilidades? (si/no): ";
    cin >> respuesta;
    if (respuesta != "si") equipoTrabajo = false;

    // Pregunta 14
    cout << "14. ¿Estás preparado para enfrentar el riesgo financiero de iniciar una startup? (si/no): ";
    cin >> respuesta;
    if (respuesta != "si") preparadoRiesgoFinanciero = false;

    // Pregunta 15
    cout << "15. ¿Tienes acceso a los recursos necesarios (financieros, humanos, tecnológicos) para comenzar? (si/no): ";
    cin >> respuesta;
    if (respuesta != "si") accesoRecursos = false;

    // Pregunta 16
    cout << "16. ¿Has definido un modelo de ingresos claro y sostenible? (si/no): ";
    cin >> respuesta;
    if (respuesta != "si") modeloIngresos = false;

    // Pregunta 17
    cout << "17. ¿Tienes una estrategia de marketing para atraer a tus primeros clientes? (si/no): ";
    cin >> respuesta;
    if (respuesta != "si") estrategiaMarketing = false;

    // Pregunta 18
    cout << "18. ¿Estás dispuesto a escuchar y adaptarte al feedback de tus clientes? (si/no): ";
    cin >> respuesta;
    if (respuesta != "si") adaptacionFeedback = false;

    // Pregunta 19
    cout << "19. ¿Has identificado posibles desafíos u obstáculos que podrían surgir? (si/no): ";
    cin >> respuesta;
    if (respuesta != "si") desafiosIdentificados = false;

    // Pregunta 20
    cout << "20. ¿Tienes un plan para escalar el negocio si resulta exitoso? (si/no): ";
    cin >> respuesta;
    if (respuesta != "si") planEscalabilidad = false;

    // Pregunta 21
    cout << "21. ¿Cuentas con una red de contactos que pueda apoyarte en el proceso? (si/no): ";
    cin >> respuesta;
    if (respuesta != "si") redContactos = false;

    // Pregunta 22
    cout << "22. ¿Has investigado las regulaciones y normativas que podrían afectar a tu startup? (si/no): ";
    cin >> respuesta;
    if (respuesta != "si") regulacionesConocidas = false;

    // Pregunta 23
    cout << "23. ¿Estás preparado para asumir el rol de líder y tomar decisiones difíciles? (si/no): ";
    cin >> respuesta;
    if (respuesta != "si") preparadoLiderazgo = false;

    // Pregunta 24
    cout << "24. ¿Tienes un plan de contingencia en caso de que algo no salga como esperas? (si/no): ";
    cin >> respuesta;
    if (respuesta != "si") planContingencia = false;

    // Pregunta 25
    cout << "25. ¿Estás al tanto de las tendencias y cambios en el mercado de tu sector? (si/no): ";
    cin >> respuesta;
    if (respuesta != "si") tendenciasMercado = false;

    // Pregunta 26
    cout << "26. ¿Tienes un objetivo claro para los próximos 6-12 meses? (si/no): ";
    cin >> respuesta;
    if (respuesta != "si") objetivosClaros = false;

    // Pregunta 27
    cout << "27. ¿Has pensado en cómo medirás el éxito de tu startup? (si/no): ";
    cin >> respuesta;
    if (respuesta != "si") medicionExito = false;

    // Pregunta 28
    cout << "28. ¿Estás dispuesto a aceptar que tu idea podría no ser viable y pivotar si es necesario? (si/no): ";
    cin >> respuesta;
    if (respuesta != "si") dispuestoAPivotar = false;

    // Pregunta 29
    cout << "29. ¿Te apasiona la idea de solucionar el problema en el que estás enfocado? (si/no): ";
    cin >> respuesta;
    if (respuesta != "si") pasionPorSolucionar = false;

    cout << "\n\nRecomendaciones:\n";

    // Recomendaciones basadas en las respuestas
    if (!ideaClara) cout << "- Asegúrate de tener una idea clara del problema que tu startup resolverá.\n";
    if (!problemaConocido) cout << "- Es importante que estudies más sobre el problema que tu startup va a solucionar.\n";
    if (!solucionesSimilares) cout << "- Investiga si ya existen soluciones similares en el mercado y cómo podrías diferenciarte.\n";
    if (!publicoObjetivo) cout << "- Define claramente tu público objetivo.\n";
    if (!ideaValidada) cout << "- Valida tu idea con posibles clientes o usuarios.\n";
    if (!planNegocio) cout << "- Define un plan de negocio detallado.\n";
    if (!tieneClientes) cout << "- Analiza la viabilidad de mantener a flote la startup con la cantidad de clientes que proyectas.\n";
    if (!dedicacionLargoPlazo) cout << "- Considera si estás dispuesto a dedicar tiempo y esfuerzo a largo plazo en este proyecto.\n";
    if (!conoceCompetencia) cout << "- Investiga más sobre tu competencia directa e indirecta.\n";
    if (!diferenciacion) cout << "- Considera cómo te diferenciarás de la competencia.\n";
    if (!experienciaSector) cout << "- Gana más experiencia en el sector en el que quieres emprender.\n";
    if (!equipoTrabajo) cout << "- Busca socios o un equipo de trabajo que complemente tus habilidades.\n";
    if (!preparadoRiesgoFinanciero) cout << "- Evalúa si estás preparado para asumir el riesgo financiero de iniciar una startup.\n";
    if (!accesoRecursos) cout << "- Asegúrate de tener acceso a los recursos necesarios (financieros, humanos, tecnológicos) para comenzar.\n";
    if (!modeloIngresos) cout << "- Define un modelo de ingresos claro y sostenible.\n";
    if (!estrategiaMarketing) cout << "- Desarrolla una estrategia de marketing para atraer a tus primeros clientes.\n";
    if (!adaptacionFeedback) cout << "- Mantente abierto a escuchar y adaptarte al feedback de tus clientes.\n";
    if (!desafiosIdentificados) cout << "- Identifica posibles desafíos u obstáculos que podrían surgir.\n";
    if (!planEscalabilidad) cout << "- Planifica cómo escalar el negocio si resulta exitoso.\n";
    if (!redContactos) cout << "- Construye una red de contactos que pueda apoyarte en el proceso.\n";
    if (!regulacionesConocidas) cout << "- Investiga las regulaciones y normativas que podrían afectar a tu startup.\n";
    if (!preparadoLiderazgo) cout << "- Prepárate para asumir el rol de líder y tomar decisiones difíciles.\n";
    if (!planContingencia) cout << "- Desarrolla un plan de contingencia en caso de que algo no salga como esperas.\n";
    if (!tendenciasMercado) cout << "- Mantente al tanto de las tendencias y cambios en el mercado de tu sector.\n";
    if (!objetivosClaros) cout << "- Establece objetivos claros para los próximos 6-12 meses.\n";
    if (!medicionExito) cout << "- Piensa en cómo medirás el éxito de tu startup.\n";
    if (!dispuestoAPivotar) cout << "- Considera la posibilidad de que tu idea podría no ser viable y estar dispuesto a pivotar si es necesario.\n";
    if (!pasionPorSolucionar) cout << "- Asegúrate de que te apasione la idea de solucionar el problema en el que estás enfocado.\n";

return 0;
}